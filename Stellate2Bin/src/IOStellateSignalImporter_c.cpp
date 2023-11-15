//$2 12.08.2009 Matthias D. Added getReformattingLabels()
//$1 26.08.2008 Matthias D. created


//#include "StdAfx.h"

#include "comutil.h"

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#include <comdef.h>

using namespace std;

// Stellate includes
// Version 70
#include "..\stellate70\SignalFile.h"
#include "..\stellate70\StlSignalFileLib.h"

#include "IOStellateSignalImporter_c.h"

//////////////////////////////////////////////////////////////////////
// constructor, destructor

IOStellateSignalImporter_c::IOStellateSignalImporter_c(const std::string strFilename) {
	// initialize
	m_strFilename = strFilename;
	m_pSignalFile = NULL;
	m_bValidImporter = true;
	m_lSampleCount = 0;
	m_dSamplingRate = 0;
	m_ReformattingMontagenIndex = 0;

	// create signal file COM object
	CoInitialize(nullptr);
	HRESULT hr = CoCreateInstance(CLSID_CStlSignalFile, NULL, CLSCTX_INPROC_SERVER,
		IID_ISignalFile, (void**)&m_pSignalFile);

	if (FAILED(hr)) {
		m_bValidImporter = false;
		return;
	}

	// get necessary recording infos
	m_bValidImporter &= extractRecordingInfo();
}


IOStellateSignalImporter_c::~IOStellateSignalImporter_c() {
	// Close the signal file
	if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
		m_pSignalFile->Close();

	if (m_pSignalFile != NULL)
		m_pSignalFile->Release();

}

