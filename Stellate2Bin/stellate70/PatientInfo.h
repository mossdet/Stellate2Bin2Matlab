

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Tue May 18 13:58:50 2010
 */
/* Compiler settings for g:\Develop\Harm700\MLSample\ComSignalFile\SignalFile\PatientInfo.idl:
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

#ifndef __PatientInfo_h__
#define __PatientInfo_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPatientInfo_FWD_DEFINED__
#define __IPatientInfo_FWD_DEFINED__
typedef interface IPatientInfo IPatientInfo;
#endif 	/* __IPatientInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SignalFileDef.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IPatientInfo_INTERFACE_DEFINED__
#define __IPatientInfo_INTERFACE_DEFINED__

/* interface IPatientInfo */
/* [unique][nonextensible][dual][helpstring][version][uuid][object] */ 


EXTERN_C const IID IID_IPatientInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0CC726B-DD58-4762-BE43-AFCE5897C8B8")
    IPatientInfo : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetId1( 
            /* [in] */ BSTR bstrId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetId1( 
            /* [retval][out] */ BSTR *pbstrId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetId2( 
            /* [in] */ BSTR bstrId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetId2( 
            /* [retval][out] */ BSTR *pbstrId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetId3( 
            /* [in] */ BSTR bstrId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetId3( 
            /* [retval][out] */ BSTR *pbstrId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLastName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLastName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFirstName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFirstName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBirthDate( 
            /* [in] */ DATE dateBirth) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBirthDate( 
            /* [retval][out] */ DATE *pdateBirth) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSex( 
            /* [in] */ EPatientSex eSex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSex( 
            /* [retval][out] */ EPatientSex *peSex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetHeight( 
            /* [in] */ DOUBLE dHeight,
            /* [in] */ EMeasurementSystem eMeasurementSystem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHeight( 
            /* [in] */ EMeasurementSystem eMeasurementSystem,
            /* [retval][out] */ DOUBLE *pdHeight) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetWeight( 
            /* [in] */ DOUBLE dWeight,
            /* [in] */ EMeasurementSystem eMeasurementSystem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetWeight( 
            /* [in] */ EMeasurementSystem eMeasurementSystem,
            /* [retval][out] */ DOUBLE *pdWeight) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAddress( 
            /* [in] */ BSTR bstrAddress) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAddress( 
            /* [retval][out] */ BSTR *pbstrAddress) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetCity( 
            /* [in] */ BSTR bstrCity) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCity( 
            /* [retval][out] */ BSTR *pbstrCity) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetState( 
            /* [in] */ BSTR bstrState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetState( 
            /* [retval][out] */ BSTR *pbstrState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetZipCode( 
            /* [in] */ BSTR bstrZip) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetZipCode( 
            /* [retval][out] */ BSTR *pbstrZip) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetCountry( 
            /* [in] */ BSTR bstrCountry) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCountry( 
            /* [retval][out] */ BSTR *pbstrCountry) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetHomePhone( 
            /* [in] */ BSTR bstrPhone) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHomePhone( 
            /* [retval][out] */ BSTR *pbstrPhone) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetWorkPhone( 
            /* [in] */ BSTR bstrPhone) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetWorkPhone( 
            /* [retval][out] */ BSTR *pbstrPhone) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMobile( 
            /* [in] */ BSTR bstrMobile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMobile( 
            /* [retval][out] */ BSTR *pbstrMobile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetHomeEmail( 
            /* [in] */ BSTR bstrEmail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetHomeEmail( 
            /* [retval][out] */ BSTR *pbstrEmail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetWorkEmail( 
            /* [in] */ BSTR bstrEmail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetWorkEmail( 
            /* [retval][out] */ BSTR *pbstrEmail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetComments( 
            /* [in] */ BSTR bstrComments) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetComments( 
            /* [retval][out] */ BSTR *pbstrComments) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IPatientInfo *pPatientInfo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPatientInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPatientInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPatientInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPatientInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPatientInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPatientInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPatientInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPatientInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetId1 )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetId1 )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetId2 )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetId2 )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetId3 )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetId3 )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLastName )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLastName )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFirstName )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFirstName )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBirthDate )( 
            IPatientInfo * This,
            /* [in] */ DATE dateBirth);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBirthDate )( 
            IPatientInfo * This,
            /* [retval][out] */ DATE *pdateBirth);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSex )( 
            IPatientInfo * This,
            /* [in] */ EPatientSex eSex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSex )( 
            IPatientInfo * This,
            /* [retval][out] */ EPatientSex *peSex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetHeight )( 
            IPatientInfo * This,
            /* [in] */ DOUBLE dHeight,
            /* [in] */ EMeasurementSystem eMeasurementSystem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHeight )( 
            IPatientInfo * This,
            /* [in] */ EMeasurementSystem eMeasurementSystem,
            /* [retval][out] */ DOUBLE *pdHeight);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetWeight )( 
            IPatientInfo * This,
            /* [in] */ DOUBLE dWeight,
            /* [in] */ EMeasurementSystem eMeasurementSystem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetWeight )( 
            IPatientInfo * This,
            /* [in] */ EMeasurementSystem eMeasurementSystem,
            /* [retval][out] */ DOUBLE *pdWeight);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAddress )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrAddress);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAddress )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrAddress);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCity )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrCity);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCity )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrCity);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetState )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetZipCode )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrZip);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetZipCode )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrZip);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCountry )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrCountry);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCountry )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrCountry);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetHomePhone )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrPhone);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHomePhone )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrPhone);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetWorkPhone )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrPhone);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetWorkPhone )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrPhone);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMobile )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrMobile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMobile )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrMobile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetHomeEmail )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrEmail);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHomeEmail )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrEmail);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetWorkEmail )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrEmail);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetWorkEmail )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrEmail);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetComments )( 
            IPatientInfo * This,
            /* [in] */ BSTR bstrComments);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetComments )( 
            IPatientInfo * This,
            /* [retval][out] */ BSTR *pbstrComments);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IPatientInfo * This,
            /* [in] */ IPatientInfo *pPatientInfo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IPatientInfo * This);
        
        END_INTERFACE
    } IPatientInfoVtbl;

    interface IPatientInfo
    {
        CONST_VTBL struct IPatientInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPatientInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPatientInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPatientInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPatientInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPatientInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPatientInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPatientInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IPatientInfo_SetId1(This,bstrId)	\
    (This)->lpVtbl -> SetId1(This,bstrId)

#define IPatientInfo_GetId1(This,pbstrId)	\
    (This)->lpVtbl -> GetId1(This,pbstrId)

#define IPatientInfo_SetId2(This,bstrId)	\
    (This)->lpVtbl -> SetId2(This,bstrId)

#define IPatientInfo_GetId2(This,pbstrId)	\
    (This)->lpVtbl -> GetId2(This,pbstrId)

#define IPatientInfo_SetId3(This,bstrId)	\
    (This)->lpVtbl -> SetId3(This,bstrId)

#define IPatientInfo_GetId3(This,pbstrId)	\
    (This)->lpVtbl -> GetId3(This,pbstrId)

#define IPatientInfo_SetLastName(This,bstrName)	\
    (This)->lpVtbl -> SetLastName(This,bstrName)

#define IPatientInfo_GetLastName(This,pbstrName)	\
    (This)->lpVtbl -> GetLastName(This,pbstrName)

#define IPatientInfo_SetFirstName(This,bstrName)	\
    (This)->lpVtbl -> SetFirstName(This,bstrName)

#define IPatientInfo_GetFirstName(This,pbstrName)	\
    (This)->lpVtbl -> GetFirstName(This,pbstrName)

#define IPatientInfo_SetBirthDate(This,dateBirth)	\
    (This)->lpVtbl -> SetBirthDate(This,dateBirth)

#define IPatientInfo_GetBirthDate(This,pdateBirth)	\
    (This)->lpVtbl -> GetBirthDate(This,pdateBirth)

#define IPatientInfo_SetSex(This,eSex)	\
    (This)->lpVtbl -> SetSex(This,eSex)

#define IPatientInfo_GetSex(This,peSex)	\
    (This)->lpVtbl -> GetSex(This,peSex)

#define IPatientInfo_SetHeight(This,dHeight,eMeasurementSystem)	\
    (This)->lpVtbl -> SetHeight(This,dHeight,eMeasurementSystem)

#define IPatientInfo_GetHeight(This,eMeasurementSystem,pdHeight)	\
    (This)->lpVtbl -> GetHeight(This,eMeasurementSystem,pdHeight)

#define IPatientInfo_SetWeight(This,dWeight,eMeasurementSystem)	\
    (This)->lpVtbl -> SetWeight(This,dWeight,eMeasurementSystem)

#define IPatientInfo_GetWeight(This,eMeasurementSystem,pdWeight)	\
    (This)->lpVtbl -> GetWeight(This,eMeasurementSystem,pdWeight)

#define IPatientInfo_SetAddress(This,bstrAddress)	\
    (This)->lpVtbl -> SetAddress(This,bstrAddress)

#define IPatientInfo_GetAddress(This,pbstrAddress)	\
    (This)->lpVtbl -> GetAddress(This,pbstrAddress)

#define IPatientInfo_SetCity(This,bstrCity)	\
    (This)->lpVtbl -> SetCity(This,bstrCity)

#define IPatientInfo_GetCity(This,pbstrCity)	\
    (This)->lpVtbl -> GetCity(This,pbstrCity)

#define IPatientInfo_SetState(This,bstrState)	\
    (This)->lpVtbl -> SetState(This,bstrState)

#define IPatientInfo_GetState(This,pbstrState)	\
    (This)->lpVtbl -> GetState(This,pbstrState)

#define IPatientInfo_SetZipCode(This,bstrZip)	\
    (This)->lpVtbl -> SetZipCode(This,bstrZip)

#define IPatientInfo_GetZipCode(This,pbstrZip)	\
    (This)->lpVtbl -> GetZipCode(This,pbstrZip)

#define IPatientInfo_SetCountry(This,bstrCountry)	\
    (This)->lpVtbl -> SetCountry(This,bstrCountry)

#define IPatientInfo_GetCountry(This,pbstrCountry)	\
    (This)->lpVtbl -> GetCountry(This,pbstrCountry)

#define IPatientInfo_SetHomePhone(This,bstrPhone)	\
    (This)->lpVtbl -> SetHomePhone(This,bstrPhone)

#define IPatientInfo_GetHomePhone(This,pbstrPhone)	\
    (This)->lpVtbl -> GetHomePhone(This,pbstrPhone)

#define IPatientInfo_SetWorkPhone(This,bstrPhone)	\
    (This)->lpVtbl -> SetWorkPhone(This,bstrPhone)

#define IPatientInfo_GetWorkPhone(This,pbstrPhone)	\
    (This)->lpVtbl -> GetWorkPhone(This,pbstrPhone)

#define IPatientInfo_SetMobile(This,bstrMobile)	\
    (This)->lpVtbl -> SetMobile(This,bstrMobile)

#define IPatientInfo_GetMobile(This,pbstrMobile)	\
    (This)->lpVtbl -> GetMobile(This,pbstrMobile)

#define IPatientInfo_SetHomeEmail(This,bstrEmail)	\
    (This)->lpVtbl -> SetHomeEmail(This,bstrEmail)

#define IPatientInfo_GetHomeEmail(This,pbstrEmail)	\
    (This)->lpVtbl -> GetHomeEmail(This,pbstrEmail)

#define IPatientInfo_SetWorkEmail(This,bstrEmail)	\
    (This)->lpVtbl -> SetWorkEmail(This,bstrEmail)

#define IPatientInfo_GetWorkEmail(This,pbstrEmail)	\
    (This)->lpVtbl -> GetWorkEmail(This,pbstrEmail)

#define IPatientInfo_SetComments(This,bstrComments)	\
    (This)->lpVtbl -> SetComments(This,bstrComments)

#define IPatientInfo_GetComments(This,pbstrComments)	\
    (This)->lpVtbl -> GetComments(This,pbstrComments)

#define IPatientInfo_Init(This,pPatientInfo)	\
    (This)->lpVtbl -> Init(This,pPatientInfo)

#define IPatientInfo_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetId1_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrId);


void __RPC_STUB IPatientInfo_SetId1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetId1_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrId);


