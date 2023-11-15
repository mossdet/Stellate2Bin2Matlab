

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:59:06 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\IESignalFile.idl:
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __IESignalFile_h__
#define __IESignalFile_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIESignalFile_FWD_DEFINED__
#define __IIESignalFile_FWD_DEFINED__
typedef interface IIESignalFile IIESignalFile;
#endif 	/* __IIESignalFile_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "SignalInfo.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IIESignalFile_INTERFACE_DEFINED__
#define __IIESignalFile_INTERFACE_DEFINED__

/* interface IIESignalFile */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IIESignalFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("615FC94F-72FE-4461-A282-9F521AF203D6")
    IIESignalFile : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ BSTR bstrFile,
            /* [in] */ LONG lFlags,
            /* [in] */ ISignalInfo *pSignalInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR bstrFile,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [retval][out] */ BSTR *pbstrFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFileSize( 
            /* [retval][out] */ DOUBLE *pdFileSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsOpen( 
            /* [defaultvalue][retval][out] */ BOOL *pbIsOpen = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ BSTR bstrFile,
            /* [defaultvalue][retval][out] */ BOOL *pbIsValid = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ BSTR bstrSrcFile,
            /* [in] */ BSTR bstrDstFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Rename( 
            /* [in] */ BSTR bstrOldFile,
            /* [in] */ BSTR bstrNewFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR bstrFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ImportRecord( 
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ ISignalInfo *pSignalInfo,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExportRecord( 
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ImportInfo( 
            /* [in] */ ISignalInfo *pSignalInfo,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExportInfo( 
            /* [in] */ ISignalInfo *pSignalInfo,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSignalRecord( 
            /* [in] */ LONG lSamples,
            /* [retval][out] */ ISignalRecord **ppSignalRecord) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitSignalRecord( 
            /* [in] */ LONG lSamples,
            /* [in] */ ISignalRecord *pSignalRecord) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecordCount( 
            /* [in] */ LONG lSamples,
            /* [retval][out] */ LONG *plRecords) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIESignalFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIESignalFile * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIESignalFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIESignalFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIESignalFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIESignalFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIESignalFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIESignalFile * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IIESignalFile * This,
            /* [in] */ BSTR bstrFile,
            /* [in] */ LONG lFlags,
            /* [in] */ ISignalInfo *pSignalInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IIESignalFile * This,
            /* [in] */ BSTR bstrFile,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIESignalFile * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IIESignalFile * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IIESignalFile * This,
            /* [retval][out] */ BSTR *pbstrFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileSize )( 
            IIESignalFile * This,
            /* [retval][out] */ DOUBLE *pdFileSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOpen )( 
            IIESignalFile * This,
            /* [defaultvalue][retval][out] */ BOOL *pbIsOpen);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IIESignalFile * This,
            /* [in] */ BSTR bstrFile,
            /* [defaultvalue][retval][out] */ BOOL *pbIsValid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IIESignalFile * This,
            /* [in] */ BSTR bstrSrcFile,
            /* [in] */ BSTR bstrDstFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Rename )( 
            IIESignalFile * This,
            /* [in] */ BSTR bstrOldFile,
            /* [in] */ BSTR bstrNewFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IIESignalFile * This,
            /* [in] */ BSTR bstrFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ImportRecord )( 
            IIESignalFile * This,
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ ISignalInfo *pSignalInfo,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExportRecord )( 
            IIESignalFile * This,
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ImportInfo )( 
            IIESignalFile * This,
            /* [in] */ ISignalInfo *pSignalInfo,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExportInfo )( 
            IIESignalFile * This,
            /* [in] */ ISignalInfo *pSignalInfo,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSignalRecord )( 
            IIESignalFile * This,
            /* [in] */ LONG lSamples,
            /* [retval][out] */ ISignalRecord **ppSignalRecord);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitSignalRecord )( 
            IIESignalFile * This,
            /* [in] */ LONG lSamples,
            /* [in] */ ISignalRecord *pSignalRecord);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecordCount )( 
            IIESignalFile * This,
            /* [in] */ LONG lSamples,
            /* [retval][out] */ LONG *plRecords);
        
        END_INTERFACE
    } IIESignalFileVtbl;

    interface IIESignalFile
    {
        CONST_VTBL struct IIESignalFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIESignalFile_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IIESignalFile_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IIESignalFile_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IIESignalFile_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IIESignalFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IIESignalFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IIESignalFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IIESignalFile_Create(This,bstrFile,lFlags,pSignalInfo)	\
    (This)->lpVtbl -> Create(This,bstrFile,lFlags,pSignalInfo)

#define IIESignalFile_Open(This,bstrFile,lFlags)	\
    (This)->lpVtbl -> Open(This,bstrFile,lFlags)

#define IIESignalFile_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IIESignalFile_Flush(This)	\
    (This)->lpVtbl -> Flush(This)

#define IIESignalFile_GetFileName(This,pbstrFile)	\
    (This)->lpVtbl -> GetFileName(This,pbstrFile)

#define IIESignalFile_GetFileSize(This,pdFileSize)	\
    (This)->lpVtbl -> GetFileSize(This,pdFileSize)

#define IIESignalFile_IsOpen(This,pbIsOpen)	\
    (This)->lpVtbl -> IsOpen(This,pbIsOpen)

#define IIESignalFile_IsValid(This,bstrFile,pbIsValid)	\
    (This)->lpVtbl -> IsValid(This,bstrFile,pbIsValid)

#define IIESignalFile_Copy(This,bstrSrcFile,bstrDstFile)	\
    (This)->lpVtbl -> Copy(This,bstrSrcFile,bstrDstFile)

#define IIESignalFile_Rename(This,bstrOldFile,bstrNewFile)	\
    (This)->lpVtbl -> Rename(This,bstrOldFile,bstrNewFile)

#define IIESignalFile_Delete(This,bstrFile)	\
    (This)->lpVtbl -> Delete(This,bstrFile)

#define IIESignalFile_ImportRecord(This,pSignalRecord,pSignalInfo,lFlags)	\
    (This)->lpVtbl -> ImportRecord(This,pSignalRecord,pSignalInfo,lFlags)

#define IIESignalFile_ExportRecord(This,pSignalRecord,lFlags)	\
    (This)->lpVtbl -> ExportRecord(This,pSignalRecord,lFlags)

#define IIESignalFile_ImportInfo(This,pSignalInfo,lFlags)	\
    (This)->lpVtbl -> ImportInfo(This,pSignalInfo,lFlags)

#define IIESignalFile_ExportInfo(This,pSignalInfo,lFlags)	\
    (This)->lpVtbl -> ExportInfo(This,pSignalInfo,lFlags)

#define IIESignalFile_CreateSignalRecord(This,lSamples,ppSignalRecord)	\
    (This)->lpVtbl -> CreateSignalRecord(This,lSamples,ppSignalRecord)

#define IIESignalFile_InitSignalRecord(This,lSamples,pSignalRecord)	\
    (This)->lpVtbl -> InitSignalRecord(This,lSamples,pSignalRecord)

#define IIESignalFile_GetRecordCount(This,lSamples,plRecords)	\
    (This)->lpVtbl -> GetRecordCount(This,lSamples,plRecords)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_Create_Proxy( 
    IIESignalFile * This,
    /* [in] */ BSTR bstrFile,
    /* [in] */ LONG lFlags,
    /* [in] */ ISignalInfo *pSignalInfo);


void __RPC_STUB IIESignalFile_Create_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_Open_Proxy( 
    IIESignalFile * This,
    /* [in] */ BSTR bstrFile,
    /* [in] */ LONG lFlags);


void __RPC_STUB IIESignalFile_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_Close_Proxy( 
    IIESignalFile * This);


void __RPC_STUB IIESignalFile_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_Flush_Proxy( 
    IIESignalFile * This);


void __RPC_STUB IIESignalFile_Flush_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_GetFileName_Proxy( 
    IIESignalFile * This,
    /* [retval][out] */ BSTR *pbstrFile);


void __RPC_STUB IIESignalFile_GetFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_GetFileSize_Proxy( 
    IIESignalFile * This,
    /* [retval][out] */ DOUBLE *pdFileSize);


void __RPC_STUB IIESignalFile_GetFileSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_IsOpen_Proxy( 
    IIESignalFile * This,
    /* [defaultvalue][retval][out] */ BOOL *pbIsOpen);


void __RPC_STUB IIESignalFile_IsOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_IsValid_Proxy( 
    IIESignalFile * This,
    /* [in] */ BSTR bstrFile,
    /* [defaultvalue][retval][out] */ BOOL *pbIsValid);


void __RPC_STUB IIESignalFile_IsValid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_Copy_Proxy( 
    IIESignalFile * This,
    /* [in] */ BSTR bstrSrcFile,
    /* [in] */ BSTR bstrDstFile);


void __RPC_STUB IIESignalFile_Copy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_Rename_Proxy( 
    IIESignalFile * This,
    /* [in] */ BSTR bstrOldFile,
    /* [in] */ BSTR bstrNewFile);


void __RPC_STUB IIESignalFile_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_Delete_Proxy( 
    IIESignalFile * This,
    /* [in] */ BSTR bstrFile);


void __RPC_STUB IIESignalFile_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_ImportRecord_Proxy( 
    IIESignalFile * This,
    /* [in] */ ISignalRecord *pSignalRecord,
    /* [in] */ ISignalInfo *pSignalInfo,
    /* [in] */ LONG lFlags);


void __RPC_STUB IIESignalFile_ImportRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_ExportRecord_Proxy( 
    IIESignalFile * This,
    /* [in] */ ISignalRecord *pSignalRecord,
    /* [in] */ LONG lFlags);


void __RPC_STUB IIESignalFile_ExportRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_ImportInfo_Proxy( 
    IIESignalFile * This,
    /* [in] */ ISignalInfo *pSignalInfo,
    /* [in] */ LONG lFlags);


void __RPC_STUB IIESignalFile_ImportInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_ExportInfo_Proxy( 
    IIESignalFile * This,
    /* [in] */ ISignalInfo *pSignalInfo,
    /* [in] */ LONG lFlags);


void __RPC_STUB IIESignalFile_ExportInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_CreateSignalRecord_Proxy( 
    IIESignalFile * This,
    /* [in] */ LONG lSamples,
    /* [retval][out] */ ISignalRecord **ppSignalRecord);


void __RPC_STUB IIESignalFile_CreateSignalRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_InitSignalRecord_Proxy( 
    IIESignalFile * This,
    /* [in] */ LONG lSamples,
    /* [in] */ ISignalRecord *pSignalRecord);


void __RPC_STUB IIESignalFile_InitSignalRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IIESignalFile_GetRecordCount_Proxy( 
    IIESignalFile * This,
    /* [in] */ LONG lSamples,
    /* [retval][out] */ LONG *plRecords);


void __RPC_STUB IIESignalFile_GetRecordCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IIESignalFile_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


