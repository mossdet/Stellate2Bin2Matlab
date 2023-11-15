

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:26 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\SignalFile.idl:
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

#ifndef __SignalFile_h__
#define __SignalFile_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISignalFile_FWD_DEFINED__
#define __ISignalFile_FWD_DEFINED__
typedef interface ISignalFile ISignalFile;
#endif 	/* __ISignalFile_FWD_DEFINED__ */


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

#ifndef __ISignalFile_INTERFACE_DEFINED__
#define __ISignalFile_INTERFACE_DEFINED__

/* interface ISignalFile */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_ISignalFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F83549E4-14A1-4AFA-9F52-7D8D7862CBF8")
    ISignalFile : public IDispatch
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
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Write( 
            /* [in] */ ISignalRecord *pSignalRecord,
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
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSignalInfo( 
            /* [retval][out] */ ISignalInfo **ppSignalInfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISignalFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignalFile * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignalFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignalFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISignalFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISignalFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISignalFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignalFile * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            ISignalFile * This,
            /* [in] */ BSTR bstrFile,
            /* [in] */ LONG lFlags,
            /* [in] */ ISignalInfo *pSignalInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            ISignalFile * This,
            /* [in] */ BSTR bstrFile,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            ISignalFile * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Flush )( 
            ISignalFile * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            ISignalFile * This,
            /* [retval][out] */ BSTR *pbstrFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileSize )( 
            ISignalFile * This,
            /* [retval][out] */ DOUBLE *pdFileSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOpen )( 
            ISignalFile * This,
            /* [defaultvalue][retval][out] */ BOOL *pbIsOpen);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            ISignalFile * This,
            /* [in] */ BSTR bstrFile,
            /* [defaultvalue][retval][out] */ BOOL *pbIsValid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            ISignalFile * This,
            /* [in] */ BSTR bstrSrcFile,
            /* [in] */ BSTR bstrDstFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Rename )( 
            ISignalFile * This,
            /* [in] */ BSTR bstrOldFile,
            /* [in] */ BSTR bstrNewFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ISignalFile * This,
            /* [in] */ BSTR bstrFile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            ISignalFile * This,
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            ISignalFile * This,
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSignalRecord )( 
            ISignalFile * This,
            /* [in] */ LONG lSamples,
            /* [retval][out] */ ISignalRecord **ppSignalRecord);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitSignalRecord )( 
            ISignalFile * This,
            /* [in] */ LONG lSamples,
            /* [in] */ ISignalRecord *pSignalRecord);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecordCount )( 
            ISignalFile * This,
            /* [in] */ LONG lSamples,
            /* [retval][out] */ LONG *plRecords);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSignalInfo )( 
            ISignalFile * This,
            /* [retval][out] */ ISignalInfo **ppSignalInfo);
        
        END_INTERFACE
    } ISignalFileVtbl;

    interface ISignalFile
    {
        CONST_VTBL struct ISignalFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignalFile_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISignalFile_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISignalFile_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISignalFile_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISignalFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISignalFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISignalFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISignalFile_Create(This,bstrFile,lFlags,pSignalInfo)	\
    (This)->lpVtbl -> Create(This,bstrFile,lFlags,pSignalInfo)

#define ISignalFile_Open(This,bstrFile,lFlags)	\
    (This)->lpVtbl -> Open(This,bstrFile,lFlags)

#define ISignalFile_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define ISignalFile_Flush(This)	\
    (This)->lpVtbl -> Flush(This)

#define ISignalFile_GetFileName(This,pbstrFile)	\
    (This)->lpVtbl -> GetFileName(This,pbstrFile)

#define ISignalFile_GetFileSize(This,pdFileSize)	\
    (This)->lpVtbl -> GetFileSize(This,pdFileSize)

#define ISignalFile_IsOpen(This,pbIsOpen)	\
    (This)->lpVtbl -> IsOpen(This,pbIsOpen)

#define ISignalFile_IsValid(This,bstrFile,pbIsValid)	\
    (This)->lpVtbl -> IsValid(This,bstrFile,pbIsValid)

#define ISignalFile_Copy(This,bstrSrcFile,bstrDstFile)	\
    (This)->lpVtbl -> Copy(This,bstrSrcFile,bstrDstFile)

#define ISignalFile_Rename(This,bstrOldFile,bstrNewFile)	\
    (This)->lpVtbl -> Rename(This,bstrOldFile,bstrNewFile)

#define ISignalFile_Delete(This,bstrFile)	\
    (This)->lpVtbl -> Delete(This,bstrFile)

#define ISignalFile_Read(This,pSignalRecord,lFlags)	\
    (This)->lpVtbl -> Read(This,pSignalRecord,lFlags)

#define ISignalFile_Write(This,pSignalRecord,lFlags)	\
    (This)->lpVtbl -> Write(This,pSignalRecord,lFlags)

#define ISignalFile_CreateSignalRecord(This,lSamples,ppSignalRecord)	\
    (This)->lpVtbl -> CreateSignalRecord(This,lSamples,ppSignalRecord)

#define ISignalFile_InitSignalRecord(This,lSamples,pSignalRecord)	\
    (This)->lpVtbl -> InitSignalRecord(This,lSamples,pSignalRecord)

#define ISignalFile_GetRecordCount(This,lSamples,plRecords)	\
    (This)->lpVtbl -> GetRecordCount(This,lSamples,plRecords)

#define ISignalFile_GetSignalInfo(This,ppSignalInfo)	\
    (This)->lpVtbl -> GetSignalInfo(This,ppSignalInfo)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Create_Proxy( 
    ISignalFile * This,
    /* [in] */ BSTR bstrFile,
    /* [in] */ LONG lFlags,
    /* [in] */ ISignalInfo *pSignalInfo);


void __RPC_STUB ISignalFile_Create_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Open_Proxy( 
    ISignalFile * This,
    /* [in] */ BSTR bstrFile,
    /* [in] */ LONG lFlags);


void __RPC_STUB ISignalFile_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Close_Proxy( 
    ISignalFile * This);


void __RPC_STUB ISignalFile_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Flush_Proxy( 
    ISignalFile * This);


void __RPC_STUB ISignalFile_Flush_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_GetFileName_Proxy( 
    ISignalFile * This,
    /* [retval][out] */ BSTR *pbstrFile);


void __RPC_STUB ISignalFile_GetFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_GetFileSize_Proxy( 
    ISignalFile * This,
    /* [retval][out] */ DOUBLE *pdFileSize);


void __RPC_STUB ISignalFile_GetFileSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_IsOpen_Proxy( 
    ISignalFile * This,
    /* [defaultvalue][retval][out] */ BOOL *pbIsOpen);


void __RPC_STUB ISignalFile_IsOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_IsValid_Proxy( 
    ISignalFile * This,
    /* [in] */ BSTR bstrFile,
    /* [defaultvalue][retval][out] */ BOOL *pbIsValid);


void __RPC_STUB ISignalFile_IsValid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Copy_Proxy( 
    ISignalFile * This,
    /* [in] */ BSTR bstrSrcFile,
    /* [in] */ BSTR bstrDstFile);


void __RPC_STUB ISignalFile_Copy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Rename_Proxy( 
    ISignalFile * This,
    /* [in] */ BSTR bstrOldFile,
    /* [in] */ BSTR bstrNewFile);


void __RPC_STUB ISignalFile_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Delete_Proxy( 
    ISignalFile * This,
    /* [in] */ BSTR bstrFile);


void __RPC_STUB ISignalFile_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Read_Proxy( 
    ISignalFile * This,
    /* [in] */ ISignalRecord *pSignalRecord,
    /* [in] */ LONG lFlags);


void __RPC_STUB ISignalFile_Read_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_Write_Proxy( 
    ISignalFile * This,
    /* [in] */ ISignalRecord *pSignalRecord,
    /* [in] */ LONG lFlags);


void __RPC_STUB ISignalFile_Write_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_CreateSignalRecord_Proxy( 
    ISignalFile * This,
    /* [in] */ LONG lSamples,
    /* [retval][out] */ ISignalRecord **ppSignalRecord);


void __RPC_STUB ISignalFile_CreateSignalRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_InitSignalRecord_Proxy( 
    ISignalFile * This,
    /* [in] */ LONG lSamples,
    /* [in] */ ISignalRecord *pSignalRecord);


void __RPC_STUB ISignalFile_InitSignalRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_GetRecordCount_Proxy( 
    ISignalFile * This,
    /* [in] */ LONG lSamples,
    /* [retval][out] */ LONG *plRecords);


void __RPC_STUB ISignalFile_GetRecordCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalFile_GetSignalInfo_Proxy( 
    ISignalFile * This,
    /* [retval][out] */ ISignalInfo **ppSignalInfo);


void __RPC_STUB ISignalFile_GetSignalInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISignalFile_INTERFACE_DEFINED__ */


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


