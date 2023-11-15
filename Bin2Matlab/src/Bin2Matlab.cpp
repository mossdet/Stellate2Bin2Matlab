// Bin2Matlab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>

#include "Bin2Matlab.h"

//#define NO_INPUT_ARGS

int main(int argc, char** argv) {
	std::cout << std::endl << std::endl << "Bin2Matlab\n" << std::endl;

	std::string binaryFilePath;
	long unsigned nrSamples = 0;
	bool verbose = true;
	int ok = -1;

#ifdef	NO_INPUT_ARGS
	argc = 5;
	binaryFilePath = 	"F:\\StellateConverter\\Stellate2Bin\\FilesOutput\\PT1\\PhysicalMontage\\C3-RPar.bin";
	nrSamples = 1200064;
#else
	binaryFilePath = argv[1];
	nrSamples = atoi(argv[2]);
#endif

	std::string strOutputFolder = binaryFilePath.substr(0, binaryFilePath.find_last_of("/\\")+1);
	
	std::string base_filename = binaryFilePath.substr(binaryFilePath.find_last_of("/\\") + 1);
	std::string::size_type const p(base_filename.find_last_of('.'));
	std::string filename = base_filename.substr(0, p);

	std::cout << "argc:" << argc << std::endl;
	std::cout << "File to convert:" << binaryFilePath << std::endl;
	std::cout << "Destination Folder:" << strOutputFolder << std::endl;
	std::cout << "Nr. Samples:" << nrSamples << std::endl;

	if (argc == 3) {
		ok = writeBin2Matlab(binaryFilePath, strOutputFolder, filename, nrSamples, verbose);

		//std::cout << std::endl << std::endl << "Type a key to exit" << std::endl;
		//getchar();
	}
	return ok;
}

int writeBin2Matlab(std::string binaryFilePath, std::string strOutputFolder, std::string filename, long unsigned nrSamples, bool verbose) {

	double* dataBufferRead = new double[nrSamples];
	readBinaryFile(binaryFilePath, nrSamples, dataBufferRead);
	std::vector<double> signal(nrSamples);
	for (unsigned long si = 0; si < nrSamples; si++) {
		double readVal = dataBufferRead[si];
		signal[si] = readVal * -1;
	}

	MatlabFilesRW matlabIO_Engine(verbose);
	int ok = matlabIO_Engine.writeChannelSamples(filename, signal, strOutputFolder);

	return ok;
}

void readBinaryFile(std::string binaryFilename, long unsigned nrSamples, double* dataBuffer) {
	FILE* pFile = fopen(binaryFilename.c_str(), "rb");
	fread(dataBuffer, sizeof(double), nrSamples, pFile);
	fclose(pFile);
}