bool IOStellateSignalImporter_c::extractRecordingInfo()
{

	HRESULT hr;

	//get file name
	_bstr_t bstr1(getFileName().c_str());

	BSTR  bstrFileName = NULL;
	bstrFileName = bstr1;

	// and opne file
	hr = m_pSignalFile->Open(bstrFileName, SIGNALFILE_FLAGS_READONLY);
	if (FAILED(hr))
		return false;

	ISignalInfo* pSignalInfo = NULL;
	IFileInfo* pFileInfo = NULL;
	// Declare other signal information subobject references here ...

	// Get reference to ISignalInfo object
	if (FAILED(m_pSignalFile->GetSignalInfo(&pSignalInfo)))
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		SysFreeString(bstrFileName);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}
	IPatientInfo* ppPatientInfo;
	pSignalInfo->GetPatientInfo(&ppPatientInfo);
	BSTR pbstrName = NULL;
	BSTR pbstrLastName = NULL;
	EPatientSex pbstrSex;
	ppPatientInfo->GetFirstName(&pbstrName);
	ppPatientInfo->GetLastName(&pbstrLastName);
	ppPatientInfo->GetSex(&pbstrSex);
	SysFreeString(pbstrName);
	SysFreeString(pbstrLastName);
	// convert to std::string
	_bstr_t bstrLabel = pbstrName;
	std::string firstName(bstrLabel);
	bstrLabel = pbstrLastName;
	std::string lastName(bstrLabel);
	bstrLabel = pbstrSex;
	std::string sex(bstrLabel);
	m_strFirstName = firstName;
	m_strLastName = lastName;
	m_strSex = sex;

	// Get reference to IFileInfo subobject
	if (FAILED(pSignalInfo->GetFileInfo(&pFileInfo)))
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (pFileInfo != NULL) pFileInfo->Release();
		SysFreeString(bstrFileName);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	// get recording montage
	IPhysicalMontage* pPhysicalMontage = NULL;
	if (FAILED(pSignalInfo->GetPhysicalMontage(&pPhysicalMontage)))
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (pFileInfo != NULL) pFileInfo->Release();
		if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
		SysFreeString(bstrFileName);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	// get number of recording montages
	INT iCount = 0;
	if (FAILED(pPhysicalMontage->GetRecordingMontageCount(&iCount)) || iCount == 0)
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (pFileInfo != NULL) pFileInfo->Release();
		if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
		SysFreeString(bstrFileName);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	IRecordingMontage* pRecordingMontage = NULL;
	if (FAILED(pPhysicalMontage->GetRecordingMontage(0, &pRecordingMontage)))
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (pFileInfo != NULL) pFileInfo->Release();
		if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
		if (pRecordingMontage != NULL) pRecordingMontage->Release();
		SysFreeString(bstrFileName);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	// get base sampling frequency and number of channels
	DOUBLE	dFreq = 0.0;
	INT		iNumSignals = 0;
	if (FAILED(hr = pRecordingMontage->GetBaseSampleFrequency(&dFreq)) || FAILED(hr = pRecordingMontage->GetChannelCount(&iNumSignals)))
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (pFileInfo != NULL) pFileInfo->Release();
		if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
		if (pRecordingMontage != NULL) pRecordingMontage->Release();
		SysFreeString(bstrFileName);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	iNumSignals;											//DLP

	m_peType.resize(iNumSignals);
	m_peUnits.resize(iNumSignals);
	for (INT iSignal = 0; iSignal < iNumSignals; ++iSignal) {
		pRecordingMontage->GetChannelType(iSignal, &m_peType[iSignal]);
		pRecordingMontage->GetChannelUnits(iSignal, &m_peUnits[iSignal]);
	}

	// only support files with one sampling frequency
	for (INT iSignal = 0; iSignal < iNumSignals; ++iSignal)
	{
		double dSignalSampleFreq = 0.0;
		if (FAILED(hr = pRecordingMontage->GetChannelSampleFrequency(iSignal, &dSignalSampleFreq)))
		{
			if (pSignalInfo != NULL) pSignalInfo->Release();
			if (pFileInfo != NULL) pFileInfo->Release();
			if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
			if (pRecordingMontage != NULL) pRecordingMontage->Release();
			SysFreeString(bstrFileName);
			if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
				m_pSignalFile->Close();
			return false;
		}
		if (dSignalSampleFreq != dFreq)
		{
			// set member for valid importer to false;
			m_bValidImporter = false;
		}
	}

	// passed: set sampling frequency to importer
	if (!setSamplingRate(dFreq))
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (pFileInfo != NULL) pFileInfo->Release();
		if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
		if (pRecordingMontage != NULL) pRecordingMontage->Release();
		SysFreeString(bstrFileName);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	// get channel labels
	BSTR  bstrChannelLabel = NULL;
	m_Labels.resize(iNumSignals);
	for (INT iSignal = 0; iSignal < iNumSignals; ++iSignal)
	{
		if (FAILED(hr = pRecordingMontage->GetChannelElectrode1Name(iSignal, &bstrChannelLabel)))
		{
			if (pSignalInfo != NULL) pSignalInfo->Release();
			if (pFileInfo != NULL) pFileInfo->Release();
			if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
			if (pRecordingMontage != NULL) pRecordingMontage->Release();
			SysFreeString(bstrFileName);
			SysFreeString(bstrChannelLabel);
			if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
				m_pSignalFile->Close();
			return false;
		}

		// convert to std::string
		_bstr_t bstrLabel = bstrChannelLabel;
		std::string strActiveLabel(bstrLabel);
		m_Labels.at(iSignal).first = strActiveLabel;

		if (FAILED(hr = pRecordingMontage->GetChannelElectrode2Name(iSignal, &bstrChannelLabel)))
		{
			if (pSignalInfo != NULL) pSignalInfo->Release();
			if (pFileInfo != NULL) pFileInfo->Release();
			if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
			if (pRecordingMontage != NULL) pRecordingMontage->Release();
			SysFreeString(bstrFileName);
			SysFreeString(bstrChannelLabel);
			if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
				m_pSignalFile->Close();
			return false;
		}
		// convert to std::string
		bstrLabel = bstrChannelLabel;
		std::string strRefLabel(bstrLabel);
		m_Labels.at(iSignal).second = strRefLabel;
	}

	
	// look for reformatting montage
	int nReformattingMontageCount = 0;
	if (FAILED(hr = pRecordingMontage->GetReformattingMontageCount(&nReformattingMontageCount)))
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (pFileInfo != NULL) pFileInfo->Release();
		if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
		if (pRecordingMontage != NULL) pRecordingMontage->Release();
		SysFreeString(bstrFileName);
		SysFreeString(bstrChannelLabel);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	if (nReformattingMontageCount > 0)
	{
		m_ReformattingLabels.resize(nReformattingMontageCount);
		for (unsigned int nMontage = 0; nMontage < nReformattingMontageCount; nMontage++)
		{
			// get first reformatting montage
			IReformattingMontage* pReformattingMontage = NULL;
			if (FAILED(hr = pRecordingMontage->GetReformattingMontage(nMontage, &pReformattingMontage)))
			{
				if (pSignalInfo != NULL) pSignalInfo->Release();
				if (pFileInfo != NULL) pFileInfo->Release();
				if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
				if (pRecordingMontage != NULL) pRecordingMontage->Release();
				if (pReformattingMontage != NULL) pReformattingMontage->Release();
				SysFreeString(bstrFileName);
				SysFreeString(bstrChannelLabel);
				if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
					m_pSignalFile->Close();
				return false;
			}

			// get channel count
			int nChannelCount = 0;
			if (FAILED(hr = pReformattingMontage->GetChannelCount(&nChannelCount)))
			{
				if (pSignalInfo != NULL) pSignalInfo->Release();
				if (pFileInfo != NULL) pFileInfo->Release();
				if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
				if (pRecordingMontage != NULL) pRecordingMontage->Release();
				if (pReformattingMontage != NULL) pReformattingMontage->Release();
				SysFreeString(bstrFileName);
				SysFreeString(bstrChannelLabel);
				if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
					m_pSignalFile->Close();
				return false;
			}

			// fill reformatting channel labels
			m_ReformattingLabels.at(nMontage).resize(nChannelCount);
			for (int nChannel = 0; nChannel < nChannelCount; nChannel++)
			{
				if (FAILED(hr = pReformattingMontage->GetChannelLabel(nChannel, &bstrChannelLabel)))
				{
					if (pSignalInfo != NULL) pSignalInfo->Release();
					if (pFileInfo != NULL) pFileInfo->Release();
					if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
					if (pRecordingMontage != NULL) pRecordingMontage->Release();
					if (pReformattingMontage != NULL) pReformattingMontage->Release();
					SysFreeString(bstrFileName);
					SysFreeString(bstrChannelLabel);
					if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
						m_pSignalFile->Close();
					return false;
				}

				_bstr_t bstrLabel = bstrChannelLabel;
				std::string strChannelLabel (bstrLabel);

				// try to decompose in active and reference label
				long length = 0;
				// find separator ","
				length = strChannelLabel.find("-");
				if (length > -1)
				{
					m_ReformattingLabels.at(nMontage).at(nChannel).first = strChannelLabel.substr(0, length);
					m_ReformattingLabels.at(nMontage).at(nChannel).second = strChannelLabel.substr(length + 1, strChannelLabel.length());
				}
				else
				{
					m_ReformattingLabels.at(nMontage).at(nChannel).first = strChannelLabel;
					m_ReformattingLabels.at(nMontage).at(nChannel).second = "Ref";
				}
			}
		}
	}


	// look for sample count
	long baseSamples = 0;
	if (FAILED(hr = m_pSignalFile->GetRecordCount(1, &baseSamples)) || baseSamples < 1)
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (pFileInfo != NULL) pFileInfo->Release();
		if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
		if (pRecordingMontage != NULL) pRecordingMontage->Release();
		SysFreeString(bstrFileName);
		SysFreeString(bstrChannelLabel);
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	// set sample count
	setSampleCount(baseSamples);


	// Release signal information subject references here ...
	if (pFileInfo != NULL) pFileInfo->Release();
	if (pSignalInfo != NULL) pSignalInfo->Release();
	if (pPhysicalMontage != NULL) pPhysicalMontage->Release();
	if (pRecordingMontage != NULL) pRecordingMontage->Release();

	// BSTR must be explicitly released
	SysFreeString(bstrFileName);
	SysFreeString(bstrChannelLabel);

	// close file
	if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
		m_pSignalFile->Close();

	return true;
}

