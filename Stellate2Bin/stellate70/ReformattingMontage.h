

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:33 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\ReformattingMontage.idl:
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

#ifndef __ReformattingMontage_h__
#define __ReformattingMontage_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IReformattingMontage_FWD_DEFINED__
#define __IReformattingMontage_FWD_DEFINED__
typedef interface IReformattingMontage IReformattingMontage;
#endif 	/* __IReformattingMontage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"
#include "LogicalMontage.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IReformattingMontage_INTERFACE_DEFINED__
#define __IReformattingMontage_INTERFACE_DEFINED__

/* interface IReformattingMontage */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IReformattingMontage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B65FECC-E4C8-11D1-BB8F-00001B4E6868")
    IReformattingMontage : public ILogicalMontage
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddChannel( 
            /* [in] */ BSTR bstrLabel,
            /* [in] */ BSTR bstrFormula,
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertChannel( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel,
            /* [in] */ BSTR bstrFormula,
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteChannel( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddMacro( 
            /* [in] */ BSTR bstrLabel,
            /* [in] */ BSTR bstrFormula) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertMacro( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel,
            /* [in] */ BSTR bstrFormula) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteMacro( 
            /* [in] */ INT iIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMacroCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMacroIndex( 
            /* [in] */ BSTR bstrLabel,
            /* [retval][out] */ INT *piIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMacroLabel( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMacroLabel( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrLabel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMacroFormula( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrFormula) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMacroFormula( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrFormula) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IReformattingMontage *pReformattingMontage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IReformattingMontageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReformattingMontage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReformattingMontage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReformattingMontage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReformattingMontage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReformattingMontage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReformattingMontage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReformattingMontage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMontageName )( 
            IReformattingMontage * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMontageName )( 
            IReformattingMontage * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelLabel )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelLabel )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelFormula )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelFormula )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelType )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ EChannelType eType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelType )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ EChannelType *peType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelUnits )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ EChannelUnits eUnits);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelUnits )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ EChannelUnits *peUnits);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelSampleFrequency )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ DOUBLE dFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelSampleFrequency )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ DOUBLE *pdFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelColor )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelColor )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ OLE_COLOR *poclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelCount )( 
            IReformattingMontage * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelIndex )( 
            IReformattingMontage * This,
            /* [in] */ BSTR bstrLabel,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddChannel )( 
            IReformattingMontage * This,
            /* [in] */ BSTR bstrLabel,
            /* [in] */ BSTR bstrFormula,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertChannel )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel,
            /* [in] */ BSTR bstrFormula,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteChannel )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddMacro )( 
            IReformattingMontage * This,
            /* [in] */ BSTR bstrLabel,
            /* [in] */ BSTR bstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertMacro )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel,
            /* [in] */ BSTR bstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteMacro )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMacroCount )( 
            IReformattingMontage * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMacroIndex )( 
            IReformattingMontage * This,
            /* [in] */ BSTR bstrLabel,
            /* [retval][out] */ INT *piIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMacroLabel )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMacroLabel )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMacroFormula )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMacroFormula )( 
            IReformattingMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IReformattingMontage * This,
            /* [in] */ IReformattingMontage *pReformattingMontage);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IReformattingMontage * This);
        
        END_INTERFACE
    } IReformattingMontageVtbl;

    interface IReformattingMontage
    {
        CONST_VTBL struct IReformattingMontageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReformattingMontage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IReformattingMontage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IReformattingMontage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IReformattingMontage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IReformattingMontage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IReformattingMontage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IReformattingMontage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IReformattingMontage_SetMontageName(This,bstrName)	\
    (This)->lpVtbl -> SetMontageName(This,bstrName)

#define IReformattingMontage_GetMontageName(This,pbstrName)	\
    (This)->lpVtbl -> GetMontageName(This,pbstrName)

#define IReformattingMontage_SetChannelLabel(This,iIndex,bstrLabel)	\
    (This)->lpVtbl -> SetChannelLabel(This,iIndex,bstrLabel)

#define IReformattingMontage_GetChannelLabel(This,iIndex,pbstrLabel)	\
    (This)->lpVtbl -> GetChannelLabel(This,iIndex,pbstrLabel)

#define IReformattingMontage_SetChannelFormula(This,iIndex,bstrFormula)	\
    (This)->lpVtbl -> SetChannelFormula(This,iIndex,bstrFormula)

#define IReformattingMontage_GetChannelFormula(This,iIndex,pbstrFormula)	\
    (This)->lpVtbl -> GetChannelFormula(This,iIndex,pbstrFormula)

#define IReformattingMontage_SetChannelType(This,iIndex,eType)	\
    (This)->lpVtbl -> SetChannelType(This,iIndex,eType)

#define IReformattingMontage_GetChannelType(This,iIndex,peType)	\
    (This)->lpVtbl -> GetChannelType(This,iIndex,peType)

#define IReformattingMontage_SetChannelUnits(This,iIndex,eUnits)	\
    (This)->lpVtbl -> SetChannelUnits(This,iIndex,eUnits)

#define IReformattingMontage_GetChannelUnits(This,iIndex,peUnits)	\
    (This)->lpVtbl -> GetChannelUnits(This,iIndex,peUnits)

#define IReformattingMontage_SetChannelSampleFrequency(This,iIndex,dFreq)	\
    (This)->lpVtbl -> SetChannelSampleFrequency(This,iIndex,dFreq)

#define IReformattingMontage_GetChannelSampleFrequency(This,iIndex,pdFreq)	\
    (This)->lpVtbl -> GetChannelSampleFrequency(This,iIndex,pdFreq)

#define IReformattingMontage_SetChannelColor(This,iIndex,oclrColor)	\
    (This)->lpVtbl -> SetChannelColor(This,iIndex,oclrColor)

#define IReformattingMontage_GetChannelColor(This,iIndex,poclrColor)	\
    (This)->lpVtbl -> GetChannelColor(This,iIndex,poclrColor)

#define IReformattingMontage_GetChannelCount(This,piCount)	\
    (This)->lpVtbl -> GetChannelCount(This,piCount)

#define IReformattingMontage_GetChannelIndex(This,bstrLabel,piIndex)	\
    (This)->lpVtbl -> GetChannelIndex(This,bstrLabel,piIndex)


#define IReformattingMontage_AddChannel(This,bstrLabel,bstrFormula,oclrColor)	\
    (This)->lpVtbl -> AddChannel(This,bstrLabel,bstrFormula,oclrColor)

#define IReformattingMontage_InsertChannel(This,iIndex,bstrLabel,bstrFormula,oclrColor)	\
    (This)->lpVtbl -> InsertChannel(This,iIndex,bstrLabel,bstrFormula,oclrColor)

#define IReformattingMontage_DeleteChannel(This,iIndex)	\
    (This)->lpVtbl -> DeleteChannel(This,iIndex)

#define IReformattingMontage_AddMacro(This,bstrLabel,bstrFormula)	\
    (This)->lpVtbl -> AddMacro(This,bstrLabel,bstrFormula)

#define IReformattingMontage_InsertMacro(This,iIndex,bstrLabel,bstrFormula)	\
    (This)->lpVtbl -> InsertMacro(This,iIndex,bstrLabel,bstrFormula)

#define IReformattingMontage_DeleteMacro(This,iIndex)	\
    (This)->lpVtbl -> DeleteMacro(This,iIndex)

#define IReformattingMontage_GetMacroCount(This,piCount)	\
    (This)->lpVtbl -> GetMacroCount(This,piCount)

#define IReformattingMontage_GetMacroIndex(This,bstrLabel,piIndex)	\
    (This)->lpVtbl -> GetMacroIndex(This,bstrLabel,piIndex)

#define IReformattingMontage_SetMacroLabel(This,iIndex,bstrLabel)	\
    (This)->lpVtbl -> SetMacroLabel(This,iIndex,bstrLabel)

#define IReformattingMontage_GetMacroLabel(This,iIndex,pbstrLabel)	\
    (This)->lpVtbl -> GetMacroLabel(This,iIndex,pbstrLabel)

#define IReformattingMontage_SetMacroFormula(This,iIndex,bstrFormula)	\
    (This)->lpVtbl -> SetMacroFormula(This,iIndex,bstrFormula)

#define IReformattingMontage_GetMacroFormula(This,iIndex,pbstrFormula)	\
    (This)->lpVtbl -> GetMacroFormula(This,iIndex,pbstrFormula)

#define IReformattingMontage_Init(This,pReformattingMontage)	\
    (This)->lpVtbl -> Init(This,pReformattingMontage)

#define IReformattingMontage_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_AddChannel_Proxy( 
    IReformattingMontage * This,
    /* [in] */ BSTR bstrLabel,
    /* [in] */ BSTR bstrFormula,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IReformattingMontage_AddChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_InsertChannel_Proxy( 
    IReformattingMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrLabel,
    /* [in] */ BSTR bstrFormula,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB IReformattingMontage_InsertChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_DeleteChannel_Proxy( 
    IReformattingMontage * This,
    /* [in] */ INT iIndex);


void __RPC_STUB IReformattingMontage_DeleteChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_AddMacro_Proxy( 
    IReformattingMontage * This,
    /* [in] */ BSTR bstrLabel,
    /* [in] */ BSTR bstrFormula);


void __RPC_STUB IReformattingMontage_AddMacro_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_InsertMacro_Proxy( 
    IReformattingMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrLabel,
    /* [in] */ BSTR bstrFormula);


void __RPC_STUB IReformattingMontage_InsertMacro_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_DeleteMacro_Proxy( 
    IReformattingMontage * This,
    /* [in] */ INT iIndex);


void __RPC_STUB IReformattingMontage_DeleteMacro_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_GetMacroCount_Proxy( 
    IReformattingMontage * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB IReformattingMontage_GetMacroCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_GetMacroIndex_Proxy( 
    IReformattingMontage * This,
    /* [in] */ BSTR bstrLabel,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB IReformattingMontage_GetMacroIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_SetMacroLabel_Proxy( 
    IReformattingMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrLabel);


void __RPC_STUB IReformattingMontage_SetMacroLabel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_GetMacroLabel_Proxy( 
    IReformattingMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrLabel);


void __RPC_STUB IReformattingMontage_GetMacroLabel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_SetMacroFormula_Proxy( 
    IReformattingMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrFormula);


void __RPC_STUB IReformattingMontage_SetMacroFormula_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_GetMacroFormula_Proxy( 
    IReformattingMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrFormula);


void __RPC_STUB IReformattingMontage_GetMacroFormula_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_Init_Proxy( 
    IReformattingMontage * This,
    /* [in] */ IReformattingMontage *pReformattingMontage);


void __RPC_STUB IReformattingMontage_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IReformattingMontage_Reset_Proxy( 
    IReformattingMontage * This);


void __RPC_STUB IReformattingMontage_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IReformattingMontage_INTERFACE_DEFINED__ */


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


