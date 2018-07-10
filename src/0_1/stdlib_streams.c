/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef N_NIMCALL_PTR(void, tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_KjFcmLOhf4VQvVcyLJWXZw) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(void, tyProc_jlOYFw9cHausuCbPoWx2iiA) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NI, tyProc_tjaJtoUzLe1BMUbItlcGhQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc_b9bsIuILxTLVZHPvJBW187A) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ {
  RootObj Sup;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q closeImpl;
tyProc_KjFcmLOhf4VQvVcyLJWXZw atEndImpl;
tyProc_jlOYFw9cHausuCbPoWx2iiA setPositionImpl;
tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ getPositionImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ readDataImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ peekDataImpl;
tyProc_b9bsIuILxTLVZHPvJBW187A writeDataImpl;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q flushImpl;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, readChar_MXNOkfw9cIUOi4sewWv9cidw)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_LIB_PRIVATE N_NIMCALL(NI, readData_Gnwdizh7H5Q9cYivUoGHrVA)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_RShkcoDOPnoCVhtpN1hDPQ_;
TNimType NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q_;
TNimType NTI_KjFcmLOhf4VQvVcyLJWXZw_;
TNimType NTI_jlOYFw9cHausuCbPoWx2iiA_;
TNimType NTI_Xzm85qBLb9cf9cu8VOfAr8PQ_;
TNimType NTI_tjaJtoUzLe1BMUbItlcGhQ_;
TNimType NTI_b9bsIuILxTLVZHPvJBW187A_;

N_LIB_PRIVATE N_NIMCALL(NI, readData_Gnwdizh7H5Q9cYivUoGHrVA)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen) {
	NI result;
	result = (NI)0;
	result = (*s).readDataImpl(s, buffer, bufLen);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, readChar_MXNOkfw9cIUOi4sewWv9cidw)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = readData_Gnwdizh7H5Q9cYivUoGHrVA(s, ((void*) ((&result))), ((NI) 1));
		if (!!((T3_ == ((NI) 1)))) goto LA4_;
		result = 0;
	}
	LA4_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine_y89bfL07uXzOjT5XgI50WmQ)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NimStringDesc** line) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	(*line) = setLengthStr((*line), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c;
			c = readChar_MXNOkfw9cIUOi4sewWv9cidw(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5_;
				c = readChar_MXNOkfw9cIUOi4sewWv9cidw(s);
				goto LA1;
			}
			goto LA3_;
			LA5_: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA8_;
				goto LA1;
			}
			goto LA3_;
			LA8_: ;
			{
				if (!((NU8)(c) == (NU8)(0))) goto LA11_;
				{
					if (!(((NI) 0) < ((*line) ? (*line)->Sup.len : 0))) goto LA15_;
					goto LA1;
				}
				goto LA13_;
				LA15_: ;
				{
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA13_: ;
			}
			goto LA3_;
			LA11_: ;
			LA3_: ;
			(*line) = addChar((*line), c);
		}
	} LA1: ;
	result = NIM_TRUE;
	}BeforeRet_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void) {
static TNimNode* TM_Ue7tnBcsL67VCiRfvt8q0A_2[8];
static TNimNode TM_Ue7tnBcsL67VCiRfvt8q0A_0[9];
NTI_RShkcoDOPnoCVhtpN1hDPQ_.size = sizeof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ);
NTI_RShkcoDOPnoCVhtpN1hDPQ_.kind = 17;
NTI_RShkcoDOPnoCVhtpN1hDPQ_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
NTI_RShkcoDOPnoCVhtpN1hDPQ_.flags = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_2[0] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[1];
NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q_.size = sizeof(tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q);
NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q_.kind = 25;
NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q_.base = 0;
NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[1].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[1].offset = offsetof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ, closeImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[1].typ = (&NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[1].name = "closeImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[1] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[2];
NTI_KjFcmLOhf4VQvVcyLJWXZw_.size = sizeof(tyProc_KjFcmLOhf4VQvVcyLJWXZw);
NTI_KjFcmLOhf4VQvVcyLJWXZw_.kind = 25;
NTI_KjFcmLOhf4VQvVcyLJWXZw_.base = 0;
NTI_KjFcmLOhf4VQvVcyLJWXZw_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[2].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[2].offset = offsetof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ, atEndImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[2].typ = (&NTI_KjFcmLOhf4VQvVcyLJWXZw_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[2].name = "atEndImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[2] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[3];
NTI_jlOYFw9cHausuCbPoWx2iiA_.size = sizeof(tyProc_jlOYFw9cHausuCbPoWx2iiA);
NTI_jlOYFw9cHausuCbPoWx2iiA_.kind = 25;
NTI_jlOYFw9cHausuCbPoWx2iiA_.base = 0;
NTI_jlOYFw9cHausuCbPoWx2iiA_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[3].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[3].offset = offsetof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ, setPositionImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[3].typ = (&NTI_jlOYFw9cHausuCbPoWx2iiA_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[3].name = "setPositionImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[3] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[4];
NTI_Xzm85qBLb9cf9cu8VOfAr8PQ_.size = sizeof(tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ);
NTI_Xzm85qBLb9cf9cu8VOfAr8PQ_.kind = 25;
NTI_Xzm85qBLb9cf9cu8VOfAr8PQ_.base = 0;
NTI_Xzm85qBLb9cf9cu8VOfAr8PQ_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[4].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[4].offset = offsetof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ, getPositionImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[4].typ = (&NTI_Xzm85qBLb9cf9cu8VOfAr8PQ_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[4].name = "getPositionImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[4] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[5];
NTI_tjaJtoUzLe1BMUbItlcGhQ_.size = sizeof(tyProc_tjaJtoUzLe1BMUbItlcGhQ);
NTI_tjaJtoUzLe1BMUbItlcGhQ_.kind = 25;
NTI_tjaJtoUzLe1BMUbItlcGhQ_.base = 0;
NTI_tjaJtoUzLe1BMUbItlcGhQ_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[5].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[5].offset = offsetof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ, readDataImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[5].typ = (&NTI_tjaJtoUzLe1BMUbItlcGhQ_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[5].name = "readDataImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[5] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[6];
TM_Ue7tnBcsL67VCiRfvt8q0A_0[6].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[6].offset = offsetof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ, peekDataImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[6].typ = (&NTI_tjaJtoUzLe1BMUbItlcGhQ_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[6].name = "peekDataImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[6] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[7];
NTI_b9bsIuILxTLVZHPvJBW187A_.size = sizeof(tyProc_b9bsIuILxTLVZHPvJBW187A);
NTI_b9bsIuILxTLVZHPvJBW187A_.kind = 25;
NTI_b9bsIuILxTLVZHPvJBW187A_.base = 0;
NTI_b9bsIuILxTLVZHPvJBW187A_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[7].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[7].offset = offsetof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ, writeDataImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[7].typ = (&NTI_b9bsIuILxTLVZHPvJBW187A_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[7].name = "writeDataImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[7] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[8];
TM_Ue7tnBcsL67VCiRfvt8q0A_0[8].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[8].offset = offsetof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ, flushImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[8].typ = (&NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[8].name = "flushImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_0[0].len = 8; TM_Ue7tnBcsL67VCiRfvt8q0A_0[0].kind = 2; TM_Ue7tnBcsL67VCiRfvt8q0A_0[0].sons = &TM_Ue7tnBcsL67VCiRfvt8q0A_2[0];
NTI_RShkcoDOPnoCVhtpN1hDPQ_.node = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[0];
}