bool IOStellateSignalImporter_c::getHeader(eegHeader& patHeader) {
	patHeader.filename = getFileName();
	patHeader.patientName = getPatNameStr();
	patHeader.patientSex = getPatNameStr();
	patHeader.samplingRate = getSamplingRate();
	patHeader.nrSamples = getSampleCount();
	patHeader.channelType = getChannelType();
	patHeader.channelUnits = getChannelUnit();
	patHeader.channelLabels = getChannelLabelsStr();
	patHeader.montageLabels = getMontageLabelsStr();
	return true;
}

std::vector<std::string> IOStellateSignalImporter_c::getChannelType() {
	int nrChanns = m_peType.size();
	std::vector<std::string> channelTypes(nrChanns);
	for (int chi = 0; chi < nrChanns; chi++) {
		channelTypes[chi] = m_peType[chi];
	}
	return channelTypes;
}

std::vector<std::string> IOStellateSignalImporter_c::getChannelUnit() {
	int nrChanns = m_peUnits.size();
	std::vector<std::string> channelUnits(nrChanns);
	for (int chi = 0; chi < nrChanns; chi++) {
		channelUnits[chi] = m_peUnits[chi];
	}
	return channelUnits;
}

std::vector<std::string> IOStellateSignalImporter_c::getChannelLabelsStr() {
	std::vector< std::pair< std::string, std::string> > channelLabels;
	getLabels(channelLabels);
	int nrChanns = channelLabels.size();
	std::vector<std::string> channelLabelsStr(nrChanns);
	for (int chi = 0; chi < nrChanns; chi++) {
		channelLabelsStr[chi] = channelLabels[chi].first + "-" + channelLabels[chi].second;
	}
	return channelLabelsStr;
}

