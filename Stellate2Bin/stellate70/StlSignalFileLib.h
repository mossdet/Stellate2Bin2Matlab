

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __StlSignalFileLib_h__
#define __StlSignalFileLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __CStlSignalFile_FWD_DEFINED__
#define __CStlSignalFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlSignalFile CStlSignalFile;
#else
typedef struct CStlSignalFile CStlSignalFile;
#endif /* __cplusplus */

#endif 	/* __CStlSignalFile_FWD_DEFINED__ */


#ifndef __CStlSignalInfo_FWD_DEFINED__
#define __CStlSignalInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlSignalInfo CStlSignalInfo;
#else
typedef struct CStlSignalInfo CStlSignalInfo;
#endif /* __cplusplus */

#endif 	/* __CStlSignalInfo_FWD_DEFINED__ */


#ifndef __CStlSignalRecord_FWD_DEFINED__
#define __CStlSignalRecord_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlSignalRecord CStlSignalRecord;
#else
typedef struct CStlSignalRecord CStlSignalRecord;
#endif /* __cplusplus */

#endif 	/* __CStlSignalRecord_FWD_DEFINED__ */


#ifndef __CStlFileInfo_FWD_DEFINED__
#define __CStlFileInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlFileInfo CStlFileInfo;
#else
typedef struct CStlFileInfo CStlFileInfo;
#endif /* __cplusplus */

#endif 	/* __CStlFileInfo_FWD_DEFINED__ */


#ifndef __CStlPatientInfo_FWD_DEFINED__
#define __CStlPatientInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlPatientInfo CStlPatientInfo;
#else
typedef struct CStlPatientInfo CStlPatientInfo;
#endif /* __cplusplus */

#endif 	/* __CStlPatientInfo_FWD_DEFINED__ */


#ifndef __CStlPhysicalMontage_FWD_DEFINED__
#define __CStlPhysicalMontage_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlPhysicalMontage CStlPhysicalMontage;
#else
typedef struct CStlPhysicalMontage CStlPhysicalMontage;
#endif /* __cplusplus */

#endif 	/* __CStlPhysicalMontage_FWD_DEFINED__ */


#ifndef __CStlRecordingMontage_FWD_DEFINED__
#define __CStlRecordingMontage_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlRecordingMontage CStlRecordingMontage;
#else
typedef struct CStlRecordingMontage CStlRecordingMontage;
#endif /* __cplusplus */

#endif 	/* __CStlRecordingMontage_FWD_DEFINED__ */


#ifndef __CStlReformattingMontage_FWD_DEFINED__
#define __CStlReformattingMontage_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlReformattingMontage CStlReformattingMontage;
#else
typedef struct CStlReformattingMontage CStlReformattingMontage;
#endif /* __cplusplus */

#endif 	/* __CStlReformattingMontage_FWD_DEFINED__ */


#ifndef __CStlRecordingCalibration_FWD_DEFINED__
#define __CStlRecordingCalibration_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlRecordingCalibration CStlRecordingCalibration;
#else
typedef struct CStlRecordingCalibration CStlRecordingCalibration;
#endif /* __cplusplus */

#endif 	/* __CStlRecordingCalibration_FWD_DEFINED__ */


#ifndef __CStlEventGroup_FWD_DEFINED__
#define __CStlEventGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlEventGroup CStlEventGroup;
#else
typedef struct CStlEventGroup CStlEventGroup;
#endif /* __cplusplus */

#endif 	/* __CStlEventGroup_FWD_DEFINED__ */


#ifndef __CStlEventItem_FWD_DEFINED__
#define __CStlEventItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlEventItem CStlEventItem;
#else
typedef struct CStlEventItem CStlEventItem;
#endif /* __cplusplus */

#endif 	/* __CStlEventItem_FWD_DEFINED__ */


#ifndef __CStlElectrode_FWD_DEFINED__
#define __CStlElectrode_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlElectrode CStlElectrode;
#else
typedef struct CStlElectrode CStlElectrode;
#endif /* __cplusplus */

