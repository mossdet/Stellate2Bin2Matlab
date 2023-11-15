#ifndef __IOStellateSignalImporter_c_H__
#define __IOStellateSignalImporter_c_H__

#include <windows.h>
#include <string>
#include <vector>

#include "DataTypes.h"

#pragma comment(lib, "user32.lib")

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "..\stellate70\SignalFile.h"
#undef FILETIME

class  IOStellateSignalImporter_c
{
public:
    IOStellateSignalImporter_c(const std::string strFilename);
    ~IOStellateSignalImporter_c();

public:
	bool isValidImporter();
	std::string getFileName();
	bool setSamplingRate(double dSamplingRate);
	double getSamplingRate() const;
	bool setSampleCount(unsigned long lSampleCount);
	unsigned long getSampleCount() const;	
	unsigned int getNumberChannels() const;
	bool getHeader(eegHeader &patHeader);

	bool ReadSamples(unsigned long lStartSample, unsigned long lNumberSamples, matrixStd& signalSamples);
	bool ReadReformattedSamples(unsigned long lStartSample, unsigned long lNumberSamples, matrixStd& signalSamples);
	bool getMontageIndices(matrixStd& Indices) const;

	// public method to get channel labels
	bool getLabels(std::vector< std::pair< std::string, std::string> >& Labels) const;

	// sample count

	bool setReformattingMontageIndex(unsigned int nIndex);
	unsigned int getNumberReformmatingMontages() const;
	bool getReformattingLabels(std::vector< std::pair< std::string, std::string> >& Labels) const;

	bool getAnnotations(std::vector< Annotation_c >& Annotations);

	std::vector<std::string> getChannelType();
	std::vector<std::string> getChannelUnit();
	std::vector<std::string> getChannelLabelsStr();
	std::vector<std::string> getMontageLabelsStr();
	std::string getPatNameStr() { return m_strFirstName + " " + m_strLastName; };
	std::string getPatSexStr() { return m_strSex; };

protected: 
	bool extractRecordingInfo();

protected:
	std::string m_strFilename;
	std::string m_strFirstName;
	std::string m_strLastName;
	std::string m_strSex;
	unsigned long			m_lSampleCount;										// sample count
	bool m_bValidImporter;
	ISignalFile* m_pSignalFile;
	double m_dSamplingRate;
	unsigned int			m_ReformattingMontagenIndex;						// Index for selected reformatting montage

	std::vector<EChannelType> m_peType;
	std::vector <EChannelUnits> m_peUnits;
	std::vector< std::pair< std::string, std::string> > m_Labels;	// channel labels
	std::vector< std::vector< std::pair< std::string, std::string> > > m_ReformattingLabels;	// channel labels
	
};

#endif // __IOAbstractSignalImporter_c__H__
