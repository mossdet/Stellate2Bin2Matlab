//
//  TITLE:    SignalFileStr.h
//  AUTHOR:   Greg Rishea
//  DATE:     1999.05.03
//  SUMMARY:  Interface of SignalFile string-related utility functions and classes.
//
//  UPDATES:  
//

#ifndef __SIGNALFILESTR_H_
#define __SIGNALFILESTR_H_

#include <wtypes.h>
#include <wchar.h>
#include <tchar.h>
#include <string>

using namespace std;

bool StrCpy(string& dst, const char* src);
inline bool StrCpy(string& dst, const string& src) { dst = src; return true; }
bool WStrCpy(wstring& dst, const wchar_t* src);
inline bool WStrCpy(wstring& dst, const wstring& src) { dst = src; return true; }
bool BStrCpy(BSTR* dst, BSTR src);

bool StrToWStr(wstring& dst, const char* src);
inline bool StrToWStr(wstring& dst, const string& src) { return StrToWStr(dst, src.c_str()); }
bool WStrToStr(string& dst, const wchar_t* src);
inline bool WStrToStr(string& dst, const wstring& src) { return WStrToStr(dst, src.c_str()); }

bool StrToBStr(BSTR* dst, const char* src);
inline bool StrToBStr(BSTR* dst, const string& src) { return StrToBStr(dst, src.c_str()); }
inline bool BStrToStr(string& dst, BSTR src) { return WStrToStr(dst, src); }

inline bool WStrToBStr(BSTR* dst, const wchar_t* src) { return BStrCpy(dst, (BSTR)src); }
inline bool WStrToBStr(BSTR* dst, const wstring& src) { return WStrToBStr(dst, src.c_str()); }
inline bool BStrToWStr(wstring& dst, BSTR src) { return WStrCpy(dst, src); };

#ifdef _UNICODE

typedef wstring tstring;

inline bool StrToTStr(tstring& dst, const char* src) { return StrToWStr(dst, src); }
inline bool StrToTStr(tstring& dst, const string& src) { return StrToWStr(dst, src); }
inline bool TStrToStr(string& dst, const TCHAR* src) { return WStrToStr(dst, src); }
inline bool TStrToStr(string& dst, const tstring& src) { return WStrToStr(dst, src); }

inline bool WStrToTStr(tstring& dst, const wchar_t* src) { return WStrCpy(dst, src); }
inline bool WStrToTStr(tstring& dst, const wstring& src) { return WStrCpy(dst, src); }
inline bool TStrToWStr(wstring& dst, const TCHAR* src) { return WStrToTStr(dst, src); }
inline bool TStrToWStr(wstring& dst, const tstring& src) { return WStrToTStr(dst, src); }

inline bool TStrToBStr(BSTR* dst, const TCHAR* src) { return WStrToBStr(dst, src); }
inline bool TStrToBStr(BSTR* dst, const tstring& src) { return WStrToBStr(dst, src); }
inline bool BStrToTStr(tstring& dst, BSTR src) { return BStrToWStr(dst, src); }

#else

typedef string tstring;

inline bool StrToTStr(tstring& dst, const char* src) { return StrCpy(dst, src); }
inline bool StrToTStr(tstring& dst, const string& src) { return StrCpy(dst, src); }
inline bool TStrToStr(string& dst, const TCHAR* src) { return StrToTStr(dst, src); }
inline bool TStrToStr(string& dst, const tstring& src) { return StrToTStr(dst, src); }

inline bool WStrToTStr(tstring& dst, const wchar_t* src) { return WStrToStr(dst, src); }
inline bool WStrToTStr(tstring& dst, const wstring& src) { return WStrToStr(dst, src); }
inline bool TStrToWStr(wstring& dst, const TCHAR* src) { return StrToWStr(dst, src); }
inline bool TStrToWStr(wstring& dst, const tstring& src) { return StrToWStr(dst, src); }

inline bool TStrToBStr(BSTR* dst, const TCHAR* src) { return StrToBStr(dst, src); }
inline bool TStrToBStr(BSTR* dst, const tstring& src) { return StrToBStr(dst, src); }
inline bool BStrToTStr(tstring& dst, BSTR src) { return BStrToStr(dst, src); }

#endif

bool FormatStr(string& str, const char* fmt, ...);
bool FormatStr(string& str, const char* fmt, va_list args);
bool FormatStr(wstring& wstr, const wchar_t* fmt, ...);
bool FormatStr(wstring& wstr, const wchar_t* fmt, va_list args);

bool StripStr(string& str, char cStrip = ' ');
bool StripStr(wstring& wstr, wchar_t wcStrip = L' ');

bool PadStr(string& str, int iMaxLen, char cPad = ' ');
bool PadStr(wstring& wstr, int iMaxLen, wchar_t wcPad = L' ');

bool TruncateStr(string& str, int iMaxLen, char cTerm = '~');
bool TruncateStr(wstring& wstr, int iMaxLen, wchar_t wcTerm = L'~');

bool InstanceStr(string& str, int iInst);
bool InstanceStr(wstring& wstr, int iInst);

#endif // !__SIGNALFILESTR_H_