std::vector<std::string> IOStellateSignalImporter_c::getMontageLabelsStr() {
	std::vector< std::pair< std::string, std::string> > montageLabels;
	getReformattingLabels(montageLabels);
	int nrChanns = montageLabels.size();
	std::vector<std::string> montageLabelsStr(nrChanns);
	for (int chi = 0; chi < nrChanns; chi++) {
		montageLabelsStr[chi] = montageLabels[chi].first + "-" + montageLabels[chi].second;
	}
	return montageLabelsStr;
}

std::string IOStellateSignalImporter_c::getFileName() {
	return m_strFilename;
}

bool IOStellateSignalImporter_c::setSampleCount(unsigned long lSampleCount) {
	m_lSampleCount = lSampleCount;

	if (m_lSampleCount == 0) {
		m_bValidImporter = false;
		return false;
	}

	return true;
}

unsigned long IOStellateSignalImporter_c::getSampleCount() const {
	return m_lSampleCount;
}

bool IOStellateSignalImporter_c::setSamplingRate(double dSamplingRate) {
	m_dSamplingRate = dSamplingRate;

	if (m_dSamplingRate < 0) {
		m_bValidImporter = false;
		return false;
	}

	return true;
}

unsigned int IOStellateSignalImporter_c::getNumberChannels() const {
	// derive number of channels from channel labels
	std::vector< std::pair< std::string, std::string> > Labels;
	if (!getLabels(Labels))
		return 0;

	return Labels.size();
}

double IOStellateSignalImporter_c::getSamplingRate() const {
	return m_dSamplingRate;
}

bool IOStellateSignalImporter_c::isValidImporter() {
	unsigned samplingRate = getSamplingRate();
	unsigned sampleCount = getSampleCount();
	unsigned nrChs = getNumberChannels();
	// check sampling rate, sample count and number channels
	if (getSamplingRate() <= 0.0 || getSampleCount() == 0 || getNumberChannels() == 0)
		m_bValidImporter = false;

	return m_bValidImporter;
};

bool IOStellateSignalImporter_c::setReformattingMontageIndex(unsigned int nIndex) {
	if (nIndex > getNumberReformmatingMontages() - 1)
		return false;

	m_ReformattingMontagenIndex = nIndex;
	return true;
}

bool IOStellateSignalImporter_c::getReformattingLabels(std::vector< std::pair< std::string, std::string> >& Labels) const
{
	if (m_ReformattingLabels.size() > m_ReformattingMontagenIndex)
	{
		Labels = m_ReformattingLabels.at(m_ReformattingMontagenIndex);
		return true;
	}
	else
		return getLabels(Labels);
}

unsigned int IOStellateSignalImporter_c::getNumberReformmatingMontages() const
{
	return m_ReformattingLabels.size();
}

// public method to get channel labels
bool IOStellateSignalImporter_c::getLabels(std::vector< std::pair< std::string, std::string> >& Labels) const
{
	if (m_Labels.size() > 0)
	{
		Labels = m_Labels;
		return true;
	}

	return false;
}

