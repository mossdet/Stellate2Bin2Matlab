

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:07 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\SignalRecord.idl:
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

#ifndef __SignalRecord_h__
#define __SignalRecord_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISignalRecord_FWD_DEFINED__
#define __ISignalRecord_FWD_DEFINED__
typedef interface ISignalRecord ISignalRecord;
#endif 	/* __ISignalRecord_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISignalRecord_INTERFACE_DEFINED__
#define __ISignalRecord_INTERFACE_DEFINED__

/* interface ISignalRecord */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_ISignalRecord;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35133B6D-64BD-4B2C-8F4E-5456F83A7A55")
    ISignalRecord : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStartTime( 
            /* [in] */ DATE dateTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStartTime( 
            /* [retval][out] */ DATE *pdateTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStartSample( 
            /* [in] */ LONG lSample) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStartSample( 
            /* [retval][out] */ LONG *plSample) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTimeLength( 
            /* [in] */ DOUBLE dSeconds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTimeLength( 
            /* [retval][out] */ DOUBLE *pdSeconds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSampleLength( 
            /* [in] */ LONG lSamples) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSampleLength( 
            /* [retval][out] */ LONG *plSamples) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitRecordBuffer( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecordBuffer( 
            /* [out][in][ref] */ DOUBLE **ppdBuffer,
            /* [out][in] */ LONG *plLength) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecordData( 
            /* [retval][out] */ SAFEARRAY * *ppsaBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutRecordData( 
            /* [in] */ SAFEARRAY * *ppsaBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddChannel( 
            /* [in] */ LONG lChannelSamples) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertChannel( 
            /* [in] */ INT iIndex,
            /* [in] */ LONG lChannelSamples) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteChannel( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelSamples( 
            /* [in] */ INT iIndex,
            /* [in] */ LONG lSamples) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelSamples( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ LONG *plSamples) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ ISignalRecord *pSignalRecord) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISignalRecordVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignalRecord * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignalRecord * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignalRecord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISignalRecord * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISignalRecord * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISignalRecord * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignalRecord * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStartTime )( 
            ISignalRecord * This,
            /* [in] */ DATE dateTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStartTime )( 
            ISignalRecord * This,
            /* [retval][out] */ DATE *pdateTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStartSample )( 
            ISignalRecord * This,
            /* [in] */ LONG lSample);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStartSample )( 
            ISignalRecord * This,
            /* [retval][out] */ LONG *plSample);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTimeLength )( 
            ISignalRecord * This,
            /* [in] */ DOUBLE dSeconds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTimeLength )( 
            ISignalRecord * This,
            /* [retval][out] */ DOUBLE *pdSeconds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSampleLength )( 
            ISignalRecord * This,
            /* [in] */ LONG lSamples);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSampleLength )( 
            ISignalRecord * This,
            /* [retval][out] */ LONG *plSamples);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitRecordBuffer )( 
            ISignalRecord * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecordBuffer )( 
            ISignalRecord * This,
            /* [out][in][ref] */ DOUBLE **ppdBuffer,
            /* [out][in] */ LONG *plLength);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRecordData )( 
            ISignalRecord * This,
            /* [retval][out] */ SAFEARRAY * *ppsaBuffer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutRecordData )( 
            ISignalRecord * This,
            /* [in] */ SAFEARRAY * *ppsaBuffer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddChannel )( 
            ISignalRecord * This,
            /* [in] */ LONG lChannelSamples);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertChannel )( 
            ISignalRecord * This,
            /* [in] */ INT iIndex,
            /* [in] */ LONG lChannelSamples);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteChannel )( 
            ISignalRecord * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelCount )( 
            ISignalRecord * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelSamples )( 
            ISignalRecord * This,
            /* [in] */ INT iIndex,
            /* [in] */ LONG lSamples);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelSamples )( 
            ISignalRecord * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ LONG *plSamples);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            ISignalRecord * This,
            /* [in] */ ISignalRecord *pSignalRecord);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ISignalRecord * This);
        
        END_INTERFACE
    } ISignalRecordVtbl;

    interface ISignalRecord
    {
        CONST_VTBL struct ISignalRecordVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignalRecord_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISignalRecord_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISignalRecord_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISignalRecord_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISignalRecord_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISignalRecord_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISignalRecord_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISignalRecord_SetStartTime(This,dateTime)	\
    (This)->lpVtbl -> SetStartTime(This,dateTime)

#define ISignalRecord_GetStartTime(This,pdateTime)	\
    (This)->lpVtbl -> GetStartTime(This,pdateTime)

#define ISignalRecord_SetStartSample(This,lSample)	\
    (This)->lpVtbl -> SetStartSample(This,lSample)

#define ISignalRecord_GetStartSample(This,plSample)	\
    (This)->lpVtbl -> GetStartSample(This,plSample)

#define ISignalRecord_SetTimeLength(This,dSeconds)	\
    (This)->lpVtbl -> SetTimeLength(This,dSeconds)

#define ISignalRecord_GetTimeLength(This,pdSeconds)	\
    (This)->lpVtbl -> GetTimeLength(This,pdSeconds)

#define ISignalRecord_SetSampleLength(This,lSamples)	\
    (This)->lpVtbl -> SetSampleLength(This,lSamples)

#define ISignalRecord_GetSampleLength(This,plSamples)	\
    (This)->lpVtbl -> GetSampleLength(This,plSamples)

#define ISignalRecord_InitRecordBuffer(This)	\
    (This)->lpVtbl -> InitRecordBuffer(This)

#define ISignalRecord_GetRecordBuffer(This,ppdBuffer,plLength)	\
    (This)->lpVtbl -> GetRecordBuffer(This,ppdBuffer,plLength)

#define ISignalRecord_GetRecordData(This,ppsaBuffer)	\
    (This)->lpVtbl -> GetRecordData(This,ppsaBuffer)

#define ISignalRecord_PutRecordData(This,ppsaBuffer)	\
    (This)->lpVtbl -> PutRecordData(This,ppsaBuffer)

#define ISignalRecord_AddChannel(This,lChannelSamples)	\
    (This)->lpVtbl -> AddChannel(This,lChannelSamples)

#define ISignalRecord_InsertChannel(This,iIndex,lChannelSamples)	\
    (This)->lpVtbl -> InsertChannel(This,iIndex,lChannelSamples)

#define ISignalRecord_DeleteChannel(This,iIndex)	\
    (This)->lpVtbl -> DeleteChannel(This,iIndex)

#define ISignalRecord_GetChannelCount(This,piCount)	\
    (This)->lpVtbl -> GetChannelCount(This,piCount)

#define ISignalRecord_SetChannelSamples(This,iIndex,lSamples)	\
    (This)->lpVtbl -> SetChannelSamples(This,iIndex,lSamples)

#define ISignalRecord_GetChannelSamples(This,iIndex,plSamples)	\
    (This)->lpVtbl -> GetChannelSamples(This,iIndex,plSamples)

#define ISignalRecord_Init(This,pSignalRecord)	\
    (This)->lpVtbl -> Init(This,pSignalRecord)

#define ISignalRecord_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_SetStartTime_Proxy( 
    ISignalRecord * This,
    /* [in] */ DATE dateTime);


