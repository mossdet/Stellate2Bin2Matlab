//
//  TITLE:    SignalFileUtil.h
//  AUTHOR:   Greg Rishea / Andrei Bardine
//  DATE:     1999.05.03 / 2003.04.13
//  SUMMARY:  Interface of miscellaneous SignalFile utility functions and classes.
//            Interface of CW32LongFile class that supports files longer than 2Gb
//

#ifndef __SIGNALFILEUTIL_H_
#define __SIGNALFILEUTIL_H_

#define _CRT_SECURE_NO_DEPRECATE

#include <wtypes.h>
#include <winbase.h>

#include <list>
#include "SignalFileDef.h"
#include "SignalFileStr.h"

//////////////////////////////////////////////////////////////////////////////
// File utility functions
bool FileExists(const char* pszFile, WIN32_FIND_DATAA* pfd = NULL);
bool FileExists(const wchar_t* pszFile, WIN32_FIND_DATAW* pfd = NULL);

bool GetFileSize(__int64& liSize, const char* pszFile);
bool GetFileSize(__int64& liSize, const wchar_t* pszFile);

bool GetFileDate(DATE& date, const char* pszFile);
bool GetFileDate(DATE& date, const wchar_t* pszFile);

bool FileOpen(const char* pszFile);
bool FileOpen(const wchar_t* pszFile);

string ReplaceFileExt(const char* cszSrcName, const char* cszExt);

//////////////////////////////////////////////////////////////////////////////
// Date utility functions
double DateToDouble(DATE dateIn);
DATE DoubleToDate(double dIn);

bool SystemTimeToDate(DATE& date, const SYSTEMTIME& st);
bool DateToSystemTime(SYSTEMTIME& st, DATE date);

void DateToSeconds(double& dSeconds, DATE date);
void SecondsToDate(DATE& date, double dSeconds);

DATE GetCurrentDate();

bool Make_dd_MMM_yyyy_Str(string& str, DATE date);
bool Make_dd_MMM_yyyy_Str(wstring& wstr, DATE date);

bool Make_dd_MMM_yyyy_Date(DATE& date, string str);
bool Make_dd_MMM_yyyy_Date(DATE& date, wstring wstr);

//////////////////////////////////////////////////////////////////////////////
// Other utility functions

bool GetValidChannelTypes(EChannelUnits eUnit, list<EChannelType>& areChannelTypes);

//////////////////////////////////////////////////////////////////////////////
// CW32LongFile class intended to support files longer than 2Gb
// Some code borrowed from MFC CFile class

class CW32LongFile
{

public:

// Flag values
	enum OpenFlags {
		modeRead =          0x0000,
		modeWrite =         0x0001,
		modeReadWrite =     0x0002,
		shareCompat =       0x0000,
		shareExclusive =    0x0010,
		shareDenyWrite =    0x0020,
		shareDenyRead =     0x0030,
		shareDenyNone =     0x0040,
		modeCreate =        0x1000,
		modeNoTruncate =    0x2000
	};
	enum SeekPosition {
		begin   = FILE_BEGIN,
		current = FILE_CURRENT,
		end     = FILE_END
	};

	CW32LongFile();
	virtual ~CW32LongFile();

	bool Open(const char* pszFile, unsigned int uOpenFlags);
	bool Open(const wchar_t* pszFile, int iMode);
	bool Close();
	bool IsOpen();
	bool Flush();
	bool Seek(_int64 liOffset, unsigned int uFrom);
	bool Read(char* pBuf, unsigned long ulCount);
	bool Write(const char* pBuf, unsigned long ulCount);
  _int64 GetSize();
	
protected:

	HANDLE m_hFile;

};

#endif // !__SIGNALFILEUTIL_H_

