

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:41 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\RecordingCalibration.idl:
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

#ifndef __RecordingCalibration_h__
#define __RecordingCalibration_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRecordingCalibration_FWD_DEFINED__
#define __IRecordingCalibration_FWD_DEFINED__
typedef interface IRecordingCalibration IRecordingCalibration;
#endif 	/* __IRecordingCalibration_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "SignalRecord.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IRecordingCalibration_INTERFACE_DEFINED__
#define __IRecordingCalibration_INTERFACE_DEFINED__

/* interface IRecordingCalibration */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IRecordingCalibration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B65FECE-E4C8-11D1-BB8F-00001B4E6868")
    IRecordingCalibration : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CalibrateRecord( 
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DecalibrateRecord( 
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTrueSampleFrequency( 
            /* [in] */ DOUBLE dFreq) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTrueSampleFrequency( 
            /* [retval][out] */ DOUBLE *pdFreq) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBaseCalibration( 
            /* [in] */ DOUBLE dBaseMin,
            /* [in] */ DOUBLE dBaseMax,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBaseCalibration( 
            /* [out] */ DOUBLE *pdBaseMin,
            /* [out] */ DOUBLE *pdBaseMax,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddChannel( 
            /* [in] */ DOUBLE dInputMin,
            /* [in] */ DOUBLE dOutputMin,
            /* [in] */ DOUBLE dInputMax,
            /* [in] */ DOUBLE dOutputMax,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertChannel( 
            /* [in] */ INT iIndex,
            /* [in] */ DOUBLE dInputMin,
            /* [in] */ DOUBLE dOutputMin,
            /* [in] */ DOUBLE dInputMax,
            /* [in] */ DOUBLE dOutputMax,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteChannel( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelCalibration( 
            /* [in] */ INT iIndex,
            /* [in] */ DOUBLE dInputMin,
            /* [in] */ DOUBLE dOutputMin,
            /* [in] */ DOUBLE dInputMax,
            /* [in] */ DOUBLE dOutputMax,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelCalibration( 
            /* [in] */ INT iIndex,
            /* [out] */ DOUBLE *pdInputMin,
            /* [out] */ DOUBLE *pdOutputMin,
            /* [out] */ DOUBLE *pdInputMax,
            /* [out] */ DOUBLE *pdOutputMax,
            /* [in] */ LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IRecordingCalibration *pRecordingCalibration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRecordingCalibrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecordingCalibration * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecordingCalibration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecordingCalibration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecordingCalibration * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecordingCalibration * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecordingCalibration * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecordingCalibration * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CalibrateRecord )( 
            IRecordingCalibration * This,
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DecalibrateRecord )( 
            IRecordingCalibration * This,
            /* [in] */ ISignalRecord *pSignalRecord,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTrueSampleFrequency )( 
            IRecordingCalibration * This,
            /* [in] */ DOUBLE dFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTrueSampleFrequency )( 
            IRecordingCalibration * This,
            /* [retval][out] */ DOUBLE *pdFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBaseCalibration )( 
            IRecordingCalibration * This,
            /* [in] */ DOUBLE dBaseMin,
            /* [in] */ DOUBLE dBaseMax,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBaseCalibration )( 
            IRecordingCalibration * This,
            /* [out] */ DOUBLE *pdBaseMin,
            /* [out] */ DOUBLE *pdBaseMax,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddChannel )( 
            IRecordingCalibration * This,
            /* [in] */ DOUBLE dInputMin,
            /* [in] */ DOUBLE dOutputMin,
            /* [in] */ DOUBLE dInputMax,
            /* [in] */ DOUBLE dOutputMax,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertChannel )( 
            IRecordingCalibration * This,
            /* [in] */ INT iIndex,
            /* [in] */ DOUBLE dInputMin,
            /* [in] */ DOUBLE dOutputMin,
            /* [in] */ DOUBLE dInputMax,
            /* [in] */ DOUBLE dOutputMax,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteChannel )( 
            IRecordingCalibration * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelCount )( 
            IRecordingCalibration * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelCalibration )( 
            IRecordingCalibration * This,
            /* [in] */ INT iIndex,
            /* [in] */ DOUBLE dInputMin,
            /* [in] */ DOUBLE dOutputMin,
            /* [in] */ DOUBLE dInputMax,
            /* [in] */ DOUBLE dOutputMax,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelCalibration )( 
            IRecordingCalibration * This,
            /* [in] */ INT iIndex,
            /* [out] */ DOUBLE *pdInputMin,
            /* [out] */ DOUBLE *pdOutputMin,
            /* [out] */ DOUBLE *pdInputMax,
            /* [out] */ DOUBLE *pdOutputMax,
            /* [in] */ LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IRecordingCalibration * This,
            /* [in] */ IRecordingCalibration *pRecordingCalibration);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IRecordingCalibration * This);
        
        END_INTERFACE
    } IRecordingCalibrationVtbl;

    interface IRecordingCalibration
    {
        CONST_VTBL struct IRecordingCalibrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecordingCalibration_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRecordingCalibration_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRecordingCalibration_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRecordingCalibration_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRecordingCalibration_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRecordingCalibration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRecordingCalibration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRecordingCalibration_CalibrateRecord(This,pSignalRecord,lFlags)	\
    (This)->lpVtbl -> CalibrateRecord(This,pSignalRecord,lFlags)

#define IRecordingCalibration_DecalibrateRecord(This,pSignalRecord,lFlags)	\
    (This)->lpVtbl -> DecalibrateRecord(This,pSignalRecord,lFlags)

#define IRecordingCalibration_SetTrueSampleFrequency(This,dFreq)	\
    (This)->lpVtbl -> SetTrueSampleFrequency(This,dFreq)

#define IRecordingCalibration_GetTrueSampleFrequency(This,pdFreq)	\
    (This)->lpVtbl -> GetTrueSampleFrequency(This,pdFreq)

#define IRecordingCalibration_SetBaseCalibration(This,dBaseMin,dBaseMax,lFlags)	\
    (This)->lpVtbl -> SetBaseCalibration(This,dBaseMin,dBaseMax,lFlags)

#define IRecordingCalibration_GetBaseCalibration(This,pdBaseMin,pdBaseMax,lFlags)	\
    (This)->lpVtbl -> GetBaseCalibration(This,pdBaseMin,pdBaseMax,lFlags)

#define IRecordingCalibration_AddChannel(This,dInputMin,dOutputMin,dInputMax,dOutputMax,lFlags)	\
    (This)->lpVtbl -> AddChannel(This,dInputMin,dOutputMin,dInputMax,dOutputMax,lFlags)

#define IRecordingCalibration_InsertChannel(This,iIndex,dInputMin,dOutputMin,dInputMax,dOutputMax,lFlags)	\
    (This)->lpVtbl -> InsertChannel(This,iIndex,dInputMin,dOutputMin,dInputMax,dOutputMax,lFlags)

#define IRecordingCalibration_DeleteChannel(This,iIndex)	\
    (This)->lpVtbl -> DeleteChannel(This,iIndex)

#define IRecordingCalibration_GetChannelCount(This,piCount)	\
    (This)->lpVtbl -> GetChannelCount(This,piCount)

#define IRecordingCalibration_SetChannelCalibration(This,iIndex,dInputMin,dOutputMin,dInputMax,dOutputMax,lFlags)	\
    (This)->lpVtbl -> SetChannelCalibration(This,iIndex,dInputMin,dOutputMin,dInputMax,dOutputMax,lFlags)

#define IRecordingCalibration_GetChannelCalibration(This,iIndex,pdInputMin,pdOutputMin,pdInputMax,pdOutputMax,lFlags)	\
    (This)->lpVtbl -> GetChannelCalibration(This,iIndex,pdInputMin,pdOutputMin,pdInputMax,pdOutputMax,lFlags)

#define IRecordingCalibration_Init(This,pRecordingCalibration)	\
    (This)->lpVtbl -> Init(This,pRecordingCalibration)

#define IRecordingCalibration_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_CalibrateRecord_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ ISignalRecord *pSignalRecord,
    /* [in] */ LONG lFlags);


void __RPC_STUB IRecordingCalibration_CalibrateRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_DecalibrateRecord_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ ISignalRecord *pSignalRecord,
    /* [in] */ LONG lFlags);


void __RPC_STUB IRecordingCalibration_DecalibrateRecord_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_SetTrueSampleFrequency_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ DOUBLE dFreq);


void __RPC_STUB IRecordingCalibration_SetTrueSampleFrequency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_GetTrueSampleFrequency_Proxy( 
    IRecordingCalibration * This,
    /* [retval][out] */ DOUBLE *pdFreq);


void __RPC_STUB IRecordingCalibration_GetTrueSampleFrequency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_SetBaseCalibration_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ DOUBLE dBaseMin,
    /* [in] */ DOUBLE dBaseMax,
    /* [in] */ LONG lFlags);


void __RPC_STUB IRecordingCalibration_SetBaseCalibration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_GetBaseCalibration_Proxy( 
    IRecordingCalibration * This,
    /* [out] */ DOUBLE *pdBaseMin,
    /* [out] */ DOUBLE *pdBaseMax,
    /* [in] */ LONG lFlags);


void __RPC_STUB IRecordingCalibration_GetBaseCalibration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_AddChannel_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ DOUBLE dInputMin,
    /* [in] */ DOUBLE dOutputMin,
    /* [in] */ DOUBLE dInputMax,
    /* [in] */ DOUBLE dOutputMax,
    /* [in] */ LONG lFlags);


void __RPC_STUB IRecordingCalibration_AddChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_InsertChannel_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ INT iIndex,
    /* [in] */ DOUBLE dInputMin,
    /* [in] */ DOUBLE dOutputMin,
    /* [in] */ DOUBLE dInputMax,
    /* [in] */ DOUBLE dOutputMax,
    /* [in] */ LONG lFlags);


void __RPC_STUB IRecordingCalibration_InsertChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_DeleteChannel_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ INT iIndex);