// read the data
bool IOStellateSignalImporter_c::ReadSamples(unsigned long lStartSample, unsigned long lNumberSamples, matrixStd& signalSamples)
{
	// check for valid importer
	if (!isValidImporter())
		return false;

	// check requested samples against available samples
	if (lStartSample + lNumberSamples > getSampleCount())
		return false;


	// create signal record
	HRESULT hr;
	ISignalRecord* pSignalRecord = NULL;
	if (!m_pSignalFile->IsOpen() == S_OK)
	{
		//get file name
		_bstr_t bstr1(_T(getFileName().c_str()));
		BSTR  bstrFileName = NULL;
		bstrFileName = bstr1;

		// and opne file
		hr = m_pSignalFile->Open(bstrFileName, SIGNALFILE_FLAGS_READONLY);
		if (FAILED(hr))
			return false;
	}
	m_pSignalFile->CreateSignalRecord(lNumberSamples, &pSignalRecord);
	LONG lFlags = SIGNALFILE_FLAGS_CALIBRATE;
	pSignalRecord->SetStartSample(lStartSample);
	if (FAILED(hr = m_pSignalFile->Read(pSignalRecord, lFlags)))
	{
		if (pSignalRecord != NULL) pSignalRecord->Release();
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	long lTgtRecSmples = 0;
	if (FAILED(hr = pSignalRecord->GetSampleLength(&lTgtRecSmples)))
	{
		if (pSignalRecord != NULL) pSignalRecord->Release();
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	unsigned int  nNumberSignals = getNumberChannels();
	double* pdBuffer = new double(nNumberSignals * lNumberSamples);
	SAFEARRAY* psaBuffer = NULL;

	bool failA = FAILED(hr = pSignalRecord->GetRecordData(&psaBuffer));
	bool failB = FAILED(hr = SafeArrayAccessData(psaBuffer, (void**)&pdBuffer));
	// Version 6.20a
	if (failA || failB) {
		if (pSignalRecord != NULL) pSignalRecord->Release();
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	signalSamples.resize(nNumberSignals);
	for (unsigned int iSignal = 0; iSignal < nNumberSignals; iSignal++) {
		signalSamples[iSignal].resize(lNumberSamples);
		for (unsigned long iSrcSampleNo = 0; iSrcSampleNo < lNumberSamples; iSrcSampleNo++) {
			double dValue = (short)pdBuffer[iSrcSampleNo + lNumberSamples * iSignal];
			//dValue  = dValue * 1E-6;
			signalSamples[iSignal][iSrcSampleNo] = dValue;
		}
	}


	// Release SAFEARRAY data block:
	if (psaBuffer != NULL && pdBuffer != NULL)
	{

		hr = SafeArrayUnaccessData(psaBuffer);
		if (pSignalRecord != NULL)
			pSignalRecord->Release();

		hr = SafeArrayDestroy(psaBuffer);



		//delete pSignalRecord;
		pSignalRecord = NULL;

		pdBuffer = NULL;
	}

	// close file
	m_pSignalFile->Close();

	return true;
}

// reformatted data
bool IOStellateSignalImporter_c::ReadReformattedSamples(unsigned long lStartSample, unsigned long lNumberSamples, matrixStd& signalSamples) {
	// read samples for all channels as recorded
	matrixStd RefSamples;
	if (!ReadSamples(lStartSample, lNumberSamples, RefSamples))
		return false;

	// get indices for bipolar montages (only supported option up to now)
	matrixStd Indices;
	if (!getMontageIndices(Indices))
		return false;

	int nrMontages = Indices.size();
	long unsigned int nrSamples = RefSamples[0].size();
	signalSamples.resize(nrMontages);

	for (unsigned int h = 0; h < nrMontages; h++) {
		// allocate matrix with bipolar values
		signalSamples[h].resize(nrSamples);

		if (Indices[h][0] == -1) // no valid lables set samples to 0.0
		{
			for (unsigned int l = 0; l < signalSamples[0].size(); l++) {
				signalSamples[h][l] = 0.0;
			}
		}
		else if (Indices[h][1] == -1) // channel with recording reference
		{
			for (unsigned int l = 0; l < signalSamples[0].size(); l++) {
				signalSamples[h][l] = RefSamples[Indices[h][0]][l];
			}

		}
		else {
			for (unsigned int l = 0; l < signalSamples[0].size(); l++) {
				signalSamples[h][l] = RefSamples[Indices[h][0]][l] - RefSamples[Indices[h][1]][l];
			}
		}
	}

	return true;
}

// matrix with indices for bipolar montage
bool IOStellateSignalImporter_c::getMontageIndices(matrixStd& Indices) const {
	// get Lables and reformatting labels
	std::vector< std::pair< std::string, std::string> > Labels;
	std::vector< std::pair< std::string, std::string> > ReformattingLabels;
	if (!getLabels(Labels))
		return false;

	if (!getReformattingLabels(ReformattingLabels))
		return false;

	// allocate matrix for inidces
	Indices.resize(ReformattingLabels.size());
	for (int rli = 0; rli < ReformattingLabels.size(); rli++) {
		Indices[rli].resize(2);
	}

	// set ref channel to -1 to encode as recorded reference
	for (unsigned int n = 0; n < Indices.size(); n++) {
		Indices[n][0] = -1;
		Indices[n][1] = -1;
	}

	for (unsigned int n = 0; n < Indices.size(); n++) {
		bool bFound = false;
		for (unsigned int m = 0; m < Labels.size(); m++) {
			if (ReformattingLabels.at(n).first == Labels.at(m).first) {
				Indices[n][0] = m;
				bFound = true;
			}
			if (ReformattingLabels.at(n).second == Labels.at(m).first) {
				Indices[n][1] = m;
			}

			//        if (bFound == false)
			//            Indices[n][0] = -1;
		}
	}

	return true;
}

bool IOStellateSignalImporter_c::getAnnotations(std::vector< Annotation_c >& Annotations)
{
	Annotations.clear();

	//	return true;

	HRESULT hr;
	if (!m_pSignalFile->IsOpen() == S_OK) {
		//get file name
		_bstr_t bstr1(_T(getFileName().c_str()));
		BSTR  bstrFileName = NULL;
		bstrFileName = bstr1;

		// and opne file
		hr = m_pSignalFile->Open(bstrFileName, SIGNALFILE_FLAGS_READONLY);
		if (FAILED(hr))
			return false;
	}

	ISignalInfo* pSignalInfo = NULL;
	// Get reference to ISignalInfo object
	if (FAILED(m_pSignalFile->GetSignalInfo(&pSignalInfo)))
	{
		if (pSignalInfo != NULL) pSignalInfo->Release();
		if (m_pSignalFile != NULL && m_pSignalFile->IsOpen() == S_OK)
			m_pSignalFile->Close();
		return false;
	}

	// create channel label info
	std::vector< std::pair< std::string, std::string> > Labels;
	std::vector< std::string > strLables;
	getReformattingLabels(Labels);
	strLables.resize(Labels.size());
	for (unsigned int n = 0; n < strLables.size(); n++)
	{
		strLables.at(n) = Labels.at(n).first;
		int dot_index = strLables.at(n).find('-');
		if (dot_index != -1)
			strLables.at(n) = strLables.at(n).substr(0, dot_index);
	}

	int EventCount = 0;
	pSignalInfo->GetEventItemCount(&EventCount);

	//loop over events
	BSTR  bstrChannelLabel = NULL;
	BSTR  bstrName = NULL;
	BSTR  bstrDescription = NULL;
	//Annotations.resize(EventCount);
	for (unsigned int nEvent = 0; nEvent < EventCount; nEvent++)
	{
		// get single event Item
		IEventItem* pEventItem;
		pSignalInfo->GetEventItem(nEvent, &pEventItem);

		pEventItem->GetChannel(&bstrChannelLabel);
		_bstr_t bstrLabel = bstrChannelLabel;
		std::string strChannelLabel(bstrLabel);
		if (!strChannelLabel.empty())
		{
			// get name and description
			pEventItem->GetName(&bstrName);
			_bstr_t bstrN = bstrName;
			std::string strName(bstrN);
			pEventItem->GetDescription(&bstrDescription);
			_bstr_t bstrD = bstrDescription;
			std::string strDescription(bstrD);


			int nChannel = 0;
			for (unsigned int nc = 0; nc < strLables.size(); nc++)
			{
				if (strChannelLabel.find(strLables[nc]) == 0)
				{
					nChannel = nc;
					break;
				}
			}

			// get start sample and sample count
			long lSample = 0;
			long lSampleCount = 0;

			pEventItem->GetStartSample(&lSample);
			pEventItem->GetSampleLength(&lSampleCount);

			std::string strActiveChannel;
			std::string strRefChannel;

			int index = strChannelLabel.find_last_of("-"); // find seperator
			if (index != -1)
			{
				strActiveChannel = strChannelLabel.substr(0, index);
				strRefChannel = strChannelLabel.substr(index + 1);
				// remove balnks at end of ref label
				index = strRefChannel.find(" ");
				if (index != -1)
				{
					strRefChannel = strRefChannel.substr(0, index);
				}
			}
			if (strDescription.empty() && !strName.empty())
				strDescription = strName;
			Annotation_c Annotation(lSample, lSampleCount, strDescription, strActiveChannel, strRefChannel);
			Annotations.push_back(Annotation);
		}
	}

	// close file
	m_pSignalFile->Close();

	return true;
}
