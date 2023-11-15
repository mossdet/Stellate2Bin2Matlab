#pragma once

#include <string>

#include "DataTypes.h"


class MatlabFilesRW {

public:
	MatlabFilesRW(bool verbose);
	int readMatlabSamples(std::string filename, long startSample, long nrSamplesToRead, std::vector<double> &m_reformattedSignalSamples);
	int writeChannelSamples(std::string filename, std::vector<double> channSignal, std::string outputPath);
	long getSampleCount(std::string filename);

private:
	bool m_verbose;
};