void __RPC_STUB IPatientInfo_GetId1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetId2_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrId);


void __RPC_STUB IPatientInfo_SetId2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetId2_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrId);


void __RPC_STUB IPatientInfo_GetId2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetId3_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrId);


void __RPC_STUB IPatientInfo_SetId3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetId3_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrId);


void __RPC_STUB IPatientInfo_GetId3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetLastName_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IPatientInfo_SetLastName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetLastName_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IPatientInfo_GetLastName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetFirstName_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IPatientInfo_SetFirstName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetFirstName_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IPatientInfo_GetFirstName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetBirthDate_Proxy( 
    IPatientInfo * This,
    /* [in] */ DATE dateBirth);


void __RPC_STUB IPatientInfo_SetBirthDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetBirthDate_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ DATE *pdateBirth);


void __RPC_STUB IPatientInfo_GetBirthDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetSex_Proxy( 
    IPatientInfo * This,
    /* [in] */ EPatientSex eSex);


void __RPC_STUB IPatientInfo_SetSex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetSex_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ EPatientSex *peSex);


void __RPC_STUB IPatientInfo_GetSex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetHeight_Proxy( 
    IPatientInfo * This,
    /* [in] */ DOUBLE dHeight,
    /* [in] */ EMeasurementSystem eMeasurementSystem);


