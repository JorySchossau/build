/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw;
typedef struct RootObj RootObj;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA;
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
struct RootObj {
TNimType* m_type;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_CmdLineKind_53xBeLkXss00qPkOjC0PCQ;
struct tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw {
  RootObj Sup;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cmd;
NI pos;
NI off;
NIM_BOOL optsDone;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw shortNoVal;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* longNoVal;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* stopWords;
NIM_BOOL requireSep;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw sepChars;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw opChars;
NimStringDesc* sep;
tyEnum_CmdLineKind_53xBeLkXss00qPkOjC0PCQ kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
struct tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA {
NI a;
NI b;
};
typedef NimStringDesc* tyArray_24KAM9afIUgUaqBaEBB6r9bg[3];
typedef NimStringDesc* tyArray_haiLFy0nBviVTKFGuwztzQ[5];
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__SRlIwYUUH1G46Yee9aMIFAQ)(tySequence_sM4lkSb7zS6F7OVMvW9cffQ* x, tySequence_sM4lkSb7zS6F7OVMvW9cffQ* y);
N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, commandLineParams_WoBZMy8AVRATRE9bQuYWzCQ)(void);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, doShort_EyMvwNDwA69b7fmB6y7At4Q_2)(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* p);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, cur_muEitQ6q9ciX8Ocm1P0nFlA)(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* p);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_LIB_PRIVATE N_NIMCALL(void, ERR_XbL5aPQMUDVkRv2vIuD9beg)(NimStringDesc** x, NI xLen_0);
N_LIB_PRIVATE N_NIMCALL(void, write_OG3BP9aaTiau0tBdonibGTg)(FILE* f, NimStringDesc** a, NI aLen_0);
N_LIB_PRIVATE N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ_2)(FILE* f, NimStringDesc* s);
static N_INLINE(NimStringDesc*, X5BX5D__xiaaX9b4cczHG39bivOynT9bgparseopt3)(NimStringDesc* s, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__vDQySKWzgnxQdUarow6k5Qparseopt3)(NI a, NI b);
static N_INLINE(NimStringDesc*, X5BX5D__lkBUIkH7j2jb0vaXPf2frAparseopt3)(NimStringDesc* s, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x);
static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__ctxq0YSon7aLz7isCROwwQtextUt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwparseopt3)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQparseopt3)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(void, next_EyMvwNDwA69b7fmB6y7At4Q)(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* p);
N_LIB_PRIVATE N_NIMCALL(void, doLong_EyMvwNDwA69b7fmB6y7At4Q_3)(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* p);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw chars, NI start, NI last);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_EaHZBE7MCXEyHSDrWOuINw_;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTI_HDqWPvEAxZK51ZcfaeQEdg_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_53xBeLkXss00qPkOjC0PCQ_;
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_6, "\012", 1);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_8, "no data following sepChar", 25);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_9cK3Kdz3MgED9bskDLYY7WUQ_7 = {((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_8)}
;
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_9, "Expecting option key-val separator :|= after `", 46);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_10, "`", 1);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_11, "argument expected for option `", 30);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_12, "` at end of params", 18);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_13, "-", 1);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_14, "--", 2);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_15, "Empty long option key at param", 30);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_16, " (\"", 3);
STRING_LITERAL(TM_9cK3Kdz3MgED9bskDLYY7WUQ_17, "\")", 2);

N_LIB_PRIVATE N_NIMCALL(void, initOptParser_8qARkgKZOQlUtyrkENQwIw)(tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cmdline, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw shortNoVal, tySequence_sM4lkSb7zS6F7OVMvW9cffQ* longNoVal, NIM_BOOL requireSeparator, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw sepChars, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw opChars, tySequence_sM4lkSb7zS6F7OVMvW9cffQ* stopWords, tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* Result) {
{	genericReset((void*)Result, (&NTI_EaHZBE7MCXEyHSDrWOuINw_));
	(*Result).Sup.m_type = (&NTI_EaHZBE7MCXEyHSDrWOuINw_);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = eqeq__SRlIwYUUH1G46Yee9aMIFAQ(cmdline, NIM_NIL);
		if (!T3_) goto LA4_;
		unsureAsgnRef((void**) (&(*Result).cmd), commandLineParams_WoBZMy8AVRATRE9bQuYWzCQ());
		goto BeforeRet_;
	}
	LA4_: ;
	genericSeqAssign((&(*Result).cmd), cmdline, (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_));
	memcpy((void*)(*Result).shortNoVal, (NIM_CONST void*)shortNoVal, 32);
	genericSeqAssign((&(*Result).longNoVal), longNoVal, (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_));
	(*Result).requireSep = requireSeparator;
	memcpy((void*)(*Result).sepChars, (NIM_CONST void*)sepChars, 32);
	memcpy((void*)(*Result).opChars, (NIM_CONST void*)opChars, 32);
	genericSeqAssign((&(*Result).stopWords), stopWords, (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_));
	(*Result).off = ((NI) 0);
	(*Result).optsDone = NIM_FALSE;
	}BeforeRet_: ;
}

