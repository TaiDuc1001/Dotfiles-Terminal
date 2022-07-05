/*** Autogenerated by WIDL 7.0 from include/fusion.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __fusion_h__
#define __fusion_h__

/* Forward declarations */

#ifndef __IAssemblyCache_FWD_DEFINED__
#define __IAssemblyCache_FWD_DEFINED__
typedef interface IAssemblyCache IAssemblyCache;
#ifdef __cplusplus
interface IAssemblyCache;
#endif /* __cplusplus */
#endif

#ifndef __IAssemblyCacheItem_FWD_DEFINED__
#define __IAssemblyCacheItem_FWD_DEFINED__
typedef interface IAssemblyCacheItem IAssemblyCacheItem;
#ifdef __cplusplus
interface IAssemblyCacheItem;
#endif /* __cplusplus */
#endif

#ifndef __IAssemblyName_FWD_DEFINED__
#define __IAssemblyName_FWD_DEFINED__
typedef interface IAssemblyName IAssemblyName;
#ifdef __cplusplus
interface IAssemblyName;
#endif /* __cplusplus */
#endif

#ifndef __IAssemblyEnum_FWD_DEFINED__
#define __IAssemblyEnum_FWD_DEFINED__
typedef interface IAssemblyEnum IAssemblyEnum;
#ifdef __cplusplus
interface IAssemblyEnum;
#endif /* __cplusplus */
#endif

#ifndef __IInstallReferenceItem_FWD_DEFINED__
#define __IInstallReferenceItem_FWD_DEFINED__
typedef interface IInstallReferenceItem IInstallReferenceItem;
#ifdef __cplusplus
interface IInstallReferenceItem;
#endif /* __cplusplus */
#endif

#ifndef __IInstallReferenceEnum_FWD_DEFINED__
#define __IInstallReferenceEnum_FWD_DEFINED__
typedef interface IInstallReferenceEnum IInstallReferenceEnum;
#ifdef __cplusplus
interface IInstallReferenceEnum;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IAssemblyCache_FWD_DEFINED__
#define __IAssemblyCache_FWD_DEFINED__
typedef interface IAssemblyCache IAssemblyCache;
#ifdef __cplusplus
interface IAssemblyCache;
#endif /* __cplusplus */
#endif

#ifndef __IAssemblyCacheItem_FWD_DEFINED__
#define __IAssemblyCacheItem_FWD_DEFINED__
typedef interface IAssemblyCacheItem IAssemblyCacheItem;
#ifdef __cplusplus
interface IAssemblyCacheItem;
#endif /* __cplusplus */
#endif

#ifndef __IAssemblyEnum_FWD_DEFINED__
#define __IAssemblyEnum_FWD_DEFINED__
typedef interface IAssemblyEnum IAssemblyEnum;
#ifdef __cplusplus
interface IAssemblyEnum;
#endif /* __cplusplus */
#endif

#ifndef __IAssemblyName_FWD_DEFINED__
#define __IAssemblyName_FWD_DEFINED__
typedef interface IAssemblyName IAssemblyName;
#ifdef __cplusplus
interface IAssemblyName;
#endif /* __cplusplus */
#endif

typedef enum __WIDL_fusion_generated_name_0000000E {
    ASM_CACHE_ZAP = 0x1,
    ASM_CACHE_GAC = 0x2,
    ASM_CACHE_DOWNLOAD = 0x4,
    ASM_CACHE_ROOT = 0x8,
    ASM_CACHE_ROOT_EX = 0x80
} ASM_CACHE_FLAGS;
typedef enum __WIDL_fusion_generated_name_0000000F {
    peNone = 0x0,
    peMSIL = 0x1,
    peI386 = 0x2,
    peIA64 = 0x3,
    peAMD64 = 0x4,
    peARM = 0x5,
    peInvalid = 0xffffffff
} PEKIND;
typedef enum _tagAssemblyComparisonResult {
    ACR_Unknown = 0,
    ACR_EquivalentFullMatch = 1,
    ACR_EquivalentWeakNamed = 2,
    ACR_EquivalentFXUnified = 3,
    ACR_EquivalentUnified = 4,
    ACR_NonEquivalentVersion = 5,
    ACR_NonEquivalent = 6,
    ACR_EquivalentPartialMatch = 7,
    ACR_EquivalentPartialWeakNamed = 8,
    ACR_EquivalentPartialUnified = 9,
    ACR_EquivalentPartialFXUnified = 10,
    ACR_NonEquivalentPartialVersion = 11
} AssemblyComparisonResult;
/*****************************************************************************
 * IAssemblyCache interface
 */
