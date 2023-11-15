#pragma once

#include <string>
#include <vector>
#include <iostream>

#include "DataTypes.h"
#include "MatlabFilesRW.h"

int writeBin2Matlab(std::string binaryFilePath, std::string strOutputFolder, std::string filename, long unsigned nrSamples, bool verbose);
void readBinaryFile(std::string binaryFilename, long unsigned nrSamples, double* dataBuffer);