#endif 	/* __CStlElectrode_FWD_DEFINED__ */


#ifndef __CStlElectrodeGroup_FWD_DEFINED__
#define __CStlElectrodeGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlElectrodeGroup CStlElectrodeGroup;
#else
typedef struct CStlElectrodeGroup CStlElectrodeGroup;
#endif /* __cplusplus */

#endif 	/* __CStlElectrodeGroup_FWD_DEFINED__ */


#ifndef __CStlAssociationInfo_FWD_DEFINED__
#define __CStlAssociationInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlAssociationInfo CStlAssociationInfo;
#else
typedef struct CStlAssociationInfo CStlAssociationInfo;
#endif /* __cplusplus */

#endif 	/* __CStlAssociationInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __StlSignalFileLib_LIBRARY_DEFINED__
#define __StlSignalFileLib_LIBRARY_DEFINED__

/* library StlSignalFileLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_StlSignalFileLib;

EXTERN_C const CLSID CLSID_CStlSignalFile;

#ifdef __cplusplus

class DECLSPEC_UUID("E214D53F-AA74-4CDB-9630-2AAFB73D243B")
CStlSignalFile;
#endif

EXTERN_C const CLSID CLSID_CStlSignalInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("3B6CF81A-645D-4b2b-9B88-EB183DA5318E")
CStlSignalInfo;
#endif

EXTERN_C const CLSID CLSID_CStlSignalRecord;

#ifdef __cplusplus

class DECLSPEC_UUID("9B65FED5-E4C8-11D1-BB8F-00001B4E6868")
CStlSignalRecord;
#endif

EXTERN_C const CLSID CLSID_CStlFileInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("5F368891-15A6-4208-8464-2DCD35CCDD16")
CStlFileInfo;
#endif

EXTERN_C const CLSID CLSID_CStlPatientInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("9B65FEC5-E4C8-11D1-BB8F-00001B4E6868")
CStlPatientInfo;
#endif

EXTERN_C const CLSID CLSID_CStlPhysicalMontage;

#ifdef __cplusplus

class DECLSPEC_UUID("9B65FEC7-E4C8-11D1-BB8F-00001B4E6868")
CStlPhysicalMontage;
#endif

EXTERN_C const CLSID CLSID_CStlRecordingMontage;

#ifdef __cplusplus

class DECLSPEC_UUID("9B65FECB-E4C8-11D1-BB8F-00001B4E6868")
CStlRecordingMontage;
#endif

EXTERN_C const CLSID CLSID_CStlReformattingMontage;

#ifdef __cplusplus

class DECLSPEC_UUID("9B65FECD-E4C8-11D1-BB8F-00001B4E6868")
CStlReformattingMontage;
#endif

EXTERN_C const CLSID CLSID_CStlRecordingCalibration;

#ifdef __cplusplus

class DECLSPEC_UUID("9B65FECF-E4C8-11D1-BB8F-00001B4E6868")
CStlRecordingCalibration;
#endif

EXTERN_C const CLSID CLSID_CStlEventGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("8EA5B003-2123-45d6-A164-11581A8DE57F")
CStlEventGroup;
#endif

EXTERN_C const CLSID CLSID_CStlEventItem;

#ifdef __cplusplus

class DECLSPEC_UUID("0BCE1870-93D6-4B66-B61B-78C316CDB6C7")
CStlEventItem;
#endif

EXTERN_C const CLSID CLSID_CStlElectrode;

#ifdef __cplusplus

class DECLSPEC_UUID("2ECFCB6D-DE93-4026-A077-C4E1EF26830D")
CStlElectrode;
#endif

EXTERN_C const CLSID CLSID_CStlElectrodeGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("1BAD58A7-9E58-405A-BDBF-56FF531D87CC")
CStlElectrodeGroup;
#endif

EXTERN_C const CLSID CLSID_CStlAssociationInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("B42EDB4F-60CF-4c98-ACDF-277575CCB37D")
CStlAssociationInfo;
#endif
#endif /* __StlSignalFileLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