void __RPC_STUB ISignalRecord_SetStartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_GetStartTime_Proxy( 
    ISignalRecord * This,
    /* [retval][out] */ DATE *pdateTime);


void __RPC_STUB ISignalRecord_GetStartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_SetStartSample_Proxy( 
    ISignalRecord * This,
    /* [in] */ LONG lSample);


void __RPC_STUB ISignalRecord_SetStartSample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_GetStartSample_Proxy( 
    ISignalRecord * This,
    /* [retval][out] */ LONG *plSample);


void __RPC_STUB ISignalRecord_GetStartSample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_SetTimeLength_Proxy( 
    ISignalRecord * This,
    /* [in] */ DOUBLE dSeconds);


void __RPC_STUB ISignalRecord_SetTimeLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_GetTimeLength_Proxy( 
    ISignalRecord * This,
    /* [retval][out] */ DOUBLE *pdSeconds);


void __RPC_STUB ISignalRecord_GetTimeLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_SetSampleLength_Proxy( 
    ISignalRecord * This,
    /* [in] */ LONG lSamples);


void __RPC_STUB ISignalRecord_SetSampleLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_GetSampleLength_Proxy( 
    ISignalRecord * This,
    /* [retval][out] */ LONG *plSamples);


void __RPC_STUB ISignalRecord_GetSampleLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_InitRecordBuffer_Proxy( 
    ISignalRecord * This);


void __RPC_STUB ISignalRecord_InitRecordBuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_GetRecordBuffer_Proxy( 
    ISignalRecord * This,
    /* [out][in][ref] */ DOUBLE **ppdBuffer,
    /* [out][in] */ LONG *plLength);


void __RPC_STUB ISignalRecord_GetRecordBuffer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_GetRecordData_Proxy( 
    ISignalRecord * This,
    /* [retval][out] */ SAFEARRAY * *ppsaBuffer);


void __RPC_STUB ISignalRecord_GetRecordData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_PutRecordData_Proxy( 
    ISignalRecord * This,
    /* [in] */ SAFEARRAY * *ppsaBuffer);


void __RPC_STUB ISignalRecord_PutRecordData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_AddChannel_Proxy( 
    ISignalRecord * This,
    /* [in] */ LONG lChannelSamples);


void __RPC_STUB ISignalRecord_AddChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_InsertChannel_Proxy( 
    ISignalRecord * This,
    /* [in] */ INT iIndex,
    /* [in] */ LONG lChannelSamples);


void __RPC_STUB ISignalRecord_InsertChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_DeleteChannel_Proxy( 
    ISignalRecord * This,
    /* [in] */ INT iIndex);


void __RPC_STUB ISignalRecord_DeleteChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_GetChannelCount_Proxy( 
    ISignalRecord * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB ISignalRecord_GetChannelCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_SetChannelSamples_Proxy( 
    ISignalRecord * This,
    /* [in] */ INT iIndex,
    /* [in] */ LONG lSamples);


void __RPC_STUB ISignalRecord_SetChannelSamples_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_GetChannelSamples_Proxy( 
    ISignalRecord * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ LONG *plSamples);


void __RPC_STUB ISignalRecord_GetChannelSamples_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_Init_Proxy( 
    ISignalRecord * This,
    /* [in] */ ISignalRecord *pSignalRecord);


void __RPC_STUB ISignalRecord_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISignalRecord_Reset_Proxy( 
    ISignalRecord * This);


void __RPC_STUB ISignalRecord_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISignalRecord_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


