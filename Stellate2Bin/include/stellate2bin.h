#pragma once

#include <string>
#include "DataTypes.h"

eegHeader stellate2bin(std::string strInputFileName, std::string outputFolderStr);
void writeHeaderFile(eegHeader patHeader, std::string subjName, std::string outputFolderSubj);
void generateAnnotationsFile(std::vector< Annotation_c > annotationsVec, std::string annotationsFilePath);
void writeChannelsFile(std::vector<std::string> channelsList, std::string outputFilePath);