void __RPC_STUB IPatientInfo_SetHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetHeight_Proxy( 
    IPatientInfo * This,
    /* [in] */ EMeasurementSystem eMeasurementSystem,
    /* [retval][out] */ DOUBLE *pdHeight);


void __RPC_STUB IPatientInfo_GetHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetWeight_Proxy( 
    IPatientInfo * This,
    /* [in] */ DOUBLE dWeight,
    /* [in] */ EMeasurementSystem eMeasurementSystem);


void __RPC_STUB IPatientInfo_SetWeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetWeight_Proxy( 
    IPatientInfo * This,
    /* [in] */ EMeasurementSystem eMeasurementSystem,
    /* [retval][out] */ DOUBLE *pdWeight);


void __RPC_STUB IPatientInfo_GetWeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetAddress_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrAddress);


void __RPC_STUB IPatientInfo_SetAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetAddress_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrAddress);


void __RPC_STUB IPatientInfo_GetAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetCity_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrCity);


void __RPC_STUB IPatientInfo_SetCity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetCity_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrCity);


void __RPC_STUB IPatientInfo_GetCity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetState_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrState);


void __RPC_STUB IPatientInfo_SetState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetState_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrState);


void __RPC_STUB IPatientInfo_GetState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetZipCode_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrZip);


