

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __StlIESignalFileRegistrarLib_h__
#define __StlIESignalFileRegistrarLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __CStlIESignalFileRegistrar_FWD_DEFINED__
#define __CStlIESignalFileRegistrar_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlIESignalFileRegistrar CStlIESignalFileRegistrar;
#else
typedef struct CStlIESignalFileRegistrar CStlIESignalFileRegistrar;
#endif /* __cplusplus */

#endif 	/* __CStlIESignalFileRegistrar_FWD_DEFINED__ */


#ifndef __CStlEnumIESignalFileServers_FWD_DEFINED__
#define __CStlEnumIESignalFileServers_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlEnumIESignalFileServers CStlEnumIESignalFileServers;
#else
typedef struct CStlEnumIESignalFileServers CStlEnumIESignalFileServers;
#endif /* __cplusplus */

#endif 	/* __CStlEnumIESignalFileServers_FWD_DEFINED__ */


#ifndef __CStlEnumIESignalFileTypes_FWD_DEFINED__
#define __CStlEnumIESignalFileTypes_FWD_DEFINED__

#ifdef __cplusplus
typedef class CStlEnumIESignalFileTypes CStlEnumIESignalFileTypes;
#else
typedef struct CStlEnumIESignalFileTypes CStlEnumIESignalFileTypes;
#endif /* __cplusplus */

#endif 	/* __CStlEnumIESignalFileTypes_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __StlIESignalFileRegistrarLib_LIBRARY_DEFINED__
#define __StlIESignalFileRegistrarLib_LIBRARY_DEFINED__

/* library StlIESignalFileRegistrarLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_StlIESignalFileRegistrarLib;

EXTERN_C const CLSID CLSID_CStlIESignalFileRegistrar;

#ifdef __cplusplus

class DECLSPEC_UUID("A0BF55EE-E97E-11D1-BB8F-00001B4E6868")
CStlIESignalFileRegistrar;
#endif

EXTERN_C const CLSID CLSID_CStlEnumIESignalFileServers;

#ifdef __cplusplus

class DECLSPEC_UUID("A0BF55F0-E97E-11D1-BB8F-00001B4E6868")
CStlEnumIESignalFileServers;
#endif

EXTERN_C const CLSID CLSID_CStlEnumIESignalFileTypes;

#ifdef __cplusplus

class DECLSPEC_UUID("A0BF55F2-E97E-11D1-BB8F-00001B4E6868")
CStlEnumIESignalFileTypes;
#endif
#endif /* __StlIESignalFileRegistrarLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


