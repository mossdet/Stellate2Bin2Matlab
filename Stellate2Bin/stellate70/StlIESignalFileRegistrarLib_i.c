

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:56 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\StlIESignalFileRegistrar\StlIESignalFileRegistrarLib.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_StlIESignalFileRegistrarLib,0xA0BF55DD,0xE97E,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlIESignalFileRegistrar,0xA0BF55EE,0xE97E,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlEnumIESignalFileServers,0xA0BF55F0,0xE97E,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlEnumIESignalFileTypes,0xA0BF55F2,0xE97E,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



