#include "saveToBinary.h"

int saveToBinary(std::vector<double> signal, std::string binaryFilename, std::string outputFolderStr) {

    int nrSamples = signal.size();

    double* dataBuffer = new double[nrSamples];
    for (unsigned long si = 0; si < nrSamples; si++) {
        double val = signal[si];
        dataBuffer[si] = val;
    }

    std::cout << std::endl << std::endl << binaryFilename << std::endl << std::endl << std::endl;
    write(binaryFilename, nrSamples, dataBuffer);

    double* dataBufferRead = new double[nrSamples];
    read(binaryFilename, nrSamples, dataBufferRead);

    // Compare valued written and read
    for (unsigned long si = 0; si < nrSamples; si++) {
        double vecVal = signal[si];
        double writeVal = dataBuffer[si];
        double readVal = dataBufferRead[si];

        double writeDiff = abs(vecVal - writeVal);
        double readDiff = abs(vecVal - readVal);

        bool isDifferent = writeDiff > 0.00001 || readDiff > 0.00001;
        if (isDifferent) {
            return -1;
        }

    }
    delete[] dataBuffer;
    delete[] dataBufferRead;

    return 1;
}


void write(std::string binaryFilename, long unsigned nrSamples, double* dataBuffer) {
    FILE* pFile = fopen(binaryFilename.c_str(), "wb");
    fwrite(dataBuffer, sizeof(double), nrSamples, pFile);
    fclose(pFile);
}


void read(std::string binaryFilename, long unsigned nrSamples, double* dataBuffer) {
    FILE* pFile = fopen(binaryFilename.c_str(), "rb");
    fread(dataBuffer, sizeof(double), nrSamples, pFile);
    fclose(pFile);
}