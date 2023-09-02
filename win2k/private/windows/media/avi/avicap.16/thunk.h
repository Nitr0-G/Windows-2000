/****************************************************************************
 *
 *   thunk.h
 * 
 *   macros, defines, prototypes for avicap 16:32 thunks
 *
 *   Copyright (c) 1994 Microsoft Corporation.  All Rights Reserved.
 *
 ***************************************************************************/

typedef LPVOID P16VOID;
typedef DWORD  P32VOID;
//#define P16VOID LPVOID
//#define P32VOID DWORD

// thunk helpers exported from the kernel
//
DWORD WINAPI GetCurrentProcessID(void);  // KERNEL
DWORD WINAPI SetWin32Event(DWORD hEvent); // KERNEL

P16VOID  WINAPI MapLS(P32VOID);
P16VOID  WINAPI UnMapLS(P16VOID);
P32VOID  WINAPI MapSL(P16VOID);

// generated by thunk compiler from avicapf.thk
//
BOOL FAR PASCAL avicapf_ThunkConnect16 (
    LPCSTR    pszDll16,
    LPCSTR    pszDll32,
    HINSTANCE hinst,
    DWORD     dwReason);

// thunk helpers in thunka.asm
//
DWORD FAR PASCAL capTileBuffer (
    DWORD dwLinear,
    DWORD dwSize);

#define PTR_FROM_TILE(dwTile) (LPVOID)(dwTile & 0xFFFF0000)

void  FAR PASCAL capUnTileBuffer (
    DWORD dwTileInfo);
