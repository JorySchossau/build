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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_phjbYJtsbOIAYa9be34hhZg tySequence_phjbYJtsbOIAYa9be34hhZg;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA;
typedef struct tySequence_qwqHTkRvwhrRyENtudHQ7g tySequence_qwqHTkRvwhrRyENtudHQ7g;
typedef struct tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw;
typedef struct RootObj RootObj;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA {
NI a;
NI b;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw {
  RootObj Sup;
NI colonstate_;
tySequence_phjbYJtsbOIAYa9be34hhZg* tab1;
};
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_1vaGAONPAWaeByqm8WA9cTw;
typedef N_CLOSURE_PTR(NI, TM_XccfeXaloFBPYyo0tmMqhg_5) (void);
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_phjbYJtsbOIAYa9be34hhZg {
  TGenericSeq Sup;
  tySequence_sM4lkSb7zS6F7OVMvW9cffQ* data[SEQ_DECL_SIZE];
};
struct tySequence_qwqHTkRvwhrRyENtudHQ7g {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_phjbYJtsbOIAYa9be34hhZg)(void* p, NI op);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, nsuSplitString)(NimStringDesc* s, NimStringDesc* sep, NI maxsplit);
N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, X5BX5D__SeXbe3qxpJ9ab19cHFB4t5kQ)(NimStringDesc** s, NI sLen_0, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x);
static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__ctxq0YSon7aLz7isCROwwQtextUt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NimStringDesc**, X5BX5D__xFULIkGrri8iJzi40N9ahqwtextUt)(NimStringDesc** s, NI sLen_0, NI i);
static N_NIMCALL(void, Marker_tyRef_iwdPEwAp7UL0muQ1gtPvQw)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(tySequence_qwqHTkRvwhrRyENtudHQ7g*, newSeq_BlrccvgyrVECLCXlhRK9cMw)(NI len);
N_LIB_PRIVATE N_CLOSURE(NI, nCols_hbTghrM2bVhvSj173E1t1w)(void* ClE_0);
static N_INLINE(NI, X5BX5D__v82hE9bZXe7JaJataRZBqeQtextUt)(NI* s, NI sLen_0, NI i);
N_LIB_PRIVATE N_NIMCALL(tySequence_qwqHTkRvwhrRyENtudHQ7g*, X5BX5D__VkZY1YyNHR9ckWgSqceKF0Q)(NI* s, NI sLen_0, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x);
N_LIB_PRIVATE N_NIMCALL(NI, terminalWidth_PACsHLAgy9aMon9axrlFeqOQ)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatStr)(NimStringDesc* s, NI n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuWordWrap)(NimStringDesc* s, NI maxLineWidth, NIM_BOOL splitLongWords, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw seps, NimStringDesc* newLine);
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
TNimType NTI_phjbYJtsbOIAYa9be34hhZg_;
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_RBuAPh9a4NTIgELl39cQyYUw_;
extern TNimType NTI_xHTZrq9aYs6boc9bCba0JbpQ_;
TNimType NTI_iwdPEwAp7UL0muQ1gtPvQw_;
STRING_LITERAL(TM_XccfeXaloFBPYyo0tmMqhg_2, "", 0);
STRING_LITERAL(TM_XccfeXaloFBPYyo0tmMqhg_3, "\012", 1);
STRING_LITERAL(TM_XccfeXaloFBPYyo0tmMqhg_6, " ", 1);
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_XccfeXaloFBPYyo0tmMqhg_7 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static N_NIMCALL(void, Marker_tySequence_phjbYJtsbOIAYa9be34hhZg)(void* p, NI op) {
	tySequence_phjbYJtsbOIAYa9be34hhZg* a;
	NI T1_;
	a = (tySequence_phjbYJtsbOIAYa9be34hhZg*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}

static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__ctxq0YSon7aLz7isCROwwQtextUt)(NI a, NI b) {
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NimStringDesc**, X5BX5D__xFULIkGrri8iJzi40N9ahqwtextUt)(NimStringDesc** s, NI sLen_0, NI i) {
	NimStringDesc** result;
	result = (NimStringDesc**)0;
	result = (&s[(NI)(sLen_0 - i)]);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addPrefix_SAFf6o9cmipmbSQJtoOfZBg)(NimStringDesc* prefix, NimStringDesc* multiline) {
	NimStringDesc* result;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lines;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_2));
	lines = nsuSplitString(multiline, ((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_3), ((NI) -1));
	{
		NI T3_;
		T3_ = (lines ? lines->Sup.len : 0);
		if (!(((NI) 1) < T3_)) goto LA4_;
		{
			NimStringDesc* line;
			tySequence_sM4lkSb7zS6F7OVMvW9cffQ* colontmp_;
			tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T7_;
			NI i;
			NI L;
			NI T8_;
			line = (NimStringDesc*)0;
			colontmp_ = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
			T7_ = dotdot__ctxq0YSon7aLz7isCROwwQtextUt(((NI) 0), ((NI) 2));
			colontmp_ = X5BX5D__SeXbe3qxpJ9ab19cHFB4t5kQ(lines->data, lines->Sup.len, T7_);
			i = ((NI) 0);
			T8_ = (colontmp_ ? colontmp_->Sup.len : 0);
			L = T8_;
			{
				while (1) {
					NimStringDesc* T11_;
					if (!(i < L)) goto LA10;
					line = colontmp_->data[i];
					T11_ = (NimStringDesc*)0;
					T11_ = rawNewString(prefix->Sup.len + line->Sup.len + 1);
appendString(T11_, prefix);
appendString(T11_, line);
appendString(T11_, ((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_3));
					result = resizeString(result, T11_->Sup.len + 0);
appendString(result, T11_);
					i += ((NI) 1);
				} LA10: ;
			}
		}
	}
	LA4_: ;
	{
		NI T14_;
		T14_ = (lines ? lines->Sup.len : 0);
		if (!(((NI) 0) < T14_)) goto LA15_;
		{
			NimStringDesc** T19_;
			NimStringDesc* T22_;
			NimStringDesc** T23_;
			T19_ = (NimStringDesc**)0;
			T19_ = X5BX5D__xFULIkGrri8iJzi40N9ahqwtextUt(lines->data, lines->Sup.len, ((NI) 1));
			if (!(((NI) 0) < ((*T19_) ? (*T19_)->Sup.len : 0))) goto LA20_;
			T22_ = (NimStringDesc*)0;
			T23_ = (NimStringDesc**)0;
			T23_ = X5BX5D__xFULIkGrri8iJzi40N9ahqwtextUt(lines->data, lines->Sup.len, ((NI) 1));
			T22_ = rawNewString(prefix->Sup.len + (*T23_)->Sup.len + 1);
appendString(T22_, prefix);
appendString(T22_, (*T23_));
appendString(T22_, ((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_3));
			result = resizeString(result, T22_->Sup.len + 0);
appendString(result, T22_);
		}
		LA20_: ;
	}
	LA15_: ;
	return result;
}
static N_NIMCALL(void, Marker_tyRef_iwdPEwAp7UL0muQ1gtPvQw)(void* p, NI op) {
	tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw* a;
	a = (tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw*)p;
	nimGCvisit((void*)(*a).tab1, op);
}

N_LIB_PRIVATE N_CLOSURE(NI, nCols_hbTghrM2bVhvSj173E1t1w)(void* ClE_0) {
	NI result;
	tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw* colonenvP_;
	result = (NI)0;
	colonenvP_ = (tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw*) ClE_0;
	result = ((NI) 0);
	{
		tySequence_sM4lkSb7zS6F7OVMvW9cffQ* row;
		NI i;
		NI L;
		NI T2_;
		row = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
		i = ((NI) 0);
		T2_ = ((*colonenvP_).tab1 ? (*colonenvP_).tab1->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				NI T5_;
				if (!(i < L)) goto LA4;
				row = (*colonenvP_).tab1->data[i];
				T5_ = (row ? row->Sup.len : 0);
				result = ((result >= T5_) ? result : T5_);
				i += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

static N_INLINE(NI, X5BX5D__v82hE9bZXe7JaJataRZBqeQtextUt)(NI* s, NI sLen_0, NI i) {
	NI result;
	result = (NI)0;
	result = s[(NI)(sLen_0 - i)];
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignTable_bQTc4xExlHwXyAkDw3JiZQ)(tySequence_phjbYJtsbOIAYa9be34hhZg* tab, NI prefixLen, NI colGap, NI minLast, NimStringDesc* rowSep, tySequence_qwqHTkRvwhrRyENtudHQ7g* cols) {
	NimStringDesc* result;
	tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw* colonenv_;
	tySequence_qwqHTkRvwhrRyENtudHQ7g* wCol;
	tyProc_1vaGAONPAWaeByqm8WA9cTw T1_;
	NI T2_;
	NI last;
	NI wTerm;
	NI T12_;
	NI leader;
	NI T13_;
	result = (NimStringDesc*)0;
	colonenv_ = (tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw*)0;
	colonenv_ = (tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw*) newObj((&NTI_iwdPEwAp7UL0muQ1gtPvQw_), sizeof(tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw));
	(*colonenv_).Sup.m_type = (&NTI_RBuAPh9a4NTIgELl39cQyYUw_);
	genericSeqAssign((&(*colonenv_).tab1), tab, (&NTI_phjbYJtsbOIAYa9be34hhZg_));
	result = copyString(((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_2));
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.ClP_0 = nCols_hbTghrM2bVhvSj173E1t1w; T1_.ClE_0 = colonenv_;
	T2_ = (NI)0;
	T2_ = T1_.ClE_0? T1_.ClP_0(T1_.ClE_0):((TM_XccfeXaloFBPYyo0tmMqhg_5)(T1_.ClP_0))();
	wCol = newSeq_BlrccvgyrVECLCXlhRK9cMw(((NI) (T2_)));
	last = X5BX5D__v82hE9bZXe7JaJataRZBqeQtextUt(cols->data, cols->Sup.len, ((NI) 1));
	{
		tySequence_sM4lkSb7zS6F7OVMvW9cffQ* row;
		tySequence_phjbYJtsbOIAYa9be34hhZg* colontmp_;
		NI i;
		NI L;
		NI T4_;
		row = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
		colontmp_ = (tySequence_phjbYJtsbOIAYa9be34hhZg*)0;
		colontmp_ = (*colonenv_).tab1;
		i = ((NI) 0);
		T4_ = (colontmp_ ? colontmp_->Sup.len : 0);
		L = T4_;
		{
			while (1) {
				if (!(i < L)) goto LA6;
				row = colontmp_->data[i];
				{
					NI c;
					tySequence_qwqHTkRvwhrRyENtudHQ7g* colontmp__2;
					tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T8_;
					NI i_2;
					NI L_2;
					NI T9_;
					c = (NI)0;
					colontmp__2 = (tySequence_qwqHTkRvwhrRyENtudHQ7g*)0;
					T8_ = dotdot__ctxq0YSon7aLz7isCROwwQtextUt(((NI) 0), ((NI) 2));
					colontmp__2 = X5BX5D__VkZY1YyNHR9ckWgSqceKF0Q(cols->data, cols->Sup.len, T8_);
					i_2 = ((NI) 0);
					T9_ = (colontmp__2 ? colontmp__2->Sup.len : 0);
					L_2 = T9_;
					{
						while (1) {
							if (!(i_2 < L_2)) goto LA11;
							c = colontmp__2->data[i_2];
							wCol->data[c] = ((wCol->data[c] >= (row->data[c] ? row->data[c]->Sup.len : 0)) ? wCol->data[c] : (row->data[c] ? row->data[c]->Sup.len : 0));
							i_2 += ((NI) 1);
						} LA11: ;
					}
				}
				i += ((NI) 1);
			} LA6: ;
		}
	}
	T12_ = (NI)0;
	T12_ = terminalWidth_PACsHLAgy9aMon9axrlFeqOQ();
	wTerm = (NI)(T12_ - prefixLen);
	T13_ = (cols ? cols->Sup.len : 0);
	leader = (NI)((NI)(T13_ - ((NI) 1)) * colGap);
	{
		NI c_2;
		tySequence_qwqHTkRvwhrRyENtudHQ7g* colontmp__3;
		tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T15_;
		NI i_3;
		NI L_3;
		NI T16_;
		c_2 = (NI)0;
		colontmp__3 = (tySequence_qwqHTkRvwhrRyENtudHQ7g*)0;
		T15_ = dotdot__ctxq0YSon7aLz7isCROwwQtextUt(((NI) 0), ((NI) 2));
		colontmp__3 = X5BX5D__VkZY1YyNHR9ckWgSqceKF0Q(cols->data, cols->Sup.len, T15_);
		i_3 = ((NI) 0);
		T16_ = (colontmp__3 ? colontmp__3->Sup.len : 0);
		L_3 = T16_;
		{
			while (1) {
				if (!(i_3 < L_3)) goto LA18;
				c_2 = colontmp__3->data[i_3];
				leader += wCol->data[c_2];
				i_3 += ((NI) 1);
			} LA18: ;
		}
	}
	wCol->data[last] = ((minLast >= (NI)(wTerm - leader)) ? minLast : (NI)(wTerm - leader));
	{
		tySequence_sM4lkSb7zS6F7OVMvW9cffQ* row_2;
		tySequence_phjbYJtsbOIAYa9be34hhZg* colontmp__4;
		NI i_4;
		NI L_4;
		NI T20_;
		row_2 = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
		colontmp__4 = (tySequence_phjbYJtsbOIAYa9be34hhZg*)0;
		colontmp__4 = (*colonenv_).tab1;
		i_4 = ((NI) 0);
		T20_ = (colontmp__4 ? colontmp__4->Sup.len : 0);
		L_4 = T20_;
		{
			while (1) {
				tySequence_sM4lkSb7zS6F7OVMvW9cffQ* wrapped;
				NimStringDesc* T30_;
				NimStringDesc* T31_;
				NimStringDesc* T32_;
				if (!(i_4 < L_4)) goto LA22;
				row_2 = colontmp__4->data[i_4];
				{
					NI c_3;
					tySequence_qwqHTkRvwhrRyENtudHQ7g* colontmp__5;
					tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T24_;
					NI i_5;
					NI L_5;
					NI T25_;
					c_3 = (NI)0;
					colontmp__5 = (tySequence_qwqHTkRvwhrRyENtudHQ7g*)0;
					T24_ = dotdot__ctxq0YSon7aLz7isCROwwQtextUt(((NI) 0), ((NI) 2));
					colontmp__5 = X5BX5D__VkZY1YyNHR9ckWgSqceKF0Q(cols->data, cols->Sup.len, T24_);
					i_5 = ((NI) 0);
					T25_ = (colontmp__5 ? colontmp__5->Sup.len : 0);
					L_5 = T25_;
					{
						while (1) {
							NimStringDesc* T28_;
							NimStringDesc* T29_;
							if (!(i_5 < L_5)) goto LA27;
							c_3 = colontmp__5->data[i_5];
							T28_ = (NimStringDesc*)0;
							T29_ = (NimStringDesc*)0;
							T29_ = nsuRepeatStr(((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_6), ((NI) ((NI)((NI)(wCol->data[c_3] - (row_2->data[c_3] ? row_2->data[c_3]->Sup.len : 0)) + colGap))));
							T28_ = rawNewString(row_2->data[c_3]->Sup.len + T29_->Sup.len + 0);
appendString(T28_, row_2->data[c_3]);
appendString(T28_, T29_);
							result = resizeString(result, T28_->Sup.len + 0);
appendString(result, T28_);
							i_5 += ((NI) 1);
						} LA27: ;
					}
				}
				T30_ = (NimStringDesc*)0;
				T30_ = nsuWordWrap(row_2->data[last], wCol->data[last], NIM_TRUE, TM_XccfeXaloFBPYyo0tmMqhg_7, ((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_3));
				wrapped = nsuSplitString(T30_, ((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_3), ((NI) -1));
				T31_ = (NimStringDesc*)0;
				T32_ = (NimStringDesc*)0;
				{
					NI T35_;
					T35_ = (wrapped ? wrapped->Sup.len : 0);
					if (!(((NI) 0) < T35_)) goto LA36_;
					T32_ = copyString(wrapped->data[((NI) 0)]);
				}
				goto LA33_;
				LA36_: ;
				{
					T32_ = copyString(((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_2));
				}
				LA33_: ;
				T31_ = rawNewString(T32_->Sup.len + 1);
appendString(T31_, T32_);
appendString(T31_, ((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_3));
				result = resizeString(result, T31_->Sup.len + 0);
appendString(result, T31_);
				{
					NI j;
					NI colontmp__6;
					NI T40_;
					NI i_6;
					j = (NI)0;
					colontmp__6 = (NI)0;
					T40_ = (wrapped ? wrapped->Sup.len : 0);
					colontmp__6 = T40_;
					i_6 = ((NI) 1);
					{
						while (1) {
							NimStringDesc* T43_;
							NimStringDesc* T44_;
							if (!(i_6 < colontmp__6)) goto LA42;
							j = i_6;
							T43_ = (NimStringDesc*)0;
							T44_ = (NimStringDesc*)0;
							T44_ = nsuRepeatStr(((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_6), ((NI) (leader)));
							T43_ = rawNewString(T44_->Sup.len + wrapped->data[j]->Sup.len + 1);
appendString(T43_, T44_);
appendString(T43_, wrapped->data[j]);
appendString(T43_, ((NimStringDesc*) &TM_XccfeXaloFBPYyo0tmMqhg_3));
							result = resizeString(result, T43_->Sup.len + 0);
appendString(result, T43_);
							i_6 += ((NI) 1);
						} LA42: ;
					}
				}
				result = resizeString(result, rowSep->Sup.len + 0);
appendString(result, rowSep);
				i_4 += ((NI) 1);
			} LA22: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, cligen_textUtInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, cligen_textUtDatInit000)(void) {
static TNimNode* TM_XccfeXaloFBPYyo0tmMqhg_4[2];
static TNimNode TM_XccfeXaloFBPYyo0tmMqhg_0[3];
NTI_phjbYJtsbOIAYa9be34hhZg_.size = sizeof(tySequence_phjbYJtsbOIAYa9be34hhZg*);
NTI_phjbYJtsbOIAYa9be34hhZg_.kind = 24;
NTI_phjbYJtsbOIAYa9be34hhZg_.base = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
NTI_phjbYJtsbOIAYa9be34hhZg_.flags = 2;
NTI_phjbYJtsbOIAYa9be34hhZg_.marker = Marker_tySequence_phjbYJtsbOIAYa9be34hhZg;
NTI_RBuAPh9a4NTIgELl39cQyYUw_.size = sizeof(tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw);
NTI_RBuAPh9a4NTIgELl39cQyYUw_.kind = 17;
NTI_RBuAPh9a4NTIgELl39cQyYUw_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_XccfeXaloFBPYyo0tmMqhg_4[0] = &TM_XccfeXaloFBPYyo0tmMqhg_0[1];
TM_XccfeXaloFBPYyo0tmMqhg_0[1].kind = 1;
TM_XccfeXaloFBPYyo0tmMqhg_0[1].offset = offsetof(tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw, colonstate_);
TM_XccfeXaloFBPYyo0tmMqhg_0[1].typ = (&NTI_xHTZrq9aYs6boc9bCba0JbpQ_);
TM_XccfeXaloFBPYyo0tmMqhg_0[1].name = ":state";
TM_XccfeXaloFBPYyo0tmMqhg_4[1] = &TM_XccfeXaloFBPYyo0tmMqhg_0[2];
TM_XccfeXaloFBPYyo0tmMqhg_0[2].kind = 1;
TM_XccfeXaloFBPYyo0tmMqhg_0[2].offset = offsetof(tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw, tab1);
TM_XccfeXaloFBPYyo0tmMqhg_0[2].typ = (&NTI_phjbYJtsbOIAYa9be34hhZg_);
TM_XccfeXaloFBPYyo0tmMqhg_0[2].name = "tab1";
TM_XccfeXaloFBPYyo0tmMqhg_0[0].len = 2; TM_XccfeXaloFBPYyo0tmMqhg_0[0].kind = 2; TM_XccfeXaloFBPYyo0tmMqhg_0[0].sons = &TM_XccfeXaloFBPYyo0tmMqhg_4[0];
NTI_RBuAPh9a4NTIgELl39cQyYUw_.node = &TM_XccfeXaloFBPYyo0tmMqhg_0[0];
NTI_iwdPEwAp7UL0muQ1gtPvQw_.size = sizeof(tyObject_Env_CcolonX5CUsersX5CjoryX5CdotnimbleX5CpkgsX5Ccligenminus0dot9dot15X5CcligenX5CtextUtdotnim__RBuAPh9a4NTIgELl39cQyYUw*);
NTI_iwdPEwAp7UL0muQ1gtPvQw_.kind = 22;
NTI_iwdPEwAp7UL0muQ1gtPvQw_.base = (&NTI_RBuAPh9a4NTIgELl39cQyYUw_);
NTI_iwdPEwAp7UL0muQ1gtPvQw_.marker = Marker_tyRef_iwdPEwAp7UL0muQ1gtPvQw;
}

