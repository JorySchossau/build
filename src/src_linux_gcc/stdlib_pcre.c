/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_Pcre_bGVj3RgRlNY6kwJpiYI9b3A tyObject_Pcre_bGVj3RgRlNY6kwJpiYI9b3A;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
struct tyObject_Pcre_bGVj3RgRlNY6kwJpiYI9b3A {
char dummy;
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
struct tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ {
long flags;
void* study_data;
long match_limit;
void* callout_data;
void* tables;
long match_limit_recursion;
void* mark;
void* executable_jit;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(void, tyProc_5cp59bim9aJ4WupX5aVaD1Sg) (NCSTRING stringptr);
typedef N_CDECL_PTR(void, tyProc_hMR3nXvmHGbyZzcDul78bg) (tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ* extra);
typedef N_CDECL_PTR(tyObject_Pcre_bGVj3RgRlNY6kwJpiYI9b3A*, tyProc_OMNNRjh8IIE9bAc9btZcg0NA) (NCSTRING pattern, int options, NCSTRING* errptr, int* erroffset, void* tableptr);
typedef N_CDECL_PTR(int, tyProc_KqPl2ltkjnSoyb04zAVCAQ) (int what, void* where);
typedef N_CDECL_PTR(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ*, tyProc_qU2uMIyWirSwn1Nd4hJjDw) (tyObject_Pcre_bGVj3RgRlNY6kwJpiYI9b3A* code, int options, NCSTRING* errptr);
typedef N_CDECL_PTR(int, tyProc_urwqljFnOeCDcw8gOFcrpg) (tyObject_Pcre_bGVj3RgRlNY6kwJpiYI9b3A* code, tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ* extra, int what, void* where);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
TNimType NTI_bGVj3RgRlNY6kwJpiYI9b3A_;
TNimType NTI_WH9aVfHDhtZbU6Y5QgauqZQ_;
TNimType NTI_aRbi7557vgG4KV47nk1CWQ_;
extern TNimType NTI_3VcGJ5ZzkB2b0MMruetfFg_;
extern TNimType NTI_vr5DoT1jILTGdRlYv1OYpw_;
TNimType NTI_z1uZWlkSdiDfd9ahW9a6Ibug_;
static void* TM_9c4KgWyI7MBUp1bOanYigOw_3;
tyProc_5cp59bim9aJ4WupX5aVaD1Sg Dl_274691_;
tyProc_hMR3nXvmHGbyZzcDul78bg Dl_274758_;
tyProc_OMNNRjh8IIE9bAc9btZcg0NA Dl_274601_;
tyProc_KqPl2ltkjnSoyb04zAVCAQ Dl_274623_;
tyProc_qU2uMIyWirSwn1Nd4hJjDw Dl_274750_;
tyProc_urwqljFnOeCDcw8gOFcrpg Dl_274697_;
STRING_LITERAL(TM_9c4KgWyI7MBUp1bOanYigOw_5, "libpcre.so.3", 12);
STRING_LITERAL(TM_9c4KgWyI7MBUp1bOanYigOw_7, "libpcre.so.1", 12);
STRING_LITERAL(TM_9c4KgWyI7MBUp1bOanYigOw_9, "libpcre.so", 10);
STRING_LITERAL(TM_9c4KgWyI7MBUp1bOanYigOw_10, "libpcre.so(.3|.1|)", 18);
NIM_EXTERNC N_NOINLINE(void, stdlib_pcreInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_pcreDatInit000)(void) {
static TNimNode* TM_9c4KgWyI7MBUp1bOanYigOw_2[8];
static TNimNode TM_9c4KgWyI7MBUp1bOanYigOw_0[10];
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.size = sizeof(tyObject_Pcre_bGVj3RgRlNY6kwJpiYI9b3A);
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.kind = 18;
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.base = 0;
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.flags = 3;
TM_9c4KgWyI7MBUp1bOanYigOw_0[0].len = 0; TM_9c4KgWyI7MBUp1bOanYigOw_0[0].kind = 2;
NTI_bGVj3RgRlNY6kwJpiYI9b3A_.node = &TM_9c4KgWyI7MBUp1bOanYigOw_0[0];
NTI_WH9aVfHDhtZbU6Y5QgauqZQ_.size = sizeof(tyObject_Pcre_bGVj3RgRlNY6kwJpiYI9b3A*);
NTI_WH9aVfHDhtZbU6Y5QgauqZQ_.kind = 21;
NTI_WH9aVfHDhtZbU6Y5QgauqZQ_.base = (&NTI_bGVj3RgRlNY6kwJpiYI9b3A_);
NTI_WH9aVfHDhtZbU6Y5QgauqZQ_.flags = 3;
NTI_aRbi7557vgG4KV47nk1CWQ_.size = sizeof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ);
NTI_aRbi7557vgG4KV47nk1CWQ_.kind = 18;
NTI_aRbi7557vgG4KV47nk1CWQ_.base = 0;
NTI_aRbi7557vgG4KV47nk1CWQ_.flags = 3;
TM_9c4KgWyI7MBUp1bOanYigOw_2[0] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[2];
TM_9c4KgWyI7MBUp1bOanYigOw_0[2].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[2].offset = offsetof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ, flags);
TM_9c4KgWyI7MBUp1bOanYigOw_0[2].typ = (&NTI_3VcGJ5ZzkB2b0MMruetfFg_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[2].name = "flags";
TM_9c4KgWyI7MBUp1bOanYigOw_2[1] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[3];
TM_9c4KgWyI7MBUp1bOanYigOw_0[3].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[3].offset = offsetof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ, study_data);
TM_9c4KgWyI7MBUp1bOanYigOw_0[3].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[3].name = "study_data";
TM_9c4KgWyI7MBUp1bOanYigOw_2[2] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[4];
TM_9c4KgWyI7MBUp1bOanYigOw_0[4].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[4].offset = offsetof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ, match_limit);
TM_9c4KgWyI7MBUp1bOanYigOw_0[4].typ = (&NTI_3VcGJ5ZzkB2b0MMruetfFg_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[4].name = "match_limit";
TM_9c4KgWyI7MBUp1bOanYigOw_2[3] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[5];
TM_9c4KgWyI7MBUp1bOanYigOw_0[5].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[5].offset = offsetof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ, callout_data);
TM_9c4KgWyI7MBUp1bOanYigOw_0[5].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[5].name = "callout_data";
TM_9c4KgWyI7MBUp1bOanYigOw_2[4] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[6];
TM_9c4KgWyI7MBUp1bOanYigOw_0[6].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[6].offset = offsetof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ, tables);
TM_9c4KgWyI7MBUp1bOanYigOw_0[6].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[6].name = "tables";
TM_9c4KgWyI7MBUp1bOanYigOw_2[5] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[7];
TM_9c4KgWyI7MBUp1bOanYigOw_0[7].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[7].offset = offsetof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ, match_limit_recursion);
TM_9c4KgWyI7MBUp1bOanYigOw_0[7].typ = (&NTI_3VcGJ5ZzkB2b0MMruetfFg_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[7].name = "match_limit_recursion";
TM_9c4KgWyI7MBUp1bOanYigOw_2[6] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[8];
TM_9c4KgWyI7MBUp1bOanYigOw_0[8].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[8].offset = offsetof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ, mark);
TM_9c4KgWyI7MBUp1bOanYigOw_0[8].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[8].name = "mark";
TM_9c4KgWyI7MBUp1bOanYigOw_2[7] = &TM_9c4KgWyI7MBUp1bOanYigOw_0[9];
TM_9c4KgWyI7MBUp1bOanYigOw_0[9].kind = 1;
TM_9c4KgWyI7MBUp1bOanYigOw_0[9].offset = offsetof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ, executable_jit);
TM_9c4KgWyI7MBUp1bOanYigOw_0[9].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_9c4KgWyI7MBUp1bOanYigOw_0[9].name = "executable_jit";
TM_9c4KgWyI7MBUp1bOanYigOw_0[1].len = 8; TM_9c4KgWyI7MBUp1bOanYigOw_0[1].kind = 2; TM_9c4KgWyI7MBUp1bOanYigOw_0[1].sons = &TM_9c4KgWyI7MBUp1bOanYigOw_2[0];
NTI_aRbi7557vgG4KV47nk1CWQ_.node = &TM_9c4KgWyI7MBUp1bOanYigOw_0[1];
NTI_z1uZWlkSdiDfd9ahW9a6Ibug_.size = sizeof(tyObject_ExtraData_aRbi7557vgG4KV47nk1CWQ*);
NTI_z1uZWlkSdiDfd9ahW9a6Ibug_.kind = 21;
NTI_z1uZWlkSdiDfd9ahW9a6Ibug_.base = (&NTI_aRbi7557vgG4KV47nk1CWQ_);
NTI_z1uZWlkSdiDfd9ahW9a6Ibug_.flags = 3;
if (!((TM_9c4KgWyI7MBUp1bOanYigOw_3 = nimLoadLibrary((NimStringDesc*) &TM_9c4KgWyI7MBUp1bOanYigOw_5))
||(TM_9c4KgWyI7MBUp1bOanYigOw_3 = nimLoadLibrary((NimStringDesc*) &TM_9c4KgWyI7MBUp1bOanYigOw_7))
||(TM_9c4KgWyI7MBUp1bOanYigOw_3 = nimLoadLibrary((NimStringDesc*) &TM_9c4KgWyI7MBUp1bOanYigOw_9))
)) nimLoadLibraryError((NimStringDesc*) &TM_9c4KgWyI7MBUp1bOanYigOw_10);
	Dl_274691_ = (tyProc_5cp59bim9aJ4WupX5aVaD1Sg) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_3, "pcre_free_substring");
	Dl_274758_ = (tyProc_hMR3nXvmHGbyZzcDul78bg) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_3, "pcre_free_study");
	Dl_274601_ = (tyProc_OMNNRjh8IIE9bAc9btZcg0NA) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_3, "pcre_compile");
	Dl_274623_ = (tyProc_KqPl2ltkjnSoyb04zAVCAQ) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_3, "pcre_config");
	Dl_274750_ = (tyProc_qU2uMIyWirSwn1Nd4hJjDw) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_3, "pcre_study");
	Dl_274697_ = (tyProc_urwqljFnOeCDcw8gOFcrpg) nimGetProcAddr(TM_9c4KgWyI7MBUp1bOanYigOw_3, "pcre_fullinfo");
}
