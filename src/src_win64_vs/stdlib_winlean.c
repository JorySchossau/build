/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_GUID_J2WQBMgezjwf6Trblkflgg tyObject_GUID_J2WQBMgezjwf6Trblkflgg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_SECURITY_ATTRIBUTES_P4HW9ceaevTBZ5O3kGC8yyw tyObject_SECURITY_ATTRIBUTES_P4HW9ceaevTBZ5O3kGC8yyw;
typedef struct tyObject_STARTUPINFO_WGlpKvY9cdd69bAwMQMNLYoQ tyObject_STARTUPINFO_WGlpKvY9cdd69bAwMQMNLYoQ;
typedef struct tyObject_PROCESS_INFORMATION_rpgAdaffN9b79bo2kEQiFsMg tyObject_PROCESS_INFORMATION_rpgAdaffN9b79bo2kEQiFsMg;
typedef struct tyObject_WIN32_FIND_DATA_aYwmSz9bIz0JHAL9ciwIrnhA tyObject_WIN32_FIND_DATA_aYwmSz9bIz0JHAL9ciwIrnhA;
typedef struct tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw;
typedef NI8 tyArray_9cWG514ToTTjfTPLhXXV0IQ[8];
struct tyObject_GUID_J2WQBMgezjwf6Trblkflgg {
NI32 D1;
NI16 D2;
NI16 D3;
tyArray_9cWG514ToTTjfTPLhXXV0IQ D4;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_STDCALL_PTR(NCSTRING, tyProc_5ctyytqoGFQ0BA1imFGbVw) (int family, void* paddr, NCSTRING pStringBuffer, NI32 stringBufSize);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI, tyProc_zP2zGemcuVRvOUE82f9a0Pw) (NI32 nStdHandle);
typedef N_STDCALL_PTR(NI16*, tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA) (void);
typedef N_STDCALL_PTR(NI32, tyProc_hayl9b1HhJokJ1Zo9ctoglPg) (NI16* lpFileName);
typedef N_STDCALL_PTR(NI32, tyProc_C5kM33gEhlSKPXwfDNHofQ) (NI* hReadPipe, NI* hWritePipe, tyObject_SECURITY_ATTRIBUTES_P4HW9ceaevTBZ5O3kGC8yyw* lpPipeAttributes, NI32 nSize);
typedef N_STDCALL_PTR(NI32, tyProc_aO673xGTLLxou7P7GxoCXA) (NI32 dwFlags, void* lpSource, NI32 dwMessageId, NI32 dwLanguageId, void* lpBuffer, NI32 nSize, void* Arguments);
typedef N_STDCALL_PTR(void, tyProc_im9buRnIvptJfzdASYMEbBA) (void* p);
typedef N_STDCALL_PTR(NI32, tyProc_9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI, tyProc_tysGElbwz9aSK9baQpfnwQww) (NI16* lpName, NI32 dwOpenMode, NI32 dwPipeMode, NI32 nMaxInstances, NI32 nOutBufferSize, NI32 nInBufferSize, NI32 nDefaultTimeOut, tyObject_SECURITY_ATTRIBUTES_P4HW9ceaevTBZ5O3kGC8yyw* lpSecurityAttributes);
typedef N_STDCALL_PTR(NI, tyProc_XIfk9cbRXAfMefSauoFRXLA) (NI16* lpFileName, NI32 dwDesiredAccess, NI32 dwShareMode, void* lpSecurityAttributes, NI32 dwCreationDisposition, NI32 dwFlagsAndAttributes, NI hTemplateFile);
typedef N_STDCALL_PTR(NI, tyProc_uryidYWkntM7ddjZSyxvyQ) (void);
typedef N_STDCALL_PTR(NI32, tyProc_oew1DfaGl5XhHmnBK0HYXQ) (NI hSourceProcessHandle, NI hSourceHandle, NI hTargetProcessHandle, NI* lpTargetHandle, NI32 dwDesiredAccess, NI32 bInheritHandle, NI32 dwOptions);
typedef N_STDCALL_PTR(NI32, tyProc_P13srMBg9b3d3yEV9aW4NCoA) (NI hObject);
typedef N_STDCALL_PTR(NI32, tyProc_pyFZuMO5IklMzuXVIk6eRQ) (NI16* lpApplicationName, NI16* lpCommandLine, tyObject_SECURITY_ATTRIBUTES_P4HW9ceaevTBZ5O3kGC8yyw* lpProcessAttributes, tyObject_SECURITY_ATTRIBUTES_P4HW9ceaevTBZ5O3kGC8yyw* lpThreadAttributes, NI32 bInheritHandles, NI32 dwCreationFlags, NI16* lpEnvironment, NI16* lpCurrentDirectory, tyObject_STARTUPINFO_WGlpKvY9cdd69bAwMQMNLYoQ* lpStartupInfo, tyObject_PROCESS_INFORMATION_rpgAdaffN9b79bo2kEQiFsMg* lpProcessInformation);
typedef N_STDCALL_PTR(NI32, tyProc_9ajZYMGL5GqiRFqiCC367oA) (NI hFile, void* Buffer, NI32 nNumberOfBytesToRead, NI32* lpNumberOfBytesRead, void* lpOverlapped);
typedef N_STDCALL_PTR(NI32, tyProc_FprzxJFfqQdWyyGxiUsmeQ) (NI hHandle, NI32 dwMilliseconds);
typedef N_STDCALL_PTR(NI32, tyProc_KxeGXN001TReCr89ca9c5bng) (NI hProcess, NI32* lpExitCode);
typedef N_STDCALL_PTR(NI32, tyProc_M3PxDlueeoWgT3BgpzrqYw) (NI handle, NI16* buf, NI32 size);
typedef N_STDCALL_PTR(NI32, tyProc_IwsYs9blTXXmAlfsBWq604w) (NI16* lpName, NI16* lpValue);
typedef N_STDCALL_PTR(NI32, tyProc_9aKTqJQ9a3bUAymphQdhIjZg) (NI16* lpFileName, NI32 nBufferLength, NI16* lpBuffer, NI16** lpFilePart);
typedef N_STDCALL_PTR(NI32, tyProc_5sM6DjmSDLuKbGFwf0KfoA) (NI16* pathName, void* security);
typedef N_STDCALL_PTR(NI, tyProc_RG83qWQtsxfLxD7HYoLyfA) (NI16* lpFileName, tyObject_WIN32_FIND_DATA_aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
struct tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef N_STDCALL_PTR(void, tyProc_ofoySXaAAlxxs9bQS9a1etlg) (NI hFindFile);
typedef N_STDCALL_PTR(void, tyProc_Tjolzh1w2dIIpj3oCDGPFw) (NI32 dwMilliseconds);
struct tyObject_SECURITY_ATTRIBUTES_P4HW9ceaevTBZ5O3kGC8yyw {
NI32 nLength;
void* lpSecurityDescriptor;
NI32 bInheritHandle;
};
struct tyObject_STARTUPINFO_WGlpKvY9cdd69bAwMQMNLYoQ {
NI32 cb;
NCSTRING lpReserved;
NCSTRING lpDesktop;
NCSTRING lpTitle;
NI32 dwX;
NI32 dwY;
NI32 dwXSize;
NI32 dwYSize;
NI32 dwXCountChars;
NI32 dwYCountChars;
NI32 dwFillAttribute;
NI32 dwFlags;
NI16 wShowWindow;
NI16 cbReserved2;
void* lpReserved2;
NI hStdInput;
NI hStdOutput;
NI hStdError;
};
struct tyObject_PROCESS_INFORMATION_rpgAdaffN9b79bo2kEQiFsMg {
NI hProcess;
NI hThread;
NI32 dwProcessId;
NI32 dwThreadId;
};
typedef NI16 tyArray_EKfNt9b8uxndgFbu2Ky3XAQ[260];
typedef NI16 tyArray_Get9cpRTS5VjGKP6CDsI9bYA[14];
struct tyObject_WIN32_FIND_DATA_aYwmSz9bIz0JHAL9ciwIrnhA {
NI32 dwFileAttributes;
tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw ftCreationTime;
tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw ftLastAccessTime;
tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw ftLastWriteTime;
NI32 nFileSizeHigh;
NI32 nFileSizeLow;
NI32 dwReserved0;
NI32 dwReserved1;
tyArray_EKfNt9b8uxndgFbu2Ky3XAQ cFileName;
tyArray_Get9cpRTS5VjGKP6CDsI9bYA cAlternateFileName;
};
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void*, loadLib_lSvQvOASnMsmHZsCRL59ctQ)(NimStringDesc* path, NIM_BOOL global_symbols);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr_NHfjIU1Uh0ju9azgMjiSkQA)(void* lib, NCSTRING name);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg;
TNimType NTI_J2WQBMgezjwf6Trblkflgg_;
extern TNimType NTI_sVg18TP9cLifHyygRe9cro9aA_;
extern TNimType NTI_kDPg4wXyR8DDyA0MeEjIsw_;
extern TNimType NTI_chXunH2dwinSkhpA6JnsXw_;
TNimType NTI_9cWG514ToTTjfTPLhXXV0IQ_;
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg;
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg;
tyProc_5ctyytqoGFQ0BA1imFGbVw inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw;
void* ws2_hGspZUrVrEMpO9aP9c3dJQPQ;
static void* TM_k6kyf4Co79a84IkK9blFuQVA_6;
tyProc_zP2zGemcuVRvOUE82f9a0Pw Dl_220620_;
tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA Dl_221437_;
tyProc_hayl9b1HhJokJ1Zo9ctoglPg Dl_221411_;
tyProc_C5kM33gEhlSKPXwfDNHofQ Dl_220422_;
tyProc_aO673xGTLLxou7P7GxoCXA Dl_220635_;
tyProc_im9buRnIvptJfzdASYMEbBA Dl_220801_;
tyProc_9bXer9a4ps9aSGctILcxWReVw Dl_220630_;
tyProc_tysGElbwz9aSK9baQpfnwQww Dl_220430_;
tyProc_XIfk9cbRXAfMefSauoFRXLA Dl_222227_;
tyProc_uryidYWkntM7ddjZSyxvyQ Dl_222225_;
tyProc_oew1DfaGl5XhHmnBK0HYXQ Dl_222215_;
tyProc_P13srMBg9b3d3yEV9aW4NCoA Dl_220403_;
tyProc_pyFZuMO5IklMzuXVIk6eRQ Dl_220452_;
tyProc_9ajZYMGL5GqiRFqiCC367oA Dl_220406_;
tyProc_9ajZYMGL5GqiRFqiCC367oA Dl_220414_;
tyProc_FprzxJFfqQdWyyGxiUsmeQ Dl_220607_;
tyProc_KxeGXN001TReCr89ca9c5bng Dl_220615_;
tyProc_M3PxDlueeoWgT3BgpzrqYw Dl_220822_;
tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA Dl_221432_;
tyProc_hayl9b1HhJokJ1Zo9ctoglPg Dl_221434_;
tyProc_IwsYs9blTXXmAlfsBWq604w Dl_220818_;
tyProc_9aKTqJQ9a3bUAymphQdhIjZg Dl_221404_;
tyProc_5sM6DjmSDLuKbGFwf0KfoA Dl_220811_;
tyProc_RG83qWQtsxfLxD7HYoLyfA Dl_221237_;
tyProc_ofoySXaAAlxxs9bQS9a1etlg Dl_221401_;
tyProc_Tjolzh1w2dIIpj3oCDGPFw Dl_221629_;
NIM_CONST tyArray_9cWG514ToTTjfTPLhXXV0IQ TM_k6kyf4Co79a84IkK9blFuQVA_3 = {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
;
NIM_CONST tyArray_9cWG514ToTTjfTPLhXXV0IQ TM_k6kyf4Co79a84IkK9blFuQVA_4 = {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
;
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_5, "Ws2_32.dll", 10);
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_8, "kernel32", 8);
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_9, "kernel32", 8);

