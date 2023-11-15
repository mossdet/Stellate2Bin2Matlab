#include <string>
#include <vector>
#include <iostream>

#include "Stellate2Bin.h"
#include "IOStellateSignalImporter_c.h"
#include "saveToBinary.h"

#define NO_INPUT_ARGS

int main(int argc, char** argv) {

	std::cout << "Stellate2Bin\n" << std::endl;
	std::string stellateFileNameStr;
	std::string outputFolderStr;

#ifndef	NO_INPUT_ARGS
	stellateFileNameStr = argv[1];
	outputFolderStr = argv[2];
#else
	argc = 3;
	stellateFileNameStr = "F:\\StellateConverter\\PatientFiles\\Pt1\\Pt1.SIG\\PT1.SIG";
	outputFolderStr = "F:\\StellateConverter\\Stellate2Bin\\FilesOutput\\";
#endif

	if (argc == 3) {

		eegHeader patHeader;
		patHeader = stellate2bin(stellateFileNameStr, outputFolderStr);

		//std::cout << std::endl << std::endl << "Type a key to exit" << std::endl;
		//getchar();

		return 1;
	}
	else {
		return 0;
	}
}


eegHeader stellate2bin(std::string strInputFileName, std::string outputFolderStr) {

	std::cout << "readStellateTest\n" << std::endl;

	IOStellateSignalImporter_c stellateReader(strInputFileName);
	std::cout << "File: " << strInputFileName << std::endl;

	int nrPhysicChannels = stellateReader.getNumberChannels();
	double samplingRate = stellateReader.getSamplingRate();
	std::cout << "SamplingRate: " << samplingRate << std::endl;
	std::cout << "Nr. Channels: " << nrPhysicChannels << std::endl;
	std::cout << "Total Nr. Samples: " << stellateReader.getSampleCount() << std::endl;

	std::vector< std::pair< std::string, std::string> > channelLabels;
	stellateReader.getLabels(channelLabels);

	// Read all annotations
	std::vector< Annotation_c > annotationsVec;
	bool readAnnotationsOK = stellateReader.getAnnotations(annotationsVec);
	if (!readAnnotationsOK) {
		std::cout << "Annotations Read Error\n" << std::endl;
	}

	//Generate Header structure
	eegHeader patHeader;
	stellateReader.getHeader(patHeader);
	
	//Prepare destination folders
	std::string base_filename = patHeader.filename.substr(patHeader.filename.find_last_of("/\\") + 1);
	std::string::size_type const p(base_filename.find_last_of('.'));
	std::string subjName = base_filename.substr(0, p);

	_mkdir(outputFolderStr.c_str());
	std::string outputFolderSubj = outputFolderStr + subjName + "\\";
	_mkdir(outputFolderSubj.c_str());
	std::string outputFolderMontage = outputFolderSubj + "PhysicalMontage\\";
	_mkdir(outputFolderMontage.c_str());

	
	writeHeaderFile(patHeader, subjName, outputFolderSubj);

	std::string annotationsFilePath = outputFolderSubj + "Annotations.txt";
	generateAnnotationsFile(annotationsVec, annotationsFilePath);


	// Read samples from the recording channels
	unsigned long totalNrSamples = stellateReader.getSampleCount();
	unsigned long readBlockSize = samplingRate * 10; // adjust according to RAM capacity
	unsigned long unreadSamples = totalNrSamples;
	unsigned long lStartSample = 0;
	unsigned long lNumberReadSamples = 0;
	matrixStd signalSamples;
	signalSamples.resize(nrPhysicChannels);
	while (unreadSamples > 0) {
		matrixStd signalSamplesBlock;
		lNumberReadSamples = readBlockSize;
		if (lStartSample + lNumberReadSamples - 1 > totalNrSamples) {
			lNumberReadSamples = totalNrSamples - lStartSample;
		}
		bool readOK = stellateReader.ReadSamples(lStartSample, lNumberReadSamples, signalSamplesBlock);
		if (!readOK) {
			std::cout << "Signal Read Error\n" << std::endl;
			break;
		}
		std::cout << "Read Samples " << lStartSample << " to "  << lStartSample + lNumberReadSamples - 1 << std::endl;
		lStartSample = lStartSample + lNumberReadSamples;
		unreadSamples = unreadSamples - lNumberReadSamples;

		for (int chi = 0; chi < nrPhysicChannels; chi++) {
			signalSamples[chi].insert(signalSamples[chi].end(), signalSamplesBlock[chi].begin(), signalSamplesBlock[chi].end());
		}
	}

	//save samples to bin files
	for (int chi = 0; chi < nrPhysicChannels; chi++) {
		std::vector<double> signal = signalSamples[chi];
		std::string binaryFilename = outputFolderMontage + patHeader.channelLabels[chi] + ".bin";
		saveToBinary(signal, binaryFilename, outputFolderStr);
	}

	std::string channsListOutputFilePath = outputFolderMontage + "PhysicalMontagesList.txt";
	writeChannelsFile(patHeader.channelLabels, channsListOutputFilePath);


	// Read samples from the different Montages saved to the file
	int nrMontages = stellateReader.getNumberReformmatingMontages();
	for (int mi = 0; mi < nrMontages; mi++) {
		outputFolderMontage = outputFolderSubj + "Montage_" + std::to_string(mi) + "\\";
		_mkdir(outputFolderMontage.c_str());

		std::vector< std::pair< std::string, std::string> > montageLabels;
		stellateReader.setReformattingMontageIndex(mi);
		stellateReader.getReformattingLabels(montageLabels);
		stellateReader.getHeader(patHeader);
		int nrMontageChannels = montageLabels.size();
		matrixStd montageSamples;
		montageSamples.resize(nrMontageChannels);

		unreadSamples = totalNrSamples;
		lStartSample = 0;

		std::cout << std::endl << std::endl;
		std::cout << "Read Montage " << mi << std::endl << std::endl;

		bool readMontageSamplesOK = true;
		if (readMontageSamplesOK) {
			while (unreadSamples > 0) {
				matrixStd montageSamplesBlock;
				lNumberReadSamples = readBlockSize;

				if (lStartSample + lNumberReadSamples - 1 > totalNrSamples) {
					lNumberReadSamples = totalNrSamples - lStartSample;
				}
				bool readOK = stellateReader.ReadReformattedSamples(lStartSample, lNumberReadSamples, montageSamplesBlock);
				if (!readOK) {
					std::cout << "Signal Read Error\n" << std::endl;
					break;
				}

				std::cout << "Montage Samples " << lStartSample << " to " << lStartSample + lNumberReadSamples - 1 << std::endl;
				lStartSample = lStartSample + lNumberReadSamples;
				unreadSamples = unreadSamples - lNumberReadSamples;

				// append to get whole signals
				for (int chi = 0; chi < nrMontageChannels; chi++) {
					montageSamples[chi].insert(montageSamples[chi].end(), montageSamplesBlock[chi].begin(), montageSamplesBlock[chi].end());
				}
			}

			for (int chi = 0; chi < nrMontageChannels; chi++) {
				std::vector<double> signal = montageSamples[chi];
				std::string montageName = montageLabels[chi].first + "-" + montageLabels[chi].second;
				std::string binaryFilename = outputFolderMontage + montageName + ".bin";
				saveToBinary(signal, binaryFilename, outputFolderStr);
			}

			outputFolderMontage = outputFolderSubj + "Montage_" + std::to_string(mi) + "\\";

			channsListOutputFilePath = outputFolderMontage + "Montage_" + std::to_string(mi) + "_ChannelsList.txt";
			writeChannelsFile(patHeader.montageLabels, channsListOutputFilePath);
		}
	}

	return patHeader;

}


