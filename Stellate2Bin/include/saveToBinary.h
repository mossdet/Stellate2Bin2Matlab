#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>
#include <direct.h>

#include "DataTypes.h"

int saveToBinary(std::vector<double> signal, std::string binaryFilename, std::string outputFolderStr);
void read(std::string binaryFilename, long unsigned nrSamples, double* dataBuffer);
void write(std::string binaryFilename, long unsigned nrSamples, double* dataBuffer);