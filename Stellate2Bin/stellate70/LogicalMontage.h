

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:54 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\LogicalMontage.idl:
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

#ifndef __LogicalMontage_h__
#define __LogicalMontage_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ILogicalMontage_FWD_DEFINED__
#define __ILogicalMontage_FWD_DEFINED__
typedef interface ILogicalMontage ILogicalMontage;
#endif 	/* __ILogicalMontage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ILogicalMontage_INTERFACE_DEFINED__
#define __ILogicalMontage_INTERFACE_DEFINED__

/* interface ILogicalMontage */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_ILogicalMontage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B65FEC8-E4C8-11D1-BB8F-00001B4E6868")
    ILogicalMontage : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMontageName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMontageName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelLabel( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelLabel( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrLabel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelFormula( 
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrFormula) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelFormula( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrFormula) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelType( 
            /* [in] */ INT iIndex,
            /* [in] */ EChannelType eType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelType( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ EChannelType *peType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelUnits( 
            /* [in] */ INT iIndex,
            /* [in] */ EChannelUnits eUnits) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelUnits( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ EChannelUnits *peUnits) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelSampleFrequency( 
            /* [in] */ INT iIndex,
            /* [in] */ DOUBLE dFreq) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelSampleFrequency( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ DOUBLE *pdFreq) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetChannelColor( 
            /* [in] */ INT iIndex,
            /* [in] */ OLE_COLOR oclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelColor( 
            /* [in] */ INT iIndex,
            /* [retval][out] */ OLE_COLOR *poclrColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelCount( 
            /* [retval][out] */ INT *piCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChannelIndex( 
            /* [in] */ BSTR bstrLabel,
            /* [retval][out] */ INT *piIndex) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILogicalMontageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILogicalMontage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILogicalMontage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILogicalMontage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILogicalMontage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILogicalMontage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILogicalMontage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILogicalMontage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMontageName )( 
            ILogicalMontage * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMontageName )( 
            ILogicalMontage * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelLabel )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelLabel )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelFormula )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ BSTR bstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelFormula )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ BSTR *pbstrFormula);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelType )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ EChannelType eType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelType )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ EChannelType *peType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelUnits )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ EChannelUnits eUnits);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelUnits )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ EChannelUnits *peUnits);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelSampleFrequency )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ DOUBLE dFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelSampleFrequency )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ DOUBLE *pdFreq);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetChannelColor )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [in] */ OLE_COLOR oclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelColor )( 
            ILogicalMontage * This,
            /* [in] */ INT iIndex,
            /* [retval][out] */ OLE_COLOR *poclrColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelCount )( 
            ILogicalMontage * This,
            /* [retval][out] */ INT *piCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChannelIndex )( 
            ILogicalMontage * This,
            /* [in] */ BSTR bstrLabel,
            /* [retval][out] */ INT *piIndex);
        
        END_INTERFACE
    } ILogicalMontageVtbl;

    interface ILogicalMontage
    {
        CONST_VTBL struct ILogicalMontageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILogicalMontage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILogicalMontage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILogicalMontage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILogicalMontage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ILogicalMontage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ILogicalMontage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ILogicalMontage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ILogicalMontage_SetMontageName(This,bstrName)	\
    (This)->lpVtbl -> SetMontageName(This,bstrName)

#define ILogicalMontage_GetMontageName(This,pbstrName)	\
    (This)->lpVtbl -> GetMontageName(This,pbstrName)

#define ILogicalMontage_SetChannelLabel(This,iIndex,bstrLabel)	\
    (This)->lpVtbl -> SetChannelLabel(This,iIndex,bstrLabel)

#define ILogicalMontage_GetChannelLabel(This,iIndex,pbstrLabel)	\
    (This)->lpVtbl -> GetChannelLabel(This,iIndex,pbstrLabel)

#define ILogicalMontage_SetChannelFormula(This,iIndex,bstrFormula)	\
    (This)->lpVtbl -> SetChannelFormula(This,iIndex,bstrFormula)

#define ILogicalMontage_GetChannelFormula(This,iIndex,pbstrFormula)	\
    (This)->lpVtbl -> GetChannelFormula(This,iIndex,pbstrFormula)

#define ILogicalMontage_SetChannelType(This,iIndex,eType)	\
    (This)->lpVtbl -> SetChannelType(This,iIndex,eType)

#define ILogicalMontage_GetChannelType(This,iIndex,peType)	\
    (This)->lpVtbl -> GetChannelType(This,iIndex,peType)

#define ILogicalMontage_SetChannelUnits(This,iIndex,eUnits)	\
    (This)->lpVtbl -> SetChannelUnits(This,iIndex,eUnits)

#define ILogicalMontage_GetChannelUnits(This,iIndex,peUnits)	\
    (This)->lpVtbl -> GetChannelUnits(This,iIndex,peUnits)

#define ILogicalMontage_SetChannelSampleFrequency(This,iIndex,dFreq)	\
    (This)->lpVtbl -> SetChannelSampleFrequency(This,iIndex,dFreq)

#define ILogicalMontage_GetChannelSampleFrequency(This,iIndex,pdFreq)	\
    (This)->lpVtbl -> GetChannelSampleFrequency(This,iIndex,pdFreq)

#define ILogicalMontage_SetChannelColor(This,iIndex,oclrColor)	\
    (This)->lpVtbl -> SetChannelColor(This,iIndex,oclrColor)

#define ILogicalMontage_GetChannelColor(This,iIndex,poclrColor)	\
    (This)->lpVtbl -> GetChannelColor(This,iIndex,poclrColor)

#define ILogicalMontage_GetChannelCount(This,piCount)	\
    (This)->lpVtbl -> GetChannelCount(This,piCount)

#define ILogicalMontage_GetChannelIndex(This,bstrLabel,piIndex)	\
    (This)->lpVtbl -> GetChannelIndex(This,bstrLabel,piIndex)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_SetMontageName_Proxy( 
    ILogicalMontage * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB ILogicalMontage_SetMontageName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetMontageName_Proxy( 
    ILogicalMontage * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB ILogicalMontage_GetMontageName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_SetChannelLabel_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrLabel);


void __RPC_STUB ILogicalMontage_SetChannelLabel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetChannelLabel_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrLabel);


void __RPC_STUB ILogicalMontage_GetChannelLabel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_SetChannelFormula_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ BSTR bstrFormula);


