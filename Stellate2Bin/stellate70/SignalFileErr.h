//
//  TITLE:    SignalFileErr.h
//  AUTHOR:   Greg Rishea
//  DATE:     1999.05.03
//  SUMMARY:  Interface of SignalFile error information functions and classes.
//
//  UPDATES:  Greg Rishea, 2000.08.17
//            Added HINSTANCE argument to SetErrorInfo(HRESULT, ...) 
//              (see ReportManagerErr.cpp history for details).
//
//

#ifndef __SIGNALFILEERR_H_
#define __SIGNALFILEERR_H_

#include <wtypes.h>

HRESULT SetErrorInfo(const OLECHAR* ostrError, 
                     REFIID iidInterface, const OLECHAR* ostrProgId = NULL, 
                     DWORD dwHelpContext = 0, const OLECHAR* ostrHelpFile = NULL);

HRESULT SetErrorInfo(HINSTANCE hModuleInstance, HRESULT hrError, 
                     REFIID iidInterface, const OLECHAR* ostrProgId = NULL, 
                     DWORD dwHelpContext = 0, const OLECHAR* ostrHelpFile = NULL);

HRESULT ClearErrorInfo();

#endif // !__SIGNALFILEERR_H_
