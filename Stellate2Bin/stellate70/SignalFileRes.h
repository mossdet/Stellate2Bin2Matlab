//
//  TITLE:    SignalFileRes.h
//  AUTHOR:   Greg Rishea
//  DATE:     2000.08.16
//  SUMMARY:  SignalFile resource-related utility function prototypes.
//
//  UPDATES:  
//

#ifndef __SIGNALFILERES_H_
#define __SIGNALFILERES_H_

#include "SignalFileStr.h"

#include <wtypes.h>  // For Windows type definitions

tstring& LoadString(tstring& tstrStr, UINT idsStr);
tstring& LoadString(HINSTANCE hInstance, tstring& tstrStr, UINT idsStr);

tstring& FormatString(tstring& tstrStr, UINT idsStr, ...);
tstring& FormatString(HINSTANCE hInstance, tstring& tstrStr, UINT idsStr, ...);
tstring& FormatString(HINSTANCE hInstance, tstring& tstrStr, UINT idsStr, va_list vaArgs);

#endif // !__SIGNALFILERES_H_
