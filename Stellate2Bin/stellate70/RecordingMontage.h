

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:37 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\RecordingMontage.idl:
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

#ifndef __RecordingMontage_h__
#define __RecordingMontage_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRecordingMontage_FWD_DEFINED__
#define __IRecordingMontage_FWD_DEFINED__
typedef interface IRecordingMontage IRecordingMontage;
#endif 	/* __IRecordingMontage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "LogicalMontage.h"
#include "ReformattingMontage.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IRecordingMontage_INTERFACE_DEFINED__
#define __IRecordingMontage_INTERFACE_DEFINED__

/* interface IRecordingMontage */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IRecordingMontage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B65FECA-E4C8-11D1-BB8F-00001B4E6868")
    IRecordingMontage : public ILogicalMontage
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBaseSampleFrequency( 
            /* [in] */ DOUBLE dFreq) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBaseSampleFrequency( 
            /* [retval][out] */ DOUBLE *pdFreq) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddChannel( 
            /* [in] */ BSTR bstrElectrode1Name,
            /* [in] */ BSTR bstrElectrode2Name,
            /* [in] */ EChannelType eType,
            /* [in] */ EChannelUnits eUnits,
            /* [in] */ DOUBLE dSampleFreq,
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertChannel( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrElectrode1Name,
            /* [in] */ BSTR bstrElectrode2Name,
            /* [in] */ EChannelType eType,
            /* [in] */ EChannelUnits eUnits,
            /* [in] */ DOUBLE dSampleFreq,
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteChannel( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelElectrode1Name( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelElectrode1Name( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelElectrode2Name( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelElectrode2Name( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddReformattingMontage( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertReformattingMontage( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteReformattingMontage( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetReformattingMontageCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetReformattingMontageIndex( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetReformattingMontage( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ IReformattingMontage **ppReformattingMontage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IRecordingMontage *pRecordingMontage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRecordingMontageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecordingMontage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecordingMontage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecordingMontage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecordingMontage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecordingMontage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecordingMontage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecordingMontage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMontageName )( 
            IRecordingMontage * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMontageName )( 
            IRecordingMontage * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelLabel )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelLabel )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelFormula )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelFormula )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelType )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ EChannelType eType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelType )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ EChannelType *peType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelUnits )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ EChannelUnits eUnits);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelUnits )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ EChannelUnits *peUnits);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelSampleFrequency )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ DOUBLE dFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelSampleFrequency )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ DOUBLE *pdFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelColor )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelColor )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ OLE_COLOR *poclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelCount )( 
            IRecordingMontage * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelIndex )( 
            IRecordingMontage * This,
            /* [in] */ BSTR bstrLabel,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBaseSampleFrequency )( 
            IRecordingMontage * This,
            /* [in] */ DOUBLE dFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBaseSampleFrequency )( 
            IRecordingMontage * This,
            /* [retval][out] */ DOUBLE *pdFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddChannel )( 
            IRecordingMontage * This,
            /* [in] */ BSTR bstrElectrode1Name,
            /* [in] */ BSTR bstrElectrode2Name,
            /* [in] */ EChannelType eType,
            /* [in] */ EChannelUnits eUnits,
            /* [in] */ DOUBLE dSampleFreq,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertChannel )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrElectrode1Name,
            /* [in] */ BSTR bstrElectrode2Name,
            /* [in] */ EChannelType eType,
            /* [in] */ EChannelUnits eUnits,
            /* [in] */ DOUBLE dSampleFreq,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteChannel )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelElectrode1Name )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelElectrode1Name )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelElectrode2Name )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelElectrode2Name )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddReformattingMontage )( 
            IRecordingMontage * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertReformattingMontage )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteReformattingMontage )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetReformattingMontageCount )( 
            IRecordingMontage * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetReformattingMontageIndex )( 
            IRecordingMontage * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetReformattingMontage )( 
            IRecordingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ IReformattingMontage **ppReformattingMontage);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IRecordingMontage * This,
            /* [in] */ IRecordingMontage *pRecordingMontage);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IRecordingMontage * This);
        
        END_INTERFACE
    } IRecordingMontageVtbl;

    interface IRecordingMontage
    {
        CONST_VTBL struct IRecordingMontageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecordingMontage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRecordingMontage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRecordingMontage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRecordingMontage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRecordingMontage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRecordingMontage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRecordingMontage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRecordingMontage_SetMontageName(This,bstrName)	\
    (This)->lpVtbl -> SetMontageName(This,bstrName)

#define IRecordingMontage_GetMontageName(This,pbstrName)	\
    (This)->lpVtbl -> GetMontageName(This,pbstrName)

#define IRecordingMontage_SetChannelLabel(This,iIndex,bstrLabel)	\
    (This)->lpVtbl -> SetChannelLabel(This,iIndex,bstrLabel)

#define IRecordingMontage_GetChannelLabel(This,iIndex,pbstrLabel)	\
    (This)->lpVtbl -> GetChannelLabel(This,iIndex,pbstrLabel)

#define IRecordingMontage_SetChannelFormula(This,iIndex,bstrFormula)	\
    (This)->lpVtbl -> SetChannelFormula(This,iIndex,bstrFormula)

#define IRecordingMontage_GetChannelFormula(This,iIndex,pbstrFormula)	\
    (This)->lpVtbl -> GetChannelFormula(This,iIndex,pbstrFormula)

#define IRecordingMontage_SetChannelType(This,iIndex,eType)	\
    (This)->lpVtbl -> SetChannelType(This,iIndex,eType)

#define IRecordingMontage_GetChannelType(This,iIndex,peType)	\
    (This)->lpVtbl -> GetChannelType(This,iIndex,peType)

#define IRecordingMontage_SetChannelUnits(This,iIndex,eUnits)	\
    (This)->lpVtbl -> SetChannelUnits(This,iIndex,eUnits)

#define IRecordingMontage_GetChannelUnits(This,iIndex,peUnits)	\
    (This)->lpVtbl -> GetChannelUnits(This,iIndex,peUnits)

#define IRecordingMontage_SetChannelSampleFrequency(This,iIndex,dFreq)	\
    (This)->lpVtbl -> SetChannelSampleFrequency(This,iIndex,dFreq)

#define IRecordingMontage_GetChannelSampleFrequency(This,iIndex,pdFreq)	\
    (This)->lpVtbl -> GetChannelSampleFrequency(This,iIndex,pdFreq)

#define IRecordingMontage_SetChannelColor(This,iIndex,oclrColor)	\
    (This)->lpVtbl -> SetChannelColor(This,iIndex,oclrColor)

#define IRecordingMontage_GetChannelColor(This,iIndex,poclrColor)	\
    (This)->lpVtbl -> GetChannelColor(This,iIndex,poclrColor)

#define IRecordingMontage_GetChannelCount(This,piCount)	\
    (This)->lpVtbl -> GetChannelCount(This,piCount)

#define IRecordingMontage_GetChannelIndex(This,bstrLabel,piIndex)	\
    (This)->lpVtbl -> GetChannelIndex(This,bstrLabel,piIndex)


#define IRecordingMontage_SetBaseSampleFrequency(This,dFreq)	\
    (This)->lpVtbl -> SetBaseSampleFrequency(This,dFreq)

#define IRecordingMontage_GetBaseSampleFrequency(This,pdFreq)	\
    (This)->lpVtbl -> GetBaseSampleFrequency(This,pdFreq)

#define IRecordingMontage_AddChannel(This,bstrElectrode1Name,bstrElectrode2Name,eType,eUnits,dSampleFreq,oclrColor)	\
    (This)->lpVtbl -> AddChannel(This,bstrElectrode1Name,bstrElectrode2Name,eType,eUnits,dSampleFreq,oclrColor)

#define IRecordingMontage_InsertChannel(This,iIndex,bstrElectrode1Name,bstrElectrode2Name,eType,eUnits,dSampleFreq,oclrColor)	\
    (This)->lpVtbl -> InsertChannel(This,iIndex,bstrElectrode1Name,bstrElectrode2Name,eType,eUnits,dSampleFreq,oclrColor)

#define IRecordingMontage_DeleteChannel(This,iIndex)	\
    (This)->lpVtbl -> DeleteChannel(This,iIndex)

#define IRecordingMontage_SetChannelElectrode1Name(This,iIndex,bstrName)	\
    (This)->lpVtbl -> SetChannelElectrode1Name(This,iIndex,bstrName)

#define IRecordingMontage_GetChannelElectrode1Name(This,iIndex,pbstrName)	\
    (This)->lpVtbl -> GetChannelElectrode1Name(This,iIndex,pbstrName)

#define IRecordingMontage_SetChannelElectrode2Name(This,iIndex,bstrName)	\
    (This)->lpVtbl -> SetChannelElectrode2Name(This,iIndex,bstrName)

#define IRecordingMontage_GetChannelElectrode2Name(This,iIndex,pbstrName)	\
    (This)->lpVtbl -> GetChannelElectrode2Name(This,iIndex,pbstrName)

#define IRecordingMontage_AddReformattingMontage(This,bstrName)	\
    (This)->lpVtbl -> AddReformattingMontage(This,bstrName)

#define IRecordingMontage_InsertReformattingMontage(This,iIndex,bstrName)	\
    (This)->lpVtbl -> InsertReformattingMontage(This,iIndex,bstrName)

#define IRecordingMontage_DeleteReformattingMontage(This,iIndex)	\
    (This)->lpVtbl -> DeleteReformattingMontage(This,iIndex)

#define IRecordingMontage_GetReformattingMontageCount(This,piCount)	\
    (This)->lpVtbl -> GetReformattingMontageCount(This,piCount)

#define IRecordingMontage_GetReformattingMontageIndex(This,bstrName,piIndex)	\
    (This)->lpVtbl -> GetReformattingMontageIndex(This,bstrName,piIndex)

#define IRecordingMontage_GetReformattingMontage(This,iIndex,ppReformattingMontage)	\
    (This)->lpVtbl -> GetReformattingMontage(This,iIndex,ppReformattingMontage)

#define IRecordingMontage_Init(This,pRecordingMontage)	\
    (This)->lpVtbl -> Init(This,pRecordingMontage)

#define IRecordingMontage_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_SetBaseSampleFrequency_Proxy( 
    IRecordingMontage * This,
    /* [in] */ DOUBLE dFreq);