#ifndef __IAssemblyCache_INTERFACE_DEFINED__
#define __IAssemblyCache_INTERFACE_DEFINED__

typedef struct _FUSION_INSTALL_REFERENCE_ {
    DWORD cbSize;
    DWORD dwFlags;
    GUID guidScheme;
    LPCWSTR szIdentifier;
    LPCWSTR szNonCannonicalData;
} FUSION_INSTALL_REFERENCE;
typedef struct _FUSION_INSTALL_REFERENCE_ *LPFUSION_INSTALL_REFERENCE;
typedef const FUSION_INSTALL_REFERENCE *LPCFUSION_INSTALL_REFERENCE;
typedef struct _ASSEMBLY_INFO {
    ULONG cbAssemblyInfo;
    DWORD dwAssemblyFlags;
    ULARGE_INTEGER uliAssemblySizeInKB;
    LPWSTR pszCurrentAssemblyPathBuf;
    ULONG cchBuf;
} ASSEMBLY_INFO;
#define IASSEMBLYCACHE_INSTALL_FLAG_REFRESH       0x00000001
#define IASSEMBLYCACHE_INSTALL_FLAG_FORCE_REFRESH 0x00000002
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_UNINSTALLED 1
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_STILL_IN_USE 2
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_ALREADY_UNINSTALLED 3
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_DELETE_PENDING 4
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_HAS_INSTALL_REFERENCES 5
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_REFERENCE_NOT_FOUND 6
#define QUERYASMINFO_FLAG_VALIDATE   0x00000001
#define QUERYASMINFO_FLAG_GETSIZE    0x00000002
#define ASSEMBLYINFO_FLAG_INSTALLED       0x00000001
#define ASSEMBLYINFO_FLAG_PAYLOADRESIDENT 0x00000002
DEFINE_GUID(IID_IAssemblyCache, 0xe707dcde, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e707dcde-d1cd-11d2-bab9-00c04f8eceae")
IAssemblyCache : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE UninstallAssembly(
        DWORD dwFlags,
        LPCWSTR pszAssemblyName,
        LPCFUSION_INSTALL_REFERENCE pRefData,
        ULONG *pulDisposition) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryAssemblyInfo(
        DWORD dwFlags,
        LPCWSTR pszAssemblyName,
        ASSEMBLY_INFO *pAsmInfo) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateAssemblyCacheItem(
        DWORD dwFlags,
        PVOID pvReserved,
        IAssemblyCacheItem **ppAsmItem,
        LPCWSTR pszAssemblyName) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateAssemblyScavenger(
        IUnknown **ppUnkReserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE InstallAssembly(
        DWORD dwFlags,
        LPCWSTR pszManifestFilePath,
        LPCFUSION_INSTALL_REFERENCE pRefData) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyCache, 0xe707dcde, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae)
#endif
#else
typedef struct IAssemblyCacheVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyCache *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyCache *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyCache *This);

    /*** IAssemblyCache methods ***/
    HRESULT (STDMETHODCALLTYPE *UninstallAssembly)(
        IAssemblyCache *This,
        DWORD dwFlags,
        LPCWSTR pszAssemblyName,
        LPCFUSION_INSTALL_REFERENCE pRefData,
        ULONG *pulDisposition);

    HRESULT (STDMETHODCALLTYPE *QueryAssemblyInfo)(
        IAssemblyCache *This,
        DWORD dwFlags,
        LPCWSTR pszAssemblyName,
        ASSEMBLY_INFO *pAsmInfo);

    HRESULT (STDMETHODCALLTYPE *CreateAssemblyCacheItem)(
        IAssemblyCache *This,
        DWORD dwFlags,
        PVOID pvReserved,
        IAssemblyCacheItem **ppAsmItem,
        LPCWSTR pszAssemblyName);

    HRESULT (STDMETHODCALLTYPE *CreateAssemblyScavenger)(
        IAssemblyCache *This,
        IUnknown **ppUnkReserved);

    HRESULT (STDMETHODCALLTYPE *InstallAssembly)(
        IAssemblyCache *This,
        DWORD dwFlags,
        LPCWSTR pszManifestFilePath,
        LPCFUSION_INSTALL_REFERENCE pRefData);

    END_INTERFACE
} IAssemblyCacheVtbl;

