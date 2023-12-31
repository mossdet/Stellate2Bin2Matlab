// MatlabFilesRW.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <stdio.h>
#include <string.h> /* For strcmp() */
#include <stdlib.h> /* For EXIT_FAILURE, EXIT_SUCCESS */
#include <vector> /* For STL */
#include <direct.h>

#define BUFSIZE 256

#include "mat.h"
#include "MatlabFilesRW.h"


MatlabFilesRW::MatlabFilesRW(bool verbose) {
	m_verbose = verbose;
}

long MatlabFilesRW::getSampleCount(std::string filename) {
	long sampleCount;

	const char *file = filename.c_str();
	MATFile *pmat;
	const char **dir;
	const char *name;
	int	  ndir;
	mxArray *pa;

	//Open file to get directory
	pmat = matOpen(file, "r");
	if (pmat == NULL) {
		if (m_verbose)
			printf("Error opening file %s\n", file);
		return(1);
	}

	//get directory of MAT-file
	dir = (const char **)matGetDir(pmat, &ndir);
	if (dir == NULL) {
		if (m_verbose)
			printf("Error reading directory of file %s\n", file);
		return(0);
	}
	mxFree(dir);
	/* In order to use matGetNextXXX correctly, reopen file to read in headers. */
	if (matClose(pmat) != 0) {
		return(0);
	}
	pmat = matOpen(file, "r");
	if (pmat == NULL) {
		return(0);
	}

	//for (int i = 0; i < ndir; i++) {
		pa = matGetNextVariableInfo(pmat, &name);
		if (pa == NULL) {
			//printf("Error reading in file %s\n", file);
			return(1);
		}
		sampleCount = mxGetNumberOfElements(pa);
		if(m_verbose)
			printf("Sample Count: %d\n", sampleCount);
		mxDestroyArray(pa);
	//}
	
	return sampleCount;
}

int MatlabFilesRW::readMatlabSamples(std::string filename, long startSample, long nrSamplesToRead, std::vector<double> &signal) {

	const char *file = filename.c_str();
	MATFile *pmat;
	const char **dir;
	const char *name;
	int	  ndir;
	mxArray *pa;
	if (m_verbose)
		printf("Reading file %s...\n", file);

	//Open file to get directory
	pmat = matOpen(file, "r");
	if (pmat == NULL) {
		if (m_verbose)
			printf("Error opening file %s\n", file);
		return(1);
	}

	//get directory of MAT-file
	dir = (const char **)matGetDir(pmat, &ndir);
	if (dir == NULL) {
		if (m_verbose)
			printf("Error reading directory of file %s\n", file);
		return(1);
	}
	else {
		if (m_verbose)
			printf("Directory of %s:\n", file);
		for (int i = 0; i < ndir; i++)
			printf("%s\n", dir[i]);
	}
	mxFree(dir);

	/* In order to use matGetNextXXX correctly, reopen file to read in headers. */
	if (matClose(pmat) != 0) {
		if (m_verbose)
			printf("Error closing file %s\n", file);
		return(1);
	}
	pmat = matOpen(file, "r");
	if (pmat == NULL) {
		if (m_verbose)
			printf("Error reopening file %s\n", file);
		return(1);
	}

	/* Get headers of all variables */
	if (m_verbose)
		printf("\nExamining the header for each variable:\n");
	for (int i = 0; i < ndir; i++) {
		pa = matGetNextVariableInfo(pmat, &name);

		if (pa == NULL) {
			if (m_verbose)
				printf("Error reading in file %s\n", file);
			return(1);
		}
		/* Diagnose header pa */
		if (m_verbose) {
			printf("According to its header, array %s has %d dimensions\n",
			name, mxGetNumberOfDimensions(pa));
			if (mxIsFromGlobalWS(pa))
				printf("  and was a global variable when saved\n");
			else
				printf("  and was a local variable when saved\n");
		}

		//std::cout << *mxGetPr(pa) << std::endl;
		//std::cout << mxGetCell(pa, 1) << std::endl;


		mxDestroyArray(pa);
	}

	/* Reopen file to read in actual arrays. */
	if (matClose(pmat) != 0) {
		if (m_verbose)
			printf("Error closing file %s\n", file);
		return(1);
	}
	pmat = matOpen(file, "r");
	if (pmat == NULL) {
		if (m_verbose)
			printf("Error reopening file %s\n", file);
		return(1);
	}

	/* Read in each array. */
	if (m_verbose)
		printf("\nReading in the actual array contents:\n");
	for (int i = 0; i<ndir; i++) {
		pa = matGetNextVariable(pmat, &name);
		if (pa == NULL) {
			if (m_verbose)
				printf("Error reading in file %s\n", file);
			return(1);
		}
		/*
		* Diagnose array pa
		*/
		if (m_verbose) {
			printf("According to its contents, array %s has %d dimensions\n",
				name, mxGetNumberOfDimensions(pa));
			if (mxIsFromGlobalWS(pa))
				printf("  and was a global variable when saved\n");
			else
				printf("  and was a local variable when saved\n");
		}

		double *real_data_ptr;
		real_data_ptr = (double *)mxGetPr(pa);
		for (int idx = 0; idx < mxGetNumberOfElements(pa); ++idx) {
			if (mxIsChar(pa)) {
				std::string readStr;
				readStr = mxArrayToString(pa);
				std::cout << readStr.c_str() << std::endl;
				break;
			}
			else {
				//std::cout << *real_data_ptr << std::endl;

				if ((idx >= startSample) && (idx < (startSample + nrSamplesToRead))) {
					signal.push_back(*real_data_ptr);
				}
				*real_data_ptr++;
			}
		}
		std::cout << std::endl;
		mxDestroyArray(pa);
	}
	if (matClose(pmat) != 0) {
		if (m_verbose)
			printf("Error closing file %s\n", file);
		return(1);
	}
	printf("Done\n");
	return 1;
}


