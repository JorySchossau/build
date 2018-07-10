/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

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
typedef struct tyObject_SYSTEM_INFO_G1Uve9aRb0C3UBvKBPumLbA tyObject_SYSTEM_INFO_G1Uve9aRb0C3UBvKBPumLbA;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
struct tyObject_SYSTEM_INFO_G1Uve9aRb0C3UBvKBPumLbA {
NI32 u1;
NI32 dwPageSize;
void* lpMinimumApplicationAddress;
void* lpMaximumApplicationAddress;
NI32* dwActiveProcessorMask;
NI32 dwNumberOfProcessors;
NI32 dwProcessorType;
NI32 dwAllocationGranularity;
NI16 wProcessorLevel;
NI16 wProcessorRevision;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(void, tyProc_nIXx8cZ9bDpmPNj6EyoNkeA) (tyObject_SYSTEM_INFO_G1Uve9aRb0C3UBvKBPumLbA* lpSystemInfo);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static void* TM_h5LhXa1x7tiRXpXshXFkHA_2;
tyProc_nIXx8cZ9bDpmPNj6EyoNkeA Dl_266814_;
STRING_LITERAL(TM_h5LhXa1x7tiRXpXshXFkHA_4, "kernel32", 8);
STRING_LITERAL(TM_h5LhXa1x7tiRXpXshXFkHA_5, "kernel32", 8);

N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	tyObject_SYSTEM_INFO_G1Uve9aRb0C3UBvKBPumLbA si;
	result = (NI)0;
	memset((void*)(&si), 0, sizeof(si));
	Dl_266814_((&si));
	result = ((NI) (si.dwNumberOfProcessors));
	{
		if (!(result <= ((NI) 0))) goto LA3_;
		result = ((NI) 0);
	}
	LA3_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit000)(void) {
if (!((TM_h5LhXa1x7tiRXpXshXFkHA_2 = nimLoadLibrary((NimStringDesc*) &TM_h5LhXa1x7tiRXpXshXFkHA_4))
)) nimLoadLibraryError((NimStringDesc*) &TM_h5LhXa1x7tiRXpXshXFkHA_5);
	Dl_266814_ = (tyProc_nIXx8cZ9bDpmPNj6EyoNkeA) nimGetProcAddr(TM_h5LhXa1x7tiRXpXshXFkHA_2, "GetSystemInfo");
}

