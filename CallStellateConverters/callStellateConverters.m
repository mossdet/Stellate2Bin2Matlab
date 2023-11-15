clc; clear all; close all;

filesPath = getFilesPath();
outputPath =  "F:\StellateConverter\CallStellateConverters\FilesOutput\";                   % Path where files are to be saved
stellate2Bin_ExePath = "F:\StellateConverter\CallStellateConverters\Stellate2Bin.exe";      % Path to stellate to bin converter
bin2Matlab_ExePath = "F:\StellateConverter\CallStellateConverters\Bin2Matlab.exe";          % Path to bin to stellate converter 

callStellate2Bin(filesPath, outputPath, stellate2Bin_ExePath)
callBin2Matlab(outputPath, bin2Matlab_ExePath)
plotMatlabFiles(outputPath)

function callStellate2Bin(filesPath, outputPath, stellate2Bin_ExePath)
    for fi = 1:length(filesPath)
        stellateFile = filesPath{fi};
        
        command = strcat(...
            stellate2Bin_ExePath, {' '},...
            stellateFile, {' '},...
            outputPath, {' '});
        
        system(command{1})
    end
end

function callBin2Matlab(outputPath, bin2Matlab_ExePath)

dirCmd = strcat(outputPath, '**\*.bin');
binaryFiles = dir(dirCmd);

    for i = 1:length(binaryFiles)
        if binaryFiles(i).isdir == 0
            
            binaryFilePath = strcat(binaryFiles(i).folder, '\', binaryFiles(i).name);
            preFoldersIdxs = strfind(binaryFilePath, '\');
            subjName = binaryFilePath(preFoldersIdxs(end-2)+1:preFoldersIdxs(end-1)-1);

            %Read header file
            hdrFilename = strcat(outputPath, subjName, '\', subjName, '_hdr.txt');
            hdr =  tdfread(hdrFilename,'\t') ;
            nrSamples = hdr.Val(5, :);

            
            command = strcat(...
            bin2Matlab_ExePath, {' '},...
            binaryFilePath, {' '},...
            nrSamples, {' '});
        
            system(command{1})
        end
    end
end

function plotMatlabFiles(outputPath)
matFiles = dir(strcat(outputPath, '**\*.mat'));
    for i = 1:length(matFiles)
        if matFiles(i).isdir == 0
            matlabFilePath = strcat(matFiles(i).folder, '\', matFiles(i).name);
            preFoldersIdxs = strfind(matlabFilePath, '\');
            subjName = matlabFilePath(preFoldersIdxs(end-2)+1:preFoldersIdxs(end-1)-1);
            channName = matlabFilePath(preFoldersIdxs(end)+1:end - 4);

            %Read header file
            hdrFilename = strcat(outputPath, subjName, '\', subjName, '_hdr.txt');
            hdr =  tdfread(hdrFilename,'\t') ;
            fs = str2double(hdr.Val(4, :));
            nrSamples = str2double(hdr.Val(5, :));
            t = (1:1:nrSamples)/fs;
            
            load(matlabFilePath, 'signal');
            plot(t, signal, '-k', 'LineWidth', 0.0005);
            xlabel('Time(s)');
            ylabel('Amplitude (uV)');
            title({subjName; channName});
            xlim([0 16])
            
            close();
        end
    end
end
    
function filesPath = getFilesPath()
    filesPath = {'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt10\Pt10\Pt10.SIG'
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt11\Pt11.SIG\PT11.SIG';...
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt10\Pt10\Pt10.SIG';...
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt9\Pt9.SIG\PT9.SIG';...
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt8\Pt8.SIG\PT8.SIG';...
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt7\Pt7.SIG\PT7.SIG'
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt6\Pt6.SIG\PT6.SIG'
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt5\Pt5.SIG\PT5.SIG'
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt4\Pt4.SIG\PT4.SIG'
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt3\Pt3.SIG\PT3.SIG'
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt2\Pt2.SIG\PT2.SIG'
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt1\Pt1.SIG\PT1.SIG'
    'F:\ForschungsProjekte\HarvardFiles\Montreal\Pt12\Pt12.SIG\PT12.SIG'};
end