void __RPC_STUB IPatientInfo_SetZipCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetZipCode_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrZip);


void __RPC_STUB IPatientInfo_GetZipCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetCountry_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrCountry);


void __RPC_STUB IPatientInfo_SetCountry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetCountry_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrCountry);


void __RPC_STUB IPatientInfo_GetCountry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetHomePhone_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrPhone);


void __RPC_STUB IPatientInfo_SetHomePhone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetHomePhone_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrPhone);


void __RPC_STUB IPatientInfo_GetHomePhone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetWorkPhone_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrPhone);


void __RPC_STUB IPatientInfo_SetWorkPhone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetWorkPhone_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrPhone);


void __RPC_STUB IPatientInfo_GetWorkPhone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetMobile_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrMobile);


void __RPC_STUB IPatientInfo_SetMobile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetMobile_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrMobile);


void __RPC_STUB IPatientInfo_GetMobile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetHomeEmail_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrEmail);


void __RPC_STUB IPatientInfo_SetHomeEmail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetHomeEmail_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrEmail);


void __RPC_STUB IPatientInfo_GetHomeEmail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetWorkEmail_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrEmail);


void __RPC_STUB IPatientInfo_SetWorkEmail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetWorkEmail_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrEmail);


void __RPC_STUB IPatientInfo_GetWorkEmail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_SetComments_Proxy( 
    IPatientInfo * This,
    /* [in] */ BSTR bstrComments);


void __RPC_STUB IPatientInfo_SetComments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_GetComments_Proxy( 
    IPatientInfo * This,
    /* [retval][out] */ BSTR *pbstrComments);


void __RPC_STUB IPatientInfo_GetComments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_Init_Proxy( 
    IPatientInfo * This,
    /* [in] */ IPatientInfo *pPatientInfo);


void __RPC_STUB IPatientInfo_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IPatientInfo_Reset_Proxy( 
    IPatientInfo * This);


void __RPC_STUB IPatientInfo_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPatientInfo_INTERFACE_DEFINED__ */


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