interface IAssemblyCache {
    CONST_VTBL IAssemblyCacheVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAssemblyCache_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyCache_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyCache_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyCache methods ***/
#define IAssemblyCache_UninstallAssembly(This,dwFlags,pszAssemblyName,pRefData,pulDisposition) (This)->lpVtbl->UninstallAssembly(This,dwFlags,pszAssemblyName,pRefData,pulDisposition)
#define IAssemblyCache_QueryAssemblyInfo(This,dwFlags,pszAssemblyName,pAsmInfo) (This)->lpVtbl->QueryAssemblyInfo(This,dwFlags,pszAssemblyName,pAsmInfo)
#define IAssemblyCache_CreateAssemblyCacheItem(This,dwFlags,pvReserved,ppAsmItem,pszAssemblyName) (This)->lpVtbl->CreateAssemblyCacheItem(This,dwFlags,pvReserved,ppAsmItem,pszAssemblyName)
#define IAssemblyCache_CreateAssemblyScavenger(This,ppUnkReserved) (This)->lpVtbl->CreateAssemblyScavenger(This,ppUnkReserved)
#define IAssemblyCache_InstallAssembly(This,dwFlags,pszManifestFilePath,pRefData) (This)->lpVtbl->InstallAssembly(This,dwFlags,pszManifestFilePath,pRefData)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAssemblyCache_QueryInterface(IAssemblyCache* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAssemblyCache_AddRef(IAssemblyCache* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAssemblyCache_Release(IAssemblyCache* This) {
    return This->lpVtbl->Release(This);
}
/*** IAssemblyCache methods ***/
static FORCEINLINE HRESULT IAssemblyCache_UninstallAssembly(IAssemblyCache* This,DWORD dwFlags,LPCWSTR pszAssemblyName,LPCFUSION_INSTALL_REFERENCE pRefData,ULONG *pulDisposition) {
    return This->lpVtbl->UninstallAssembly(This,dwFlags,pszAssemblyName,pRefData,pulDisposition);
}
static FORCEINLINE HRESULT IAssemblyCache_QueryAssemblyInfo(IAssemblyCache* This,DWORD dwFlags,LPCWSTR pszAssemblyName,ASSEMBLY_INFO *pAsmInfo) {
    return This->lpVtbl->QueryAssemblyInfo(This,dwFlags,pszAssemblyName,pAsmInfo);
}
static FORCEINLINE HRESULT IAssemblyCache_CreateAssemblyCacheItem(IAssemblyCache* This,DWORD dwFlags,PVOID pvReserved,IAssemblyCacheItem **ppAsmItem,LPCWSTR pszAssemblyName) {
    return This->lpVtbl->CreateAssemblyCacheItem(This,dwFlags,pvReserved,ppAsmItem,pszAssemblyName);
}
static FORCEINLINE HRESULT IAssemblyCache_CreateAssemblyScavenger(IAssemblyCache* This,IUnknown **ppUnkReserved) {
    return This->lpVtbl->CreateAssemblyScavenger(This,ppUnkReserved);
}
static FORCEINLINE HRESULT IAssemblyCache_InstallAssembly(IAssemblyCache* This,DWORD dwFlags,LPCWSTR pszManifestFilePath,LPCFUSION_INSTALL_REFERENCE pRefData) {
    return This->lpVtbl->InstallAssembly(This,dwFlags,pszManifestFilePath,pRefData);
}
#endif
#endif

#endif


#endif  /* __IAssemblyCache_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAssemblyCacheItem interface
 */
#ifndef __IAssemblyCacheItem_INTERFACE_DEFINED__
#define __IAssemblyCacheItem_INTERFACE_DEFINED__

