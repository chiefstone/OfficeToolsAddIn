// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface
// (the "Fluent UI") and is provided only as referential material to supplement the
// Microsoft Foundation Classes Reference and related electronic documentation
// included with the MFC C++ library software.
// License terms to copy, use or distribute the Fluent UI are available separately.
// To learn more about our Fluent UI licensing program, please visit
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Exclude rarely-used stuff from Windows headers
#endif

#define SECURITY_WIN32

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxcview.h>


#include <afxdisp.h>        // MFC Automation classes

#include <atlconv.h>

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC support for Internet Explorer 4 Common Controls
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // MFC support for ribbons and control bars

#include <psapi.h>
#include <ntsecapi.h>
#include <sddl.h>
#include <Lm.h>
#include <Security.h>


#define LSA_LOOKUP_ISOLATED_AS_LOCAL	0x80000000
#define STATUS_NONE_MAPPED               ((NTSTATUS)0xC0000073L)
#define STATUS_SOME_NOT_MAPPED           ((NTSTATUS)0x00000107L)

#import <C:\Program Files\Microsoft Office\root\vfs\ProgramFilesCommonX64\Microsoft Shared\OFFICE16\MSO.DLL> \
	rename("DocumentProperties", "_DocumentProperties") \
	rename("RGB","_RGB")
#import <C:\Program Files\Microsoft Office\root\vfs\ProgramFilesCommonX86\Microsoft Shared\VBA\VBA6\VBE6EXT.OLB>
#import <C:\Program Files\Microsoft Office\root\Office16\EXCEL.EXE> \
	rename("DialogBox","_DialogBox") \
	rename("RGB","_RGB") \
	rename("CopyFile","_CopyFile") \
	rename("ReplaceText", "_ReplaceText") \
	exclude("IFont","IPicture")






#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