int MatlabFilesRW::writeChannelSamples(std::string filename, std::vector<double> channSignal, std::string outputPath) {

	MATFile* pmat;
	mxArray* pa1;

	int nrSamples = channSignal.size();


	int ok = _mkdir(outputPath.c_str());
	std::string writeFilename = outputPath + filename + ".mat";
	int status;

	if (m_verbose)
		printf("Creating file %s...\n\n", writeFilename.c_str());

	pmat = matOpen(writeFilename.c_str(), "w");
	if (pmat == NULL) {
		if (m_verbose) {
			printf("Error creating file %s\n", writeFilename.c_str());
		}
		return(EXIT_FAILURE);
	}

	pa1 = mxCreateDoubleMatrix(1, nrSamples, mxREAL);
	if (pa1 == NULL) {
		if (m_verbose) {
			printf("%s : Out of memory on line %d\n", __FILE__, __LINE__);
		}
		return(EXIT_FAILURE);
	}

	//status = matPutVariable(pmat, "signal", pa1);//local variable
	status = matPutVariableAsGlobal(pmat, "signal", pa1);
	if (status != 0) {
		if (m_verbose)
			printf("%s :  Error using matPutVariable on line %d\n", __FILE__, __LINE__);
		return(EXIT_FAILURE);
	}
	int sodd = sizeof(channSignal.data());
	memcpy((void*)(mxGetPr(pa1)), (void*)channSignal.data(), channSignal.size() * sizeof(double));
	status = matPutVariableAsGlobal(pmat, "signal", pa1);
	if (status != 0) {
		if (m_verbose)
			printf("%s :  Error using matPutVariable on line %d\n", __FILE__, __LINE__);
		return(EXIT_FAILURE);
	}

	/* clean up */
	mxDestroyArray(pa1);
	if (matClose(pmat) != 0) {
		if (m_verbose)
			printf("Error closing file %s\n", writeFilename.c_str());
		return(EXIT_FAILURE);
	}

	/*
	* Re-open file and verify its contents with matGetVariable
	*/
	pmat = matOpen(writeFilename.c_str(), "r");
	if (pmat == NULL) {
		if (m_verbose)
			printf("Error reopening file %s\n", writeFilename.c_str());
		return(EXIT_FAILURE);
	}

	/*
	* Read in each array we just wrote
	*/

	long nrSamplesRead = getSampleCount(writeFilename);
	std::vector<double> signalRead;
	readMatlabSamples(writeFilename, 0, nrSamplesRead, signalRead);

	for (long si = 0; si < channSignal.size(); si++) {
		double binVal = channSignal[si];
		double matVal = signalRead[si];
		double diff = abs(binVal - matVal);

		if (diff > 0.0001) {
			printf("Error! Binary and Matlab values are different, restart the file conversion\n");
			return -1;
		}
	}

	printf("Binary and Matlab values are identiqual, conversion successful: %s\n", writeFilename.c_str());
	return 1;
}