#define STREAM_FORMAT_COMPLIB_MODULE    0
#define STREAM_FORMAT_COMPLIB_MANIFEST  1
#define STREAM_FORMAT_WIN32_MODULE      2
#define STREAM_FORMAT_WIN32_MANIFEST    4
#define IASSEMBLYCACHEITEM_COMMIT_FLAG_REFRESH       0x00000001
#define IASSEMBLYCACHEITEM_COMMIT_FLAG_FORCE_REFRESH 0x00000002
#define IASSEMBLYCACHEITEM_COMMIT_DISPOSITION_INSTALLED 1
#define IASSEMBLYCACHEITEM_COMMIT_DISPOSITION_REFRESHED 2
#define IASSEMBLYCACHEITEM_COMMIT_DISPOSITION_ALREADY_INSTALLED 3
DEFINE_GUID(IID_IAssemblyCacheItem, 0x9e3aaeb4, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9e3aaeb4-d1cd-11d2-bab9-00c04f8eceae")
IAssemblyCacheItem : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateStream(
        DWORD dwFlags,
        LPCWSTR pszStreamName,
        DWORD dwFormat,
        DWORD dwFormatFlags,
        IStream **ppIStream,
        ULARGE_INTEGER *puliMaxSize) = 0;

    virtual HRESULT STDMETHODCALLTYPE Commit(
        DWORD dwFlags,
        ULONG *pulDisposition) = 0;

    virtual HRESULT STDMETHODCALLTYPE AbortItem(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyCacheItem, 0x9e3aaeb4, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae)
#endif
#else
typedef struct IAssemblyCacheItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyCacheItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyCacheItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyCacheItem *This);

    /*** IAssemblyCacheItem methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateStream)(
        IAssemblyCacheItem *This,
        DWORD dwFlags,
        LPCWSTR pszStreamName,
        DWORD dwFormat,
        DWORD dwFormatFlags,
        IStream **ppIStream,
        ULARGE_INTEGER *puliMaxSize);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IAssemblyCacheItem *This,
        DWORD dwFlags,
        ULONG *pulDisposition);

    HRESULT (STDMETHODCALLTYPE *AbortItem)(
        IAssemblyCacheItem *This);

    END_INTERFACE
} IAssemblyCacheItemVtbl;

interface IAssemblyCacheItem {
    CONST_VTBL IAssemblyCacheItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAssemblyCacheItem_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyCacheItem_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyCacheItem_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyCacheItem methods ***/
#define IAssemblyCacheItem_CreateStream(This,dwFlags,pszStreamName,dwFormat,dwFormatFlags,ppIStream,puliMaxSize) (This)->lpVtbl->CreateStream(This,dwFlags,pszStreamName,dwFormat,dwFormatFlags,ppIStream,puliMaxSize)
#define IAssemblyCacheItem_Commit(This,dwFlags,pulDisposition) (This)->lpVtbl->Commit(This,dwFlags,pulDisposition)
#define IAssemblyCacheItem_AbortItem(This) (This)->lpVtbl->AbortItem(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAssemblyCacheItem_QueryInterface(IAssemblyCacheItem* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAssemblyCacheItem_AddRef(IAssemblyCacheItem* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAssemblyCacheItem_Release(IAssemblyCacheItem* This) {
    return This->lpVtbl->Release(This);
}
/*** IAssemblyCacheItem methods ***/
static FORCEINLINE HRESULT IAssemblyCacheItem_CreateStream(IAssemblyCacheItem* This,DWORD dwFlags,LPCWSTR pszStreamName,DWORD dwFormat,DWORD dwFormatFlags,IStream **ppIStream,ULARGE_INTEGER *puliMaxSize) {
    return This->lpVtbl->CreateStream(This,dwFlags,pszStreamName,dwFormat,dwFormatFlags,ppIStream,puliMaxSize);
}
static FORCEINLINE HRESULT IAssemblyCacheItem_Commit(IAssemblyCacheItem* This,DWORD dwFlags,ULONG *pulDisposition) {
    return This->lpVtbl->Commit(This,dwFlags,pulDisposition);
}
static FORCEINLINE HRESULT IAssemblyCacheItem_AbortItem(IAssemblyCacheItem* This) {
    return This->lpVtbl->AbortItem(This);
}
#endif
#endif

#endif


#endif  /* __IAssemblyCacheItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAssemblyName interface
 */
#ifndef __IAssemblyName_INTERFACE_DEFINED__
#define __IAssemblyName_INTERFACE_DEFINED__