void __RPC_STUB ILogicalMontage_SetChannelFormula_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetChannelFormula_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ BSTR *pbstrFormula);


void __RPC_STUB ILogicalMontage_GetChannelFormula_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_SetChannelType_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ EChannelType eType);


void __RPC_STUB ILogicalMontage_SetChannelType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetChannelType_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ EChannelType *peType);


void __RPC_STUB ILogicalMontage_GetChannelType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_SetChannelUnits_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ EChannelUnits eUnits);


void __RPC_STUB ILogicalMontage_SetChannelUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetChannelUnits_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ EChannelUnits *peUnits);


void __RPC_STUB ILogicalMontage_GetChannelUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_SetChannelSampleFrequency_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ DOUBLE dFreq);


void __RPC_STUB ILogicalMontage_SetChannelSampleFrequency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetChannelSampleFrequency_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ DOUBLE *pdFreq);


void __RPC_STUB ILogicalMontage_GetChannelSampleFrequency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_SetChannelColor_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [in] */ OLE_COLOR oclrColor);


void __RPC_STUB ILogicalMontage_SetChannelColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetChannelColor_Proxy( 
    ILogicalMontage * This,
    /* [in] */ INT iIndex,
    /* [retval][out] */ OLE_COLOR *poclrColor);


void __RPC_STUB ILogicalMontage_GetChannelColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetChannelCount_Proxy( 
    ILogicalMontage * This,
    /* [retval][out] */ INT *piCount);


void __RPC_STUB ILogicalMontage_GetChannelCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ILogicalMontage_GetChannelIndex_Proxy( 
    ILogicalMontage * This,
    /* [in] */ BSTR bstrLabel,
    /* [retval][out] */ INT *piIndex);


void __RPC_STUB ILogicalMontage_GetChannelIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILogicalMontage_INTERFACE_DEFINED__ */


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