N_LIB_PRIVATE N_NIMCALL(NI64, rdFileTime_8xfVp1z4bc5fRCRgoEFhIQ)(tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw f) {
	NI64 result;
	result = (NI64)0;
	result = (NI64)(((NI64)(NU64)(NU32)(f.dwLowDateTime)) | (NI64)((NU64)(((NI64)(NU64)(NU32)(f.dwHighDateTime))) << (NU64)(((NI) 32))));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit000)(void) {
	genericReset((void*)(&WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg), (&NTI_J2WQBMgezjwf6Trblkflgg_));
	WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg.D1 = ((NI32) 631375801);
	WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg.D2 = ((NI16) -8717);
	WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg.D3 = ((NI16) 18016);
	memcpy((void*)WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_3, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	genericReset((void*)(&WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg), (&NTI_J2WQBMgezjwf6Trblkflgg_));
	WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg.D1 = ((NI32) -1254720015);
	WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg.D2 = ((NI16) -13396);
	WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg.D3 = ((NI16) 4559);
	memcpy((void*)WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_4, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	genericReset((void*)(&WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg), (&NTI_J2WQBMgezjwf6Trblkflgg_));
	WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg.D1 = ((NI32) -1254720014);
	WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg.D2 = ((NI16) -13396);
	WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg.D3 = ((NI16) 4559);
	memcpy((void*)WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_4, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw = NIM_NIL;
	ws2_hGspZUrVrEMpO9aP9c3dJQPQ = loadLib_lSvQvOASnMsmHZsCRL59ctQ(((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_5), NIM_FALSE);
	{
		void* T5_;
		if (!!((ws2_hGspZUrVrEMpO9aP9c3dJQPQ == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = symAddr_NHfjIU1Uh0ju9azgMjiSkQA(ws2_hGspZUrVrEMpO9aP9c3dJQPQ, "inet_ntop");
		inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw = ((tyProc_5ctyytqoGFQ0BA1imFGbVw) (T5_));
	}
	LA3_: ;
}

NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit000)(void) {
static TNimNode* TM_k6kyf4Co79a84IkK9blFuQVA_2[4];
static TNimNode TM_k6kyf4Co79a84IkK9blFuQVA_0[5];
NTI_J2WQBMgezjwf6Trblkflgg_.size = sizeof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg);
NTI_J2WQBMgezjwf6Trblkflgg_.kind = 18;
NTI_J2WQBMgezjwf6Trblkflgg_.base = 0;
NTI_J2WQBMgezjwf6Trblkflgg_.flags = 3;
TM_k6kyf4Co79a84IkK9blFuQVA_2[0] = &TM_k6kyf4Co79a84IkK9blFuQVA_0[1];
TM_k6kyf4Co79a84IkK9blFuQVA_0[1].kind = 1;
TM_k6kyf4Co79a84IkK9blFuQVA_0[1].offset = offsetof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg, D1);
TM_k6kyf4Co79a84IkK9blFuQVA_0[1].typ = (&NTI_sVg18TP9cLifHyygRe9cro9aA_);
TM_k6kyf4Co79a84IkK9blFuQVA_0[1].name = "D1";
TM_k6kyf4Co79a84IkK9blFuQVA_2[1] = &TM_k6kyf4Co79a84IkK9blFuQVA_0[2];
TM_k6kyf4Co79a84IkK9blFuQVA_0[2].kind = 1;
TM_k6kyf4Co79a84IkK9blFuQVA_0[2].offset = offsetof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg, D2);
TM_k6kyf4Co79a84IkK9blFuQVA_0[2].typ = (&NTI_kDPg4wXyR8DDyA0MeEjIsw_);
TM_k6kyf4Co79a84IkK9blFuQVA_0[2].name = "D2";
TM_k6kyf4Co79a84IkK9blFuQVA_2[2] = &TM_k6kyf4Co79a84IkK9blFuQVA_0[3];
TM_k6kyf4Co79a84IkK9blFuQVA_0[3].kind = 1;
TM_k6kyf4Co79a84IkK9blFuQVA_0[3].offset = offsetof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg, D3);
TM_k6kyf4Co79a84IkK9blFuQVA_0[3].typ = (&NTI_kDPg4wXyR8DDyA0MeEjIsw_);
TM_k6kyf4Co79a84IkK9blFuQVA_0[3].name = "D3";
TM_k6kyf4Co79a84IkK9blFuQVA_2[3] = &TM_k6kyf4Co79a84IkK9blFuQVA_0[4];
NTI_9cWG514ToTTjfTPLhXXV0IQ_.size = sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ);
NTI_9cWG514ToTTjfTPLhXXV0IQ_.kind = 16;
NTI_9cWG514ToTTjfTPLhXXV0IQ_.base = (&NTI_chXunH2dwinSkhpA6JnsXw_);
NTI_9cWG514ToTTjfTPLhXXV0IQ_.flags = 3;
TM_k6kyf4Co79a84IkK9blFuQVA_0[4].kind = 1;
TM_k6kyf4Co79a84IkK9blFuQVA_0[4].offset = offsetof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg, D4);
TM_k6kyf4Co79a84IkK9blFuQVA_0[4].typ = (&NTI_9cWG514ToTTjfTPLhXXV0IQ_);
TM_k6kyf4Co79a84IkK9blFuQVA_0[4].name = "D4";
TM_k6kyf4Co79a84IkK9blFuQVA_0[0].len = 4; TM_k6kyf4Co79a84IkK9blFuQVA_0[0].kind = 2; TM_k6kyf4Co79a84IkK9blFuQVA_0[0].sons = &TM_k6kyf4Co79a84IkK9blFuQVA_2[0];
NTI_J2WQBMgezjwf6Trblkflgg_.node = &TM_k6kyf4Co79a84IkK9blFuQVA_0[0];
if (!((TM_k6kyf4Co79a84IkK9blFuQVA_6 = nimLoadLibrary((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_8))
)) nimLoadLibraryError((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_9);
	Dl_220620_ = (tyProc_zP2zGemcuVRvOUE82f9a0Pw) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetStdHandle");
	Dl_221437_ = (tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetCommandLineW");
	Dl_221411_ = (tyProc_hayl9b1HhJokJ1Zo9ctoglPg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetFileAttributesW");
	Dl_220422_ = (tyProc_C5kM33gEhlSKPXwfDNHofQ) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "CreatePipe");
	Dl_220635_ = (tyProc_aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "FormatMessageW");
	Dl_220801_ = (tyProc_im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "LocalFree");
	Dl_220630_ = (tyProc_9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetLastError");
	Dl_220430_ = (tyProc_tysGElbwz9aSK9baQpfnwQww) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "CreateNamedPipeW");
	Dl_222227_ = (tyProc_XIfk9cbRXAfMefSauoFRXLA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "CreateFileW");
	Dl_222225_ = (tyProc_uryidYWkntM7ddjZSyxvyQ) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetCurrentProcess");
	Dl_222215_ = (tyProc_oew1DfaGl5XhHmnBK0HYXQ) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "DuplicateHandle");
	Dl_220403_ = (tyProc_P13srMBg9b3d3yEV9aW4NCoA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "CloseHandle");
	Dl_220452_ = (tyProc_pyFZuMO5IklMzuXVIk6eRQ) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "CreateProcessW");
	Dl_220406_ = (tyProc_9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "ReadFile");
	Dl_220414_ = (tyProc_9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "WriteFile");
	Dl_220607_ = (tyProc_FprzxJFfqQdWyyGxiUsmeQ) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "WaitForSingleObject");
	Dl_220615_ = (tyProc_KxeGXN001TReCr89ca9c5bng) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetExitCodeProcess");
	Dl_220822_ = (tyProc_M3PxDlueeoWgT3BgpzrqYw) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetModuleFileNameW");
	Dl_221432_ = (tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetEnvironmentStringsW");
	Dl_221434_ = (tyProc_hayl9b1HhJokJ1Zo9ctoglPg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "FreeEnvironmentStringsW");
	Dl_220818_ = (tyProc_IwsYs9blTXXmAlfsBWq604w) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "SetEnvironmentVariableW");
	Dl_221404_ = (tyProc_9aKTqJQ9a3bUAymphQdhIjZg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetFullPathNameW");
	Dl_220811_ = (tyProc_5sM6DjmSDLuKbGFwf0KfoA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "CreateDirectoryW");
	Dl_221237_ = (tyProc_RG83qWQtsxfLxD7HYoLyfA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "FindFirstFileW");
	Dl_221401_ = (tyProc_ofoySXaAAlxxs9bQS9a1etlg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "FindClose");
	Dl_221629_ = (tyProc_Tjolzh1w2dIIpj3oCDGPFw) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "Sleep");
}