N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, cur_muEitQ6q9ciX8Ocm1P0nFlA)(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* p) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	{
		if (!((*p).off < ((*p).cmd->data[(*p).pos] ? (*p).cmd->data[(*p).pos]->Sup.len : 0))) goto LA3_;
		result = (*p).cmd->data[(*p).pos]->data[(*p).off];
	}
	goto LA1_;
	LA3_: ;
	{
		result = 0;
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, ERR_XbL5aPQMUDVkRv2vIuD9beg)(NimStringDesc** x, NI xLen_0) {
	write_OG3BP9aaTiau0tBdonibGTg(stderr, x, xLen_0);
	write_c4mGyJBvK73pdM22jiweKQ_2(stderr, ((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_6));
}

static N_INLINE(NimStringDesc*, X5BX5D__xiaaX9b4cczHG39bivOynT9bgparseopt3)(NimStringDesc* s, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x) {
	NimStringDesc* result;
	NI a;
	NI L;
	result = (NimStringDesc*)0;
	a = x.a;
	L = (NI)((NI)(x.b - a) + ((NI) 1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3;
				i = i_2;
				result->data[i] = s->data[(NI)(i + a)];
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__vDQySKWzgnxQdUarow6k5Qparseopt3)(NI a, NI b) {
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

static N_INLINE(NimStringDesc*, X5BX5D__lkBUIkH7j2jb0vaXPf2frAparseopt3)(NimStringDesc* s, tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA x) {
	NimStringDesc* result;
	NI a;
	NI L;
	result = (NimStringDesc*)0;
	a = x.a;
	L = (NI)((NI)((NI)((s ? s->Sup.len : 0) - x.b) - a) + ((NI) 1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3;
				i = i_2;
				result->data[i] = s->data[(NI)(i + a)];
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

static N_INLINE(tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA, dotdot__ctxq0YSon7aLz7isCROwwQtextUt)(NI a, NI b) {
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, doShort_EyMvwNDwA69b7fmB6y7At4Q_2)(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* p) {
	NIM_CHAR T1_;
	tyArray_24KAM9afIUgUaqBaEBB6r9bg T54_;
{	(*p).kind = ((tyEnum_CmdLineKind_53xBeLkXss00qPkOjC0PCQ) 3);
	unsureAsgnRef((void**) (&(*p).val), copyString(NIM_NIL));
	T1_ = (NIM_CHAR)0;
	T1_ = cur_muEitQ6q9ciX8Ocm1P0nFlA((&(*p)));
	unsureAsgnRef((void**) (&(*p).key), nimCharToStr(T1_));
	(*p).off += ((NI) 1);
	{
		NIM_BOOL T4_;
		NIM_CHAR T5_;
		NIM_CHAR T7_;
		NI mark;
		T4_ = (NIM_BOOL)0;
		T5_ = (NIM_CHAR)0;
		T5_ = cur_muEitQ6q9ciX8Ocm1P0nFlA((&(*p)));
		T4_ = (((*p).opChars[(NU)(((NU8)(T5_)))>>3] &(1U<<((NU)(((NU8)(T5_)))&7U)))!=0);
		if (T4_) goto LA6_;
		T7_ = (NIM_CHAR)0;
		T7_ = cur_muEitQ6q9ciX8Ocm1P0nFlA((&(*p)));
		T4_ = (((*p).sepChars[(NU)(((NU8)(T7_)))>>3] &(1U<<((NU)(((NU8)(T7_)))&7U)))!=0);
		LA6_: ;
		if (!T4_) goto LA8_;
		mark = (*p).off;
		{
			while (1) {
				NIM_BOOL T12_;
				NIM_BOOL T13_;
				NIM_CHAR T14_;
				NIM_CHAR T16_;
				NIM_CHAR T18_;
				T12_ = (NIM_BOOL)0;
				T13_ = (NIM_BOOL)0;
				T14_ = (NIM_CHAR)0;
				T14_ = cur_muEitQ6q9ciX8Ocm1P0nFlA((&(*p)));
				T13_ = !(((NU8)(T14_) == (NU8)(0)));
				if (!(T13_)) goto LA15_;
				T16_ = (NIM_CHAR)0;
				T16_ = cur_muEitQ6q9ciX8Ocm1P0nFlA((&(*p)));
				T13_ = !((((*p).sepChars[(NU)(((NU8)(T16_)))>>3] &(1U<<((NU)(((NU8)(T16_)))&7U)))!=0));
				LA15_: ;
				T12_ = T13_;
				if (!(T12_)) goto LA17_;
				T18_ = (NIM_CHAR)0;
				T18_ = cur_muEitQ6q9ciX8Ocm1P0nFlA((&(*p)));
				T12_ = (((*p).opChars[(NU)(((NU8)(T18_)))>>3] &(1U<<((NU)(((NU8)(T18_)))&7U)))!=0);
				LA17_: ;
				if (!T12_) goto LA11;
				(*p).off += ((NI) 1);
			} LA11: ;
		}
		{
			NIM_CHAR T21_;
			tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T28_;
			tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T29_;
			T21_ = (NIM_CHAR)0;
			T21_ = cur_muEitQ6q9ciX8Ocm1P0nFlA((&(*p)));
			if (!(((*p).sepChars[(NU)(((NU8)(T21_)))>>3] &(1U<<((NU)(((NU8)(T21_)))&7U)))!=0)) goto LA22_;
			{
				if (!((NI)(((*p).cmd->data[(*p).pos] ? (*p).cmd->data[(*p).pos]->Sup.len : 0) - ((NI) 2)) < (*p).off)) goto LA26_;
				ERR_XbL5aPQMUDVkRv2vIuD9beg(TM_9cK3Kdz3MgED9bskDLYY7WUQ_7, 1);
				goto BeforeRet_;
			}
			LA26_: ;
			T28_ = dotdot__vDQySKWzgnxQdUarow6k5Qparseopt3(mark, (*p).off);
			unsureAsgnRef((void**) (&(*p).sep), X5BX5D__xiaaX9b4cczHG39bivOynT9bgparseopt3((*p).cmd->data[(*p).pos], T28_));
			T29_ = dotdot__ctxq0YSon7aLz7isCROwwQtextUt((NI)((*p).off + ((NI) 1)), ((NI) 1));
			unsureAsgnRef((void**) (&(*p).val), X5BX5D__lkBUIkH7j2jb0vaXPf2frAparseopt3((*p).cmd->data[(*p).pos], T29_));
			(*p).pos += ((NI) 1);
			(*p).off = ((NI) 0);
			goto BeforeRet_;
		}
		goto LA19_;
		LA22_: ;
		{
			(*p).off = mark;
		}
		LA19_: ;
	}
	LA8_: ;
	{
		if (!(((*p).shortNoVal[(NU)(((NU8)((*p).key->data[((NI) 0)])))>>3] &(1U<<((NU)(((NU8)((*p).key->data[((NI) 0)])))&7U)))!=0)) goto LA33_;
		{
			if (!((*p).off == ((*p).cmd->data[(*p).pos] ? (*p).cmd->data[(*p).pos]->Sup.len : 0))) goto LA37_;
			(*p).off = ((NI) 0);
			(*p).pos += ((NI) 1);
		}
		LA37_: ;
		goto BeforeRet_;
	}
	LA33_: ;
	{
		tyArray_24KAM9afIUgUaqBaEBB6r9bg T43_;
		if (!(*p).requireSep) goto LA41_;
		memset((void*)T43_, 0, sizeof(T43_));
		T43_[0] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_9));
		T43_[1] = copyString((*p).key);
		T43_[2] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_10));
		ERR_XbL5aPQMUDVkRv2vIuD9beg(T43_, 3);
		goto BeforeRet_;
	}
	LA41_: ;
	{
		tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T48_;
		if (!(((NI) 0) < (NI)(((*p).cmd->data[(*p).pos] ? (*p).cmd->data[(*p).pos]->Sup.len : 0) - (*p).off))) goto LA46_;
		T48_ = dotdot__ctxq0YSon7aLz7isCROwwQtextUt((*p).off, ((NI) 1));
		unsureAsgnRef((void**) (&(*p).val), X5BX5D__lkBUIkH7j2jb0vaXPf2frAparseopt3((*p).cmd->data[(*p).pos], T48_));
		(*p).pos += ((NI) 1);
		(*p).off = ((NI) 0);
		goto BeforeRet_;
	}
	LA46_: ;
	{
		NI T51_;
		T51_ = ((*p).cmd ? (*p).cmd->Sup.len : 0);
		if (!((*p).pos < (NI)(T51_ - ((NI) 1)))) goto LA52_;
		unsureAsgnRef((void**) (&(*p).val), copyString((*p).cmd->data[(NI)((*p).pos + ((NI) 1))]));
		(*p).pos += ((NI) 2);
		(*p).off = ((NI) 0);
		goto BeforeRet_;
	}
	LA52_: ;
	memset((void*)T54_, 0, sizeof(T54_));
	T54_[0] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_11));
	T54_[1] = copyString((*p).key);
	T54_[2] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_12));
	ERR_XbL5aPQMUDVkRv2vIuD9beg(T54_, 3);
	}BeforeRet_: ;
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQparseopt3)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NI result;
{	result = (NI)0;
	{
		NimStringDesc* i;
		NI i_2;
		i = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3;
				i = a[i_2];
				{
					if (!eqStrings(i, item)) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				result += ((NI) 1);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwparseopt3)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find_9basNl9bVqn7SOf9bgUeI8TEQparseopt3(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, doLong_EyMvwNDwA69b7fmB6y7At4Q_3)(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* p) {
	NimStringDesc* param;
	NI sep;
	tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T17_;
{	(*p).kind = ((tyEnum_CmdLineKind_53xBeLkXss00qPkOjC0PCQ) 2);
	unsureAsgnRef((void**) (&(*p).val), copyString(NIM_NIL));
	param = (*p).cmd->data[(*p).pos];
	(*p).pos += ((NI) 1);
	sep = nsuFindCharSet(param, (*p).sepChars, ((NI) 0), ((NI) 0));
	{
		tyArray_haiLFy0nBviVTKFGuwztzQ T5_;
		if (!(sep == ((NI) 2))) goto LA3_;
		memset((void*)T5_, 0, sizeof(T5_));
		T5_[0] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_15));
		T5_[1] = nimIntToStr((NI)((*p).pos - ((NI) 1)));
		T5_[2] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_16));
		T5_[3] = copyString(param);
		T5_[4] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_17));
		ERR_XbL5aPQMUDVkRv2vIuD9beg(T5_, 5);
		unsureAsgnRef((void**) (&(*p).key), copyString(NIM_NIL));
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI op;
		tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T14_;
		tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T15_;
		tyObject_HSlice_x7qpDivRIi6zcMSMsudNPA T16_;
		if (!(((NI) 2) < sep)) goto LA8_;
		op = sep;
		{
			while (1) {
				NIM_BOOL T12_;
				T12_ = (NIM_BOOL)0;
				T12_ = (((NI) 2) < op);
				if (!(T12_)) goto LA13_;
				T12_ = (((*p).opChars[(NU)(((NU8)(param->data[(NI)(op - ((NI) 1))])))>>3] &(1U<<((NU)(((NU8)(param->data[(NI)(op - ((NI) 1))])))&7U)))!=0);
				LA13_: ;
				if (!T12_) goto LA11;
				op -= ((NI) 1);
			} LA11: ;
		}
		T14_ = dotdot__vDQySKWzgnxQdUarow6k5Qparseopt3(((NI) 2), (NI)(op - ((NI) 1)));
		unsureAsgnRef((void**) (&(*p).key), X5BX5D__xiaaX9b4cczHG39bivOynT9bgparseopt3(param, T14_));
		T15_ = dotdot__vDQySKWzgnxQdUarow6k5Qparseopt3(op, sep);
		unsureAsgnRef((void**) (&(*p).sep), X5BX5D__xiaaX9b4cczHG39bivOynT9bgparseopt3(param, T15_));
		T16_ = dotdot__ctxq0YSon7aLz7isCROwwQtextUt((NI)(sep + ((NI) 1)), ((NI) 1));
		unsureAsgnRef((void**) (&(*p).val), X5BX5D__lkBUIkH7j2jb0vaXPf2frAparseopt3(param, T16_));
		goto BeforeRet_;
	}
	LA8_: ;
	T17_ = dotdot__ctxq0YSon7aLz7isCROwwQtextUt(((NI) 2), ((NI) 1));
	unsureAsgnRef((void**) (&(*p).key), X5BX5D__lkBUIkH7j2jb0vaXPf2frAparseopt3(param, T17_));
	{
		NIM_BOOL T20_;
		NIM_BOOL T21_;
		T20_ = (NIM_BOOL)0;
		T21_ = (NIM_BOOL)0;
		T21_ = eqeq__SRlIwYUUH1G46Yee9aMIFAQ((*p).longNoVal, NIM_NIL);
		T20_ = !(T21_);
		if (!(T20_)) goto LA22_;
		T20_ = contains_jPdUhZfr9a8sH2V3ZBDljzwparseopt3((*p).longNoVal->data, (*p).longNoVal->Sup.len, (*p).key);
		LA22_: ;
		if (!T20_) goto LA23_;
		goto BeforeRet_;
	}
	LA23_: ;
	{
		tyArray_24KAM9afIUgUaqBaEBB6r9bg T29_;
		if (!(*p).requireSep) goto LA27_;
		memset((void*)T29_, 0, sizeof(T29_));
		T29_[0] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_9));
		T29_[1] = copyString((*p).key);
		T29_[2] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_10));
		ERR_XbL5aPQMUDVkRv2vIuD9beg(T29_, 3);
		goto BeforeRet_;
	}
	LA27_: ;
	{
		NI T32_;
		T32_ = ((*p).cmd ? (*p).cmd->Sup.len : 0);
		if (!((*p).pos < T32_)) goto LA33_;
		unsureAsgnRef((void**) (&(*p).val), copyString((*p).cmd->data[(*p).pos]));
		(*p).pos += ((NI) 1);
	}
	goto LA30_;
	LA33_: ;
	{
		NIM_BOOL T36_;
		tyArray_24KAM9afIUgUaqBaEBB6r9bg T39_;
		T36_ = (NIM_BOOL)0;
		T36_ = eqeq__SRlIwYUUH1G46Yee9aMIFAQ((*p).longNoVal, NIM_NIL);
		if (!!(T36_)) goto LA37_;
		memset((void*)T39_, 0, sizeof(T39_));
		T39_[0] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_11));
		T39_[1] = copyString((*p).key);
		T39_[2] = copyString(((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_12));
		ERR_XbL5aPQMUDVkRv2vIuD9beg(T39_, 3);
	}
	goto LA30_;
	LA37_: ;
	LA30_: ;
	}BeforeRet_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, next_EyMvwNDwA69b7fmB6y7At4Q)(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw* p) {
{	{
		if (!(((NI) 0) < (*p).off)) goto LA3_;
		doShort_EyMvwNDwA69b7fmB6y7At4Q_2(p);
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI T7_;
		T7_ = ((*p).cmd ? (*p).cmd->Sup.len : 0);
		if (!(T7_ <= (*p).pos)) goto LA8_;
		(*p).kind = ((tyEnum_CmdLineKind_53xBeLkXss00qPkOjC0PCQ) 0);
		goto BeforeRet_;
	}
	LA8_: ;
	{
		NIM_BOOL T12_;
		NIM_BOOL T13_;
		T12_ = (NIM_BOOL)0;
		T13_ = (NIM_BOOL)0;
		T13_ = nsuStartsWith((*p).cmd->data[(*p).pos], ((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_13));
		T12_ = !(T13_);
		if (T12_) goto LA14_;
		T12_ = (*p).optsDone;
		LA14_: ;
		if (!T12_) goto LA15_;
		(*p).kind = ((tyEnum_CmdLineKind_53xBeLkXss00qPkOjC0PCQ) 1);
		unsureAsgnRef((void**) (&(*p).key), copyString((*p).cmd->data[(*p).pos]));
		unsureAsgnRef((void**) (&(*p).val), copyString(NIM_NIL));
		{
			NIM_BOOL T19_;
			T19_ = (NIM_BOOL)0;
			T19_ = contains_jPdUhZfr9a8sH2V3ZBDljzwparseopt3((*p).stopWords->data, (*p).stopWords->Sup.len, (*p).cmd->data[(*p).pos]);
			if (!T19_) goto LA20_;
			(*p).optsDone = NIM_TRUE;
		}
		LA20_: ;
		(*p).pos += ((NI) 1);
		goto BeforeRet_;
	}
	LA15_: ;
	{
		NIM_BOOL T24_;
		T24_ = (NIM_BOOL)0;
		T24_ = nsuStartsWith((*p).cmd->data[(*p).pos], ((NimStringDesc*) &TM_9cK3Kdz3MgED9bskDLYY7WUQ_14));
		if (!T24_) goto LA25_;
		{
			if (!(((*p).cmd->data[(*p).pos] ? (*p).cmd->data[(*p).pos]->Sup.len : 0) == ((NI) 2))) goto LA29_;
			(*p).optsDone = NIM_TRUE;
			(*p).pos += ((NI) 1);
			next_EyMvwNDwA69b7fmB6y7At4Q(p);
			goto BeforeRet_;
		}
		LA29_: ;
		doLong_EyMvwNDwA69b7fmB6y7At4Q_3(p);
	}
	goto LA22_;
	LA25_: ;
	{
		{
			if (!(((*p).cmd->data[(*p).pos] ? (*p).cmd->data[(*p).pos]->Sup.len : 0) == ((NI) 1))) goto LA34_;
			(*p).kind = ((tyEnum_CmdLineKind_53xBeLkXss00qPkOjC0PCQ) 1);
			unsureAsgnRef((void**) (&(*p).key), copyString((*p).cmd->data[(*p).pos]));
			unsureAsgnRef((void**) (&(*p).val), copyString(NIM_NIL));
			(*p).pos += ((NI) 1);
		}
		goto LA32_;
		LA34_: ;
		{
			(*p).off = ((NI) 1);
			doShort_EyMvwNDwA69b7fmB6y7At4Q_2(p);
		}
		LA32_: ;
	}
	LA22_: ;
	}BeforeRet_: ;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, optionNormalize_CuqMuSUzk1SDZmdlJbjm7g)(NimStringDesc* s, NimStringDesc* wordSeparators) {
	NimStringDesc* result;
	tySet_tyChar_nmiMWKVIe46vacnhAFrQvw wordSeps;
	NI j;
	result = (NimStringDesc*)0;
	result = mnewString(((NI) ((s ? s->Sup.len : 0))));
	memset((void*)wordSeps, 0, sizeof(wordSeps));
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (wordSeparators ? wordSeparators->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = wordSeparators->data[i];
				wordSeps[(NU)(((NU8)(c)))>>3] |=(1U<<(((NU8)(c))&7U));
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result->data[((NI) 0)] = s->data[((NI) 0)];
	j = ((NI) 1);
	{
		NI i_2;
		NI colontmp_;
		NI res;
		i_2 = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA6;
				i_2 = res;
				{
					if (!(((NU8)(s->data[i_2])) >= ((NU8)(65)) && ((NU8)(s->data[i_2])) <= ((NU8)(90)))) goto LA9_;
					result->data[j] = ((NIM_CHAR) (((NI) ((NI)(((NU8)(s->data[i_2])) + ((NI) 32))))));
					j += ((NI) 1);
				}
				goto LA7_;
				LA9_: ;
				{
					if (!!(((wordSeps[(NU)(((NU8)(s->data[i_2])))>>3] &(1U<<((NU)(((NU8)(s->data[i_2])))&7U)))!=0))) goto LA12_;
					result->data[j] = s->data[i_2];
					j += ((NI) 1);
				}
				goto LA7_;
				LA12_: ;
				LA7_: ;
				res += ((NI) 1);
			} LA6: ;
		}
	}
	{
		if (!!((j == (s ? s->Sup.len : 0)))) goto LA16_;
		result = setLengthStr(result, ((NI) (j)));
	}
	LA16_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, cligen_parseopt3Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, cligen_parseopt3DatInit000)(void) {
static TNimNode* TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[14];
static TNimNode* TM_9cK3Kdz3MgED9bskDLYY7WUQ_3[4];
NI TM_9cK3Kdz3MgED9bskDLYY7WUQ_5;
static char* NIM_CONST TM_9cK3Kdz3MgED9bskDLYY7WUQ_4[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[20];
NTI_EaHZBE7MCXEyHSDrWOuINw_.size = sizeof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw);
NTI_EaHZBE7MCXEyHSDrWOuINw_.kind = 17;
NTI_EaHZBE7MCXEyHSDrWOuINw_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[0] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[1];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[1].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[1].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, cmd);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[1].typ = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[1].name = "cmd";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[1] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[2];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[2].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[2].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, pos);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[2].name = "pos";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[2] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[3];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[3].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[3].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, off);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[3].name = "off";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[3] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[4];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[4].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[4].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, optsDone);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[4].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[4].name = "optsDone";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[4] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[5];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[5].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[5].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, shortNoVal);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[5].typ = (&NTI_HDqWPvEAxZK51ZcfaeQEdg_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[5].name = "shortNoVal";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[5] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[6];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[6].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[6].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, longNoVal);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[6].typ = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[6].name = "longNoVal";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[6] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[7];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[7].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[7].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, stopWords);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[7].typ = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[7].name = "stopWords";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[7] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[8];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[8].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[8].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, requireSep);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[8].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[8].name = "requireSep";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[8] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[9];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[9].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[9].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, sepChars);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[9].typ = (&NTI_HDqWPvEAxZK51ZcfaeQEdg_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[9].name = "sepChars";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[9] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[10];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[10].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[10].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, opChars);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[10].typ = (&NTI_HDqWPvEAxZK51ZcfaeQEdg_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[10].name = "opChars";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[10] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[11];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[11].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[11].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, sep);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[11].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[11].name = "sep";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[11] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[12];
NTI_53xBeLkXss00qPkOjC0PCQ_.size = sizeof(tyEnum_CmdLineKind_53xBeLkXss00qPkOjC0PCQ);
NTI_53xBeLkXss00qPkOjC0PCQ_.kind = 14;
NTI_53xBeLkXss00qPkOjC0PCQ_.base = 0;
NTI_53xBeLkXss00qPkOjC0PCQ_.flags = 3;
for (TM_9cK3Kdz3MgED9bskDLYY7WUQ_5 = 0; TM_9cK3Kdz3MgED9bskDLYY7WUQ_5 < 4; TM_9cK3Kdz3MgED9bskDLYY7WUQ_5++) {
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[TM_9cK3Kdz3MgED9bskDLYY7WUQ_5+13].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[TM_9cK3Kdz3MgED9bskDLYY7WUQ_5+13].offset = TM_9cK3Kdz3MgED9bskDLYY7WUQ_5;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[TM_9cK3Kdz3MgED9bskDLYY7WUQ_5+13].name = TM_9cK3Kdz3MgED9bskDLYY7WUQ_4[TM_9cK3Kdz3MgED9bskDLYY7WUQ_5];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_3[TM_9cK3Kdz3MgED9bskDLYY7WUQ_5] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[TM_9cK3Kdz3MgED9bskDLYY7WUQ_5+13];
}
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[17].len = 4; TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[17].kind = 2; TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[17].sons = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_3[0];
NTI_53xBeLkXss00qPkOjC0PCQ_.node = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[17];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[12].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[12].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, kind);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[12].typ = (&NTI_53xBeLkXss00qPkOjC0PCQ_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[12].name = "kind";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[12] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[18];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[18].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[18].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, key);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[18].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[18].name = "key";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[13] = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[19];
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[19].kind = 1;
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[19].offset = offsetof(tyObject_OptParser_EaHZBE7MCXEyHSDrWOuINw, val);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[19].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[19].name = "val";
TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[0].len = 14; TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[0].kind = 2; TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[0].sons = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_2[0];
NTI_EaHZBE7MCXEyHSDrWOuINw_.node = &TM_9cK3Kdz3MgED9bskDLYY7WUQ_0[0];
}

