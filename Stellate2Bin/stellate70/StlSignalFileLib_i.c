

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:53 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\StlSignalFile\StlSignalFileLib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_StlSignalFileLib,0x1DA12C3C,0xAC80,0x4e44,0x97,0xA2,0x50,0x8C,0x6A,0x22,0x77,0xB9);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlSignalFile,0xE214D53F,0xAA74,0x4CDB,0x96,0x30,0x2A,0xAF,0xB7,0x3D,0x24,0x3B);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlSignalInfo,0x3B6CF81A,0x645D,0x4b2b,0x9B,0x88,0xEB,0x18,0x3D,0xA5,0x31,0x8E);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlSignalRecord,0x9B65FED5,0xE4C8,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlFileInfo,0x5F368891,0x15A6,0x4208,0x84,0x64,0x2D,0xCD,0x35,0xCC,0xDD,0x16);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlPatientInfo,0x9B65FEC5,0xE4C8,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlPhysicalMontage,0x9B65FEC7,0xE4C8,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlRecordingMontage,0x9B65FECB,0xE4C8,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlReformattingMontage,0x9B65FECD,0xE4C8,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlRecordingCalibration,0x9B65FECF,0xE4C8,0x11D1,0xBB,0x8F,0x00,0x00,0x1B,0x4E,0x68,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlEventGroup,0x8EA5B003,0x2123,0x45d6,0xA1,0x64,0x11,0x58,0x1A,0x8D,0xE5,0x7F);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlEventItem,0x0BCE1870,0x93D6,0x4B66,0xB6,0x1B,0x78,0xC3,0x16,0xCD,0xB6,0xC7);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlElectrode,0x2ECFCB6D,0xDE93,0x4026,0xA0,0x77,0xC4,0xE1,0xEF,0x26,0x83,0x0D);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlElectrodeGroup,0x1BAD58A7,0x9E58,0x405A,0xBD,0xBF,0x56,0xFF,0x53,0x1D,0x87,0xCC);


MIDL_DEFINE_GUID(CLSID, CLSID_CStlAssociationInfo,0xB42EDB4F,0x60CF,0x4c98,0xAC,0xDF,0x27,0x75,0x75,0xCC,0xB3,0x7D);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



