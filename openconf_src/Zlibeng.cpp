// Created by Microsoft (R) C/C++ Compiler Version 12.00.8168.0 (e05a7cf7).
//
// zlibeng.tli
//
// Wrapper implementations for Win32 type library d:\Program Files\1CQL\BIN\zlibeng.dll
// compiler-generated file created 09/22/03 at 13:18:58 - DO NOT EDIT!

#pragma once

//
// interface IzipEntry wrapper method implementations
//

inline _bstr_t IzipEntry::GetComment ( ) {
    BSTR _result;
    HRESULT _hr = get_Comment(&_result);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _bstr_t(_result, false);
}

inline unsigned long IzipEntry::GetCompressedSize ( ) {
    unsigned long _result;
    HRESULT _hr = get_CompressedSize(&_result);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _result;
}

inline unsigned long IzipEntry::GetCrc32 ( ) {
    unsigned long _result;
    HRESULT _hr = get_Crc32(&_result);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _result;
}

inline unsigned short IzipEntry::GetMethod ( ) {
    unsigned short _result;
    HRESULT _hr = get_Method(&_result);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _result;
}

inline _bstr_t IzipEntry::GetName ( ) {
    BSTR _result;
    HRESULT _hr = get_Name(&_result);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _bstr_t(_result, false);
}

inline unsigned long IzipEntry::GetSize ( ) {
    unsigned long _result;
    HRESULT _hr = get_Size(&_result);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _result;
}

inline unsigned long IzipEntry::GetTime ( ) {
    unsigned long _result;
    HRESULT _hr = get_Time(&_result);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _result;
}

inline unsigned long IzipEntry::GetFlags ( ) {
    unsigned long _result;
    HRESULT _hr = get_Flags(&_result);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _result;
}

//
// interface IzlibEngine wrapper method implementations
//

inline HRESULT IzlibEngine::pkZip ( LPWSTR pszCommandLine ) {
    HRESULT _hr = raw_pkZip(pszCommandLine);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IzlibEngine::pkUnzip ( LPWSTR pszCommandLine ) {
    HRESULT _hr = raw_pkUnzip(pszCommandLine);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IzlibEngine::pkCompress ( struct IStream * lpstrmFrom, struct IStream * lpstrmTo ) {
    HRESULT _hr = raw_pkCompress(lpstrmFrom, lpstrmTo);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IzlibEngine::pkDecompress ( struct IStream * lpstrmFrom, struct IStream * lpstrmTo ) {
    HRESULT _hr = raw_pkDecompress(lpstrmFrom, lpstrmTo);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IzlibEngine::pkAppendFile ( struct IStream * lpstrmFrom, LPWSTR pszFileTo, LPWSTR pszStreamName, LPWSTR pszPassword ) {
    HRESULT _hr = raw_pkAppendFile(lpstrmFrom, pszFileTo, pszStreamName, pszPassword);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IzlibEngine::pkReadFile ( LPWSTR pszFileFrom, LPWSTR pszStreamName, struct IStream * lpstrmTo, LPWSTR pszPassword ) {
    HRESULT _hr = raw_pkReadFile(pszFileFrom, pszStreamName, lpstrmTo, pszPassword);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IzlibEngine::pkReadEntry ( LPWSTR pzsFileFrom, struct IEnum_zipEntry * * ppEnumEntry ) {
    HRESULT _hr = raw_pkReadEntry(pzsFileFrom, ppEnumEntry);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

//
// interface IEnum_zipEntry wrapper method implementations
//

inline HRESULT IEnum_zipEntry::Next ( unsigned long celt, struct IzipEntry * * rgelt, unsigned long * pceltFetched ) {
    HRESULT _hr = raw_Next(celt, rgelt, pceltFetched);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IEnum_zipEntry::Skip ( unsigned long celt ) {
    HRESULT _hr = raw_Skip(celt);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IEnum_zipEntry::Reset ( ) {
    HRESULT _hr = raw_Reset();
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

inline HRESULT IEnum_zipEntry::Clone ( struct IEnum_zipEntry * * ppzipEntry ) {
    HRESULT _hr = raw_Clone(ppzipEntry);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

//
// interface IjpegEngine wrapper method implementations
//

inline HRESULT IjpegEngine::CreateDIBFromJPEG ( LPWSTR pszPathName, unsigned int * hBitmap ) {
    HRESULT _hr = raw_CreateDIBFromJPEG(pszPathName, hBitmap);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}

//
// interface ItiffEngine wrapper method implementations
//

inline HRESULT ItiffEngine::CreateDIBFromTIFF ( LPWSTR pszPathName, unsigned int * hBitmap ) {
    HRESULT _hr = raw_CreateDIBFromTIFF(pszPathName, hBitmap);
    if (FAILED(_hr)) _com_issue_errorex(_hr, this, __uuidof(this));
    return _hr;
}