typedef IAssemblyName *LPASSEMBLYNAME;
typedef enum __WIDL_fusion_generated_name_00000010 {
    CANOF_PARSE_DISPLAY_NAME = 0x1,
    CANOF_SET_DEFAULT_VALUES = 0x2,
    CANOF_VERIFY_FRIEND_ASSEMBLYNAME = 0x4,
    CANOF_PARSE_FRIEND_DISPLAY_NAME = CANOF_PARSE_DISPLAY_NAME | CANOF_VERIFY_FRIEND_ASSEMBLYNAME
} CREATE_ASM_NAME_OBJ_FLAGS;
typedef enum __WIDL_fusion_generated_name_00000011 {
    ASM_NAME_PUBLIC_KEY = 0,
    ASM_NAME_PUBLIC_KEY_TOKEN = 1,
    ASM_NAME_HASH_VALUE = 2,
    ASM_NAME_NAME = 3,
    ASM_NAME_MAJOR_VERSION = 4,
    ASM_NAME_MINOR_VERSION = 5,
    ASM_NAME_BUILD_NUMBER = 6,
    ASM_NAME_REVISION_NUMBER = 7,
    ASM_NAME_CULTURE = 8,
    ASM_NAME_PROCESSOR_ID_ARRAY = 9,
    ASM_NAME_OSINFO_ARRAY = 10,
    ASM_NAME_HASH_ALGID = 11,
    ASM_NAME_ALIAS = 12,
    ASM_NAME_CODEBASE_URL = 13,
    ASM_NAME_CODEBASE_LASTMOD = 14,
    ASM_NAME_NULL_PUBLIC_KEY = 15,
    ASM_NAME_NULL_PUBLIC_KEY_TOKEN = 16,
    ASM_NAME_CUSTOM = 17,
    ASM_NAME_NULL_CUSTOM = 18,
    ASM_NAME_MVID = 19,
    ASM_NAME_FILE_MAJOR_VERSION = 20,
    ASM_NAME_FILE_MINOR_VERSION = 21,
    ASM_NAME_FILE_BUILD_NUMBER = 22,
    ASM_NAME_FILE_REVISION_NUMBER = 23,
    ASM_NAME_RETARGET = 24,
    ASM_NAME_SIGNATURE_BLOB = 25,
    ASM_NAME_CONFIG_MASK = 26,
    ASM_NAME_ARCHITECTURE = 27,
    ASM_NAME_MAX_PARAMS = 28
} ASM_NAME;
typedef enum __WIDL_fusion_generated_name_00000012 {
    ASM_DISPLAYF_VERSION = 0x1,
    ASM_DISPLAYF_CULTURE = 0x2,
    ASM_DISPLAYF_PUBLIC_KEY_TOKEN = 0x4,
    ASM_DISPLAYF_PUBLIC_KEY = 0x8,
    ASM_DISPLAYF_CUSTOM = 0x10,
    ASM_DISPLAYF_PROCESSORARCHITECTURE = 0x20,
    ASM_DISPLAYF_LANGUAGEID = 0x40,
    ASM_DISPLAYF_RETARGET = 0x80,
    ASM_DISPLAYF_CONFIG_MASK = 0x100,
    ASM_DISPLAYF_MVID = 0x200,
    ASM_DISPLAYF_FULL = (((ASM_DISPLAYF_VERSION | ASM_DISPLAYF_CULTURE) | ASM_DISPLAYF_PUBLIC_KEY_TOKEN) | ASM_DISPLAYF_RETARGET) | ASM_DISPLAYF_PROCESSORARCHITECTURE
} ASM_DISPLAY_FLAGS;
typedef enum __WIDL_fusion_generated_name_00000013 {
    ASM_CMPF_NAME = 0x1,
    ASM_CMPF_MAJOR_VERSION = 0x2,
    ASM_CMPF_MINOR_VERSION = 0x4,
    ASM_CMPF_BUILD_NUMBER = 0x8,
    ASM_CMPF_REVISION_NUMBER = 0x10,
    ASM_CMPF_VERSION = ((ASM_CMPF_MAJOR_VERSION | ASM_CMPF_MINOR_VERSION) | ASM_CMPF_BUILD_NUMBER) | ASM_CMPF_REVISION_NUMBER,
    ASM_CMPF_PUBLIC_KEY_TOKEN = 0x20,
    ASM_CMPF_CULTURE = 0x40,
    ASM_CMPF_CUSTOM = 0x80,
    ASM_CMPF_DEFAULT = 0x100,
    ASM_CMPF_RETARGET = 0x200,
    ASM_CMPF_ARCHITECTURE = 0x400,
    ASM_CMPF_CONFIG_MASK = 0x800,
    ASM_CMPF_MVID = 0x1000,
    ASM_CMPF_SIGNATURE = 0x2000,
    ASM_CMPF_IL_ALL = ((ASM_CMPF_NAME | ASM_CMPF_VERSION) | ASM_CMPF_PUBLIC_KEY_TOKEN) | ASM_CMPF_CULTURE,
    ASM_CMPF_IL_NO_VERSION = (ASM_CMPF_NAME | ASM_CMPF_PUBLIC_KEY_TOKEN) | ASM_CMPF_CULTURE
} ASM_CMP_FLAGS;
DEFINE_GUID(IID_IAssemblyName, 0xcd193bc0, 0xb4bc, 0x11d2, 0x98,0x33, 0x00,0xc0,0x4f,0xc3,0x1d,0x2e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cd193bc0-b4bc-11d2-9833-00c04fc31d2e")
IAssemblyName : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetProperty(
        DWORD PropertyId,
        LPVOID pvProperty,
        DWORD cbProperty) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperty(
        DWORD PropertyId,
        LPVOID pvProperty,
        LPDWORD pcbProperty) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finalize(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDisplayName(
        LPOLESTR szDisplayName,
        LPDWORD pccDisplayName,
        DWORD dwDisplayFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reserved(
        REFIID refIID,
        IUnknown *pUnkReserved1,
        IUnknown *pUnkReserved2,
        LPCOLESTR szReserved,
        LONGLONG llReserved,
        LPVOID pvReserved,
        DWORD cbReserved,
        LPVOID *ppReserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetName(
        LPDWORD lpcwBuffer,
        WCHAR *pwzName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVersion(
        LPDWORD pdwVersionHi,
        LPDWORD pdwVersionLow) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsEqual(
        IAssemblyName *pName,
        DWORD dwCmpFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IAssemblyName **pName) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyName, 0xcd193bc0, 0xb4bc, 0x11d2, 0x98,0x33, 0x00,0xc0,0x4f,0xc3,0x1d,0x2e)
#endif
#else
typedef struct IAssemblyNameVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyName *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyName *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyName *This);

    /*** IAssemblyName methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IAssemblyName *This,
        DWORD PropertyId,
        LPVOID pvProperty,
        DWORD cbProperty);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IAssemblyName *This,
        DWORD PropertyId,
        LPVOID pvProperty,
        LPDWORD pcbProperty);

    HRESULT (STDMETHODCALLTYPE *Finalize)(
        IAssemblyName *This);

    HRESULT (STDMETHODCALLTYPE *GetDisplayName)(
        IAssemblyName *This,
        LPOLESTR szDisplayName,
        LPDWORD pccDisplayName,
        DWORD dwDisplayFlags);

    HRESULT (STDMETHODCALLTYPE *Reserved)(
        IAssemblyName *This,
        REFIID refIID,
        IUnknown *pUnkReserved1,
        IUnknown *pUnkReserved2,
        LPCOLESTR szReserved,
        LONGLONG llReserved,
        LPVOID pvReserved,
        DWORD cbReserved,
        LPVOID *ppReserved);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        IAssemblyName *This,
        LPDWORD lpcwBuffer,
        WCHAR *pwzName);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IAssemblyName *This,
        LPDWORD pdwVersionHi,
        LPDWORD pdwVersionLow);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        IAssemblyName *This,
        IAssemblyName *pName,
        DWORD dwCmpFlags);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IAssemblyName *This,
        IAssemblyName **pName);

    END_INTERFACE
} IAssemblyNameVtbl;

interface IAssemblyName {
    CONST_VTBL IAssemblyNameVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAssemblyName_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyName_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyName_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyName methods ***/
#define IAssemblyName_SetProperty(This,PropertyId,pvProperty,cbProperty) (This)->lpVtbl->SetProperty(This,PropertyId,pvProperty,cbProperty)
#define IAssemblyName_GetProperty(This,PropertyId,pvProperty,pcbProperty) (This)->lpVtbl->GetProperty(This,PropertyId,pvProperty,pcbProperty)
#define IAssemblyName_Finalize(This) (This)->lpVtbl->Finalize(This)
#define IAssemblyName_GetDisplayName(This,szDisplayName,pccDisplayName,dwDisplayFlags) (This)->lpVtbl->GetDisplayName(This,szDisplayName,pccDisplayName,dwDisplayFlags)
#define IAssemblyName_Reserved(This,refIID,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved) (This)->lpVtbl->Reserved(This,refIID,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved)
#define IAssemblyName_GetName(This,lpcwBuffer,pwzName) (This)->lpVtbl->GetName(This,lpcwBuffer,pwzName)
#define IAssemblyName_GetVersion(This,pdwVersionHi,pdwVersionLow) (This)->lpVtbl->GetVersion(This,pdwVersionHi,pdwVersionLow)
#define IAssemblyName_IsEqual(This,pName,dwCmpFlags) (This)->lpVtbl->IsEqual(This,pName,dwCmpFlags)
#define IAssemblyName_Clone(This,pName) (This)->lpVtbl->Clone(This,pName)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAssemblyName_QueryInterface(IAssemblyName* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAssemblyName_AddRef(IAssemblyName* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAssemblyName_Release(IAssemblyName* This) {
    return This->lpVtbl->Release(This);
}
/*** IAssemblyName methods ***/
static FORCEINLINE HRESULT IAssemblyName_SetProperty(IAssemblyName* This,DWORD PropertyId,LPVOID pvProperty,DWORD cbProperty) {
    return This->lpVtbl->SetProperty(This,PropertyId,pvProperty,cbProperty);
}
static FORCEINLINE HRESULT IAssemblyName_GetProperty(IAssemblyName* This,DWORD PropertyId,LPVOID pvProperty,LPDWORD pcbProperty) {
    return This->lpVtbl->GetProperty(This,PropertyId,pvProperty,pcbProperty);
}
static FORCEINLINE HRESULT IAssemblyName_Finalize(IAssemblyName* This) {
    return This->lpVtbl->Finalize(This);
}
static FORCEINLINE HRESULT IAssemblyName_GetDisplayName(IAssemblyName* This,LPOLESTR szDisplayName,LPDWORD pccDisplayName,DWORD dwDisplayFlags) {
    return This->lpVtbl->GetDisplayName(This,szDisplayName,pccDisplayName,dwDisplayFlags);
}
static FORCEINLINE HRESULT IAssemblyName_Reserved(IAssemblyName* This,REFIID refIID,IUnknown *pUnkReserved1,IUnknown *pUnkReserved2,LPCOLESTR szReserved,LONGLONG llReserved,LPVOID pvReserved,DWORD cbReserved,LPVOID *ppReserved) {
    return This->lpVtbl->Reserved(This,refIID,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved);
}
static FORCEINLINE HRESULT IAssemblyName_GetName(IAssemblyName* This,LPDWORD lpcwBuffer,WCHAR *pwzName) {
    return This->lpVtbl->GetName(This,lpcwBuffer,pwzName);
}
static FORCEINLINE HRESULT IAssemblyName_GetVersion(IAssemblyName* This,LPDWORD pdwVersionHi,LPDWORD pdwVersionLow) {
    return This->lpVtbl->GetVersion(This,pdwVersionHi,pdwVersionLow);
}
static FORCEINLINE HRESULT IAssemblyName_IsEqual(IAssemblyName* This,IAssemblyName *pName,DWORD dwCmpFlags) {
    return This->lpVtbl->IsEqual(This,pName,dwCmpFlags);
}
static FORCEINLINE HRESULT IAssemblyName_Clone(IAssemblyName* This,IAssemblyName **pName) {
    return This->lpVtbl->Clone(This,pName);
}
#endif
#endif

#endif


#endif  /* __IAssemblyName_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAssemblyEnum interface
 */
#ifndef __IAssemblyEnum_INTERFACE_DEFINED__
#define __IAssemblyEnum_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAssemblyEnum, 0x21b8916c, 0xf28e, 0x11d2, 0xa4,0x73, 0x00,0xc0,0x4f,0x8e,0xf4,0x48);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("21b8916c-f28e-11d2-a473-00c04f8ef448")
IAssemblyEnum : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetNextAssembly(
        LPVOID pvReserved,
        IAssemblyName **ppName,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IAssemblyEnum **ppEnum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyEnum, 0x21b8916c, 0xf28e, 0x11d2, 0xa4,0x73, 0x00,0xc0,0x4f,0x8e,0xf4,0x48)
#endif
#else
typedef struct IAssemblyEnumVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyEnum *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyEnum *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyEnum *This);

    /*** IAssemblyEnum methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNextAssembly)(
        IAssemblyEnum *This,
        LPVOID pvReserved,
        IAssemblyName **ppName,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IAssemblyEnum *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IAssemblyEnum *This,
        IAssemblyEnum **ppEnum);

    END_INTERFACE
} IAssemblyEnumVtbl;

interface IAssemblyEnum {
    CONST_VTBL IAssemblyEnumVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAssemblyEnum_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyEnum_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyEnum_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyEnum methods ***/
#define IAssemblyEnum_GetNextAssembly(This,pvReserved,ppName,dwFlags) (This)->lpVtbl->GetNextAssembly(This,pvReserved,ppName,dwFlags)
#define IAssemblyEnum_Reset(This) (This)->lpVtbl->Reset(This)
#define IAssemblyEnum_Clone(This,ppEnum) (This)->lpVtbl->Clone(This,ppEnum)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAssemblyEnum_QueryInterface(IAssemblyEnum* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAssemblyEnum_AddRef(IAssemblyEnum* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAssemblyEnum_Release(IAssemblyEnum* This) {
    return This->lpVtbl->Release(This);
}
/*** IAssemblyEnum methods ***/
static FORCEINLINE HRESULT IAssemblyEnum_GetNextAssembly(IAssemblyEnum* This,LPVOID pvReserved,IAssemblyName **ppName,DWORD dwFlags) {
    return This->lpVtbl->GetNextAssembly(This,pvReserved,ppName,dwFlags);
}
static FORCEINLINE HRESULT IAssemblyEnum_Reset(IAssemblyEnum* This) {
    return This->lpVtbl->Reset(This);
}
static FORCEINLINE HRESULT IAssemblyEnum_Clone(IAssemblyEnum* This,IAssemblyEnum **ppEnum) {
    return This->lpVtbl->Clone(This,ppEnum);
}
#endif
#endif

#endif


#endif  /* __IAssemblyEnum_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IInstallReferenceItem interface
 */
#ifndef __IInstallReferenceItem_INTERFACE_DEFINED__
#define __IInstallReferenceItem_INTERFACE_DEFINED__

DEFINE_GUID(IID_IInstallReferenceItem, 0x582dac66, 0xe678, 0x449f, 0xab,0xa6, 0x6f,0xaa,0xec,0x8a,0x93,0x94);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("582dac66-e678-449f-aba6-6faaec8a9394")
IInstallReferenceItem : public IUnknown
{
};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IInstallReferenceItem, 0x582dac66, 0xe678, 0x449f, 0xab,0xa6, 0x6f,0xaa,0xec,0x8a,0x93,0x94)
#endif
#else
typedef struct IInstallReferenceItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInstallReferenceItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInstallReferenceItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInstallReferenceItem *This);

    END_INTERFACE
} IInstallReferenceItemVtbl;

interface IInstallReferenceItem {
    CONST_VTBL IInstallReferenceItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IInstallReferenceItem_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IInstallReferenceItem_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IInstallReferenceItem_Release(This) (This)->lpVtbl->Release(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IInstallReferenceItem_QueryInterface(IInstallReferenceItem* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IInstallReferenceItem_AddRef(IInstallReferenceItem* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IInstallReferenceItem_Release(IInstallReferenceItem* This) {
    return This->lpVtbl->Release(This);
}
#endif
#endif

#endif


#endif  /* __IInstallReferenceItem_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IInstallReferenceEnum interface
 */
#ifndef __IInstallReferenceEnum_INTERFACE_DEFINED__
#define __IInstallReferenceEnum_INTERFACE_DEFINED__

DEFINE_GUID(IID_IInstallReferenceEnum, 0x56b1a988, 0x7c0c, 0x4aa2, 0x86,0x39, 0xc3,0xeb,0x5a,0x90,0x22,0x6f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("56b1a988-7c0c-4aa2-8639-c3eb5a90226f")
IInstallReferenceEnum : public IUnknown
{
};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IInstallReferenceEnum, 0x56b1a988, 0x7c0c, 0x4aa2, 0x86,0x39, 0xc3,0xeb,0x5a,0x90,0x22,0x6f)
#endif
#else
typedef struct IInstallReferenceEnumVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IInstallReferenceEnum *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IInstallReferenceEnum *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IInstallReferenceEnum *This);

    END_INTERFACE
} IInstallReferenceEnumVtbl;

interface IInstallReferenceEnum {
    CONST_VTBL IInstallReferenceEnumVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IInstallReferenceEnum_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IInstallReferenceEnum_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IInstallReferenceEnum_Release(This) (This)->lpVtbl->Release(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IInstallReferenceEnum_QueryInterface(IInstallReferenceEnum* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IInstallReferenceEnum_AddRef(IInstallReferenceEnum* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IInstallReferenceEnum_Release(IInstallReferenceEnum* This) {
    return This->lpVtbl->Release(This);
}
#endif
#endif

#endif


#endif  /* __IInstallReferenceEnum_INTERFACE_DEFINED__ */

HRESULT WINAPI ClearDownloadCache(void);
HRESULT WINAPI CompareAssemblyIdentity(LPCWSTR,WINBOOL,LPCWSTR,WINBOOL,WINBOOL*,AssemblyComparisonResult*);
HRESULT WINAPI CreateAssemblyCache(IAssemblyCache**,DWORD);
HRESULT WINAPI CreateAssemblyEnum(IAssemblyEnum**,IUnknown*,IAssemblyName*,DWORD,LPVOID);
HRESULT WINAPI CreateAssemblyNameObject(LPASSEMBLYNAME*,LPCWSTR,DWORD,LPVOID);
HRESULT WINAPI CreateInstallReferenceEnum(IInstallReferenceEnum**,IAssemblyName*,DWORD,LPVOID);
HRESULT WINAPI GetAssemblyIdentityFromFile(LPCWSTR,REFIID,IUnknown**);
HRESULT WINAPI GetCachePath(ASM_CACHE_FLAGS,LPWSTR,PDWORD);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __fusion_h__ */