void __RPC_STUB IRecordingMontage_SetBaseSampleFrequency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_GetBaseSampleFrequency_Proxy( 
    IRecordingMontage * This,
    /* [retval][out] */ DOUBLE *pdFreq);


void __RPC_STUB IRecordingMontage_GetBaseSampleFrequency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_AddChannel_Proxy( 
    IRecordingMontage * This,
    /* [in] */ BSTR bstrElectrode1Name,
    /* [in] */ BSTR bstrElectrode2Name,
    /* [in] */ EChannelType eType,
    /* [in] */ EChannelUnits eUnits,
    /* [in] */ DOUBLE dSampleFreq,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IRecordingMontage_AddChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_InsertChannel_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrElectrode1Name,
    /* [in] */ BSTR bstrElectrode2Name,
    /* [in] */ EChannelType eType,
    /* [in] */ EChannelUnits eUnits,
    /* [in] */ DOUBLE dSampleFreq,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IRecordingMontage_InsertChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_DeleteChannel_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex);


void __RPC_STUB IRecordingMontage_DeleteChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_SetChannelElectrode1Name_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IRecordingMontage_SetChannelElectrode1Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_GetChannelElectrode1Name_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IRecordingMontage_GetChannelElectrode1Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_SetChannelElectrode2Name_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IRecordingMontage_SetChannelElectrode2Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_GetChannelElectrode2Name_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IRecordingMontage_GetChannelElectrode2Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_AddReformattingMontage_Proxy( 
    IRecordingMontage * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IRecordingMontage_AddReformattingMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_InsertReformattingMontage_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IRecordingMontage_InsertReformattingMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_DeleteReformattingMontage_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex);


void __RPC_STUB IRecordingMontage_DeleteReformattingMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_GetReformattingMontageCount_Proxy( 
    IRecordingMontage * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IRecordingMontage_GetReformattingMontageCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_GetReformattingMontageIndex_Proxy( 
    IRecordingMontage * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB IRecordingMontage_GetReformattingMontageIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_GetReformattingMontage_Proxy( 
    IRecordingMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ IReformattingMontage **ppReformattingMontage);


void __RPC_STUB IRecordingMontage_GetReformattingMontage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_Init_Proxy( 
    IRecordingMontage * This,
    /* [in] */ IRecordingMontage *pRecordingMontage);


void __RPC_STUB IRecordingMontage_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRecordingMontage_Reset_Proxy( 
    IRecordingMontage * This);


void __RPC_STUB IRecordingMontage_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRecordingMontage_INTERFACE_DEFINED__ */


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