void writeHeaderFile(eegHeader patHeader, std::string subjName, std::string outputFolderSubj) {

	std::ofstream headerFile;

	std::string headerFilename = outputFolderSubj + subjName + "_hdr.txt";
	headerFile.open(headerFilename);
	headerFile << "Field\t" << "Val" << "\n";
	headerFile << "Stellate Filename\t" << patHeader.filename <<"\n";
	headerFile << "Patient Name\t" << patHeader.patientName << "\n";
	headerFile << "Patient Sex\t" << patHeader.patientSex << "\n";
	headerFile << "Sampling Rate (Hz)\t" << patHeader.samplingRate << "\n";
	headerFile << "Number of Samples\t" << patHeader.nrSamples << "\n";
	headerFile.close();
}

void writeChannelsFile(std::vector<std::string> channelsList, std::string channsListOutputFilePath) {

	std::ofstream channelsFile;

	channelsFile.open(channsListOutputFilePath);
	channelsFile << "Channel Name" << "\n";
	for (int chi = 0; chi < channelsList.size(); chi++) {
		channelsFile << channelsList[chi] << "\n";
	}
	channelsFile.close();
}

// Create Files with all annotations
void generateAnnotationsFile(std::vector< Annotation_c > annotationsVec, std::string annotationsFilePath) {

	std::ofstream annotationsFile;
	annotationsFile.open(annotationsFilePath);

	annotationsFile << "Mark\t" << "Channel\t" << "StartSample\t" << "EndSample\n";

	long nrAnnotation = annotationsVec.size();
	for (long ai = 0; ai < nrAnnotation; ai++) {
		annotationsFile << annotationsVec[ai].m_strAnnotation << "\t";
		annotationsFile << annotationsVec[ai].m_strActiveChannel + "-" + annotationsVec[ai].m_strRefChannel << "\t";
		annotationsFile << annotationsVec[ai].m_lStartSample << "\t";
		annotationsFile << annotationsVec[ai].m_lStartSample + annotationsVec[ai].m_lSampleDuration << "\n";
	}
	annotationsFile.close();
}