void __RPC_STUB IRecordingCalibration_DeleteChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_GetChannelCount_Proxy( 
    IRecordingCalibration * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IRecordingCalibration_GetChannelCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_SetChannelCalibration_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ INT iIndex,
    /* [in] */ DOUBLE dInputMin,
    /* [in] */ DOUBLE dOutputMin,
    /* [in] */ DOUBLE dInputMax,
    /* [in] */ DOUBLE dOutputMax,
    /* [in] */ LONG lFlags);


void __RPC_STUB IRecordingCalibration_SetChannelCalibration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_GetChannelCalibration_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ INT iIndex,
    /* [out] */ DOUBLE *pdInputMin,
    /* [out] */ DOUBLE *pdOutputMin,
    /* [out] */ DOUBLE *pdInputMax,
    /* [out] */ DOUBLE *pdOutputMax,
    /* [in] */ LONG lFlags);


void __RPC_STUB IRecordingCalibration_GetChannelCalibration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_Init_Proxy( 
    IRecordingCalibration * This,
    /* [in] */ IRecordingCalibration *pRecordingCalibration);


void __RPC_STUB IRecordingCalibration_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingCalibration_Reset_Proxy( 
    IRecordingCalibration * This);


void __RPC_STUB IRecordingCalibration_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRecordingCalibration_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


