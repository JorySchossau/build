/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <windows.h>
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
typedef struct tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw;
typedef struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct Exception Exception;
typedef struct tySequence_WF89a8QyKeDCh4DYWTmSiBg tySequence_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TSafePoint TSafePoint;
typedef struct GcFrameHeader GcFrameHeader;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg {
NimStringDesc* key;
NimStringDesc* val;
NimStringDesc* sep;
NimStringDesc* parNm;
NimStringDesc* parSh;
NI parCount;
NI parReq;
NimStringDesc* mand;
NimStringDesc* help;
NimStringDesc* delimit;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw shortNoVal;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* longNoVal;
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
typedef NimStringDesc* tyArray_24KAM9afIUgUaqBaEBB6r9bg[3];
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
typedef NF tyArray_iV2wVpdhi9coq9cstlcqapXg[2001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_iV2wVpdhi9coq9cstlcqapXg tls;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* head;
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* tail;
CRITICAL_SECTION lock;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw toDispose;
NI gcThreadId;
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
typedef NimStringDesc* tyArray_Re75IspeoxXy2oCZHwcRrA[2];
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NI align;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9agrCtWKhCnWWMJpKKugJag[16];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9agrCtWKhCnWWMJpKKugJag bits;
};
typedef void* tyArray_Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* next;
NI dataLen;
tyArray_Rrw59cMvNu8cDA9cQDh4v2oA d;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_hgOQFBQi19biNdOUUkFOOxA) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_WF89a8QyKeDCh4DYWTmSiBg {
  TGenericSeq Sup;
  tyProc_IIomJ6ptE6vfJ5zRbATgkQ data[SEQ_DECL_SIZE];
};
typedef struct {tyProc_hgOQFBQi19biNdOUUkFOOxA localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
tySequence_WF89a8QyKeDCh4DYWTmSiBg* threadDestructionHandlers_8OmU3x0fNdA0DLtOmU3kWw;
NI threadId_wzrdPYhtL9czkCWS4o9an9cRw;
TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
GcFrameHeader* gcFramePtr_ot48iojqko9aFxGhyjjjVaA;
tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NIM_BOOL envComputed_OC1kQm9aRvX8VnmaXglp57Q;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* environment_rnCB7Cc69bd2mlM49cn9czO2Q;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* ownArgv_WVJ54JSHy7VxacV39bwBPFA;
} NimThreadVars;
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, argKeys_ldmSjxOmtrgGS6fyrYn28Q)(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg* a, NimStringDesc* argSep);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void*, GetThreadLocalVars)(void);
N_LIB_PRIVATE N_NIMCALL(void*, threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg)(NI32 dwTlsIndex);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, argDf_jmiRhewuEtou1s3Z7IdwjQ)(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg* a, NimStringDesc* dv);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimEscape_9aWigKJHRj2F8BfGpWue9bNw)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, addEscapedChar_idr49a9aRlvTkf40D5KCA29bgargcvt)(NimStringDesc** s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_LIB_PRIVATE N_NIMCALL(void, ERR_mq5c5RmYH9ae9bm3Bx0pObiw)(NimStringDesc** x, NI xLen_0);
N_LIB_PRIVATE N_NIMCALL(void, write_OG3BP9aaTiau0tBdonibGTg)(FILE* f, NimStringDesc** a, NI aLen_0);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToLowerAsciiStr)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwsystem)(void* a, void* b, NI size);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
TNimType NTI_QVcnYYRJHH6P2DXl8CegPg_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_nmiMWKVIe46vacnhAFrQvw_;
TNimType NTI_HDqWPvEAxZK51ZcfaeQEdg_;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern NI32 globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_3, "-$1$3, --$2$3", 13);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_4, "--", 2);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_5, "=", 1);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_6, "string", 6);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_7, "\\x", 2);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_8, "0123456789ABCDEF", 16);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_9, "\\\\", 2);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_10, "\\\'", 2);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_11, "\\\"", 2);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_12, "", 0);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_13, "bool", 4);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_14, "Bad value nil for string param \"$1\"\012$2", 38);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_15, "t", 1);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_16, "true", 4);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_17, "yes", 3);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_18, "y", 1);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_19, "1", 1);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_20, "on", 2);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_21, "f", 1);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_22, "false", 5);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_23, "no", 2);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_24, "n", 1);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_25, "0", 1);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_26, "off", 3);
STRING_LITERAL(TM_i653W4H9bwOcZkwSy9aRLBfg_27, "Bool option \"$1\" non-boolean argument (\"$2\")\012$3", 47);

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, argKeys_ldmSjxOmtrgGS6fyrYn28Q)(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg* a, NimStringDesc* argSep) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		tyArray_24KAM9afIUgUaqBaEBB6r9bg T5_;
		if (!(((NI) 0) < ((*a).parSh ? (*a).parSh->Sup.len : 0))) goto LA3_;
		memset((void*)T5_, 0, sizeof(T5_));
		T5_[0] = copyString((*a).parSh);
		T5_[1] = copyString((*a).parNm);
		T5_[2] = copyString(argSep);
		result = nsuFormatOpenArray(((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_3), T5_, 3);
	}
	goto LA1_;
	LA3_: ;
	{
		NimStringDesc* T7_;
		T7_ = (NimStringDesc*)0;
		T7_ = rawNewString((*a).parNm->Sup.len + argSep->Sup.len + 2);
appendString(T7_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_4));
appendString(T7_, (*a).parNm);
appendString(T7_, argSep);
		result = T7_;
	}
	LA1_: ;
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void*, GetThreadLocalVars)(void) {
	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg(globalsSlot_ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&NimTV_->gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU32)((*c_2).refcount) < (NU32)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, argDf_jmiRhewuEtou1s3Z7IdwjQ)(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg* a, NimStringDesc* dv) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		if (!!(((*a).parReq == ((NI) 0)))) goto LA3_;
		result = copyString((*a).mand);
	}
	goto LA1_;
	LA3_: ;
	{
		result = copyString(dv);
	}
	LA1_: ;
	return result;
}

static N_INLINE(void, addEscapedChar_idr49a9aRlvTkf40D5KCA29bgargcvt)(NimStringDesc** s, NIM_CHAR c) {
	switch (((NU8)(c))) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 127:
	case 128:
	case 129:
	case 130:
	case 131:
	case 132:
	case 133:
	case 134:
	case 135:
	case 136:
	case 137:
	case 138:
	case 139:
	case 140:
	case 141:
	case 142:
	case 143:
	case 144:
	case 145:
	case 146:
	case 147:
	case 148:
	case 149:
	case 150:
	case 151:
	case 152:
	case 153:
	case 154:
	case 155:
	case 156:
	case 157:
	case 158:
	case 159:
	case 160:
	case 161:
	case 162:
	case 163:
	case 164:
	case 165:
	case 166:
	case 167:
	case 168:
	case 169:
	case 170:
	case 171:
	case 172:
	case 173:
	case 174:
	case 175:
	case 176:
	case 177:
	case 178:
	case 179:
	case 180:
	case 181:
	case 182:
	case 183:
	case 184:
	case 185:
	case 186:
	case 187:
	case 188:
	case 189:
	case 190:
	case 191:
	case 192:
	case 193:
	case 194:
	case 195:
	case 196:
	case 197:
	case 198:
	case 199:
	case 200:
	case 201:
	case 202:
	case 203:
	case 204:
	case 205:
	case 206:
	case 207:
	case 208:
	case 209:
	case 210:
	case 211:
	case 212:
	case 213:
	case 214:
	case 215:
	case 216:
	case 217:
	case 218:
	case 219:
	case 220:
	case 221:
	case 222:
	case 223:
	case 224:
	case 225:
	case 226:
	case 227:
	case 228:
	case 229:
	case 230:
	case 231:
	case 232:
	case 233:
	case 234:
	case 235:
	case 236:
	case 237:
	case 238:
	case 239:
	case 240:
	case 241:
	case 242:
	case 243:
	case 244:
	case 245:
	case 246:
	case 247:
	case 248:
	case 249:
	case 250:
	case 251:
	case 252:
	case 253:
	case 254:
	case 255:
	{
		NI n;
		(*s) = resizeString((*s), 2);
appendString((*s), ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_7));
		n = ((NU8)(c));
		(*s) = addChar((*s), ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_8)->data[(NI)((NU32)((NI)(n & ((NI) 240))) >> (NU32)(((NI) 4)))]);
		(*s) = addChar((*s), ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_8)->data[(NI)(n & ((NI) 15))]);
	}
	break;
	case 92:
	{
		(*s) = resizeString((*s), 2);
appendString((*s), ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_9));
	}
	break;
	case 39:
	{
		(*s) = resizeString((*s), 2);
appendString((*s), ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_10));
	}
	break;
	case 34:
	{
		(*s) = resizeString((*s), 2);
appendString((*s), ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_11));
	}
	break;
	default:
	{
		(*s) = addChar((*s), c);
	}
	break;
	}
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimEscape_9aWigKJHRj2F8BfGpWue9bNw)(NimStringDesc* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((NI)((NI)((s ? s->Sup.len : 0) + ((NI) 2)) + (NI)((NU32)((s ? s->Sup.len : 0)) >> (NU32)(((NI) 2)))))));
	result = addChar(result, 34);
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s->data[i];
				addEscapedChar_idr49a9aRlvTkf40D5KCA29bgargcvt((&result), c);
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, argHelp_VTqqkpEeNcZA4sH1tJnnyA)(NimStringDesc* dfl, tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg* a) {
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* result;
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
	result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 3);
	asgnRefNoCycle((void**) (&result->data[0]), argKeys_ldmSjxOmtrgGS6fyrYn28Q((&(*a)), ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_5)));
	T1_ = (NimStringDesc*)0;
	T1_ = result->data[1]; result->data[1] = copyStringRC1(((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_6));
	if (T1_) nimGCunrefNoCycle(T1_);
	T2_ = (NimStringDesc*)0;
	T2_ = nimEscape_9aWigKJHRj2F8BfGpWue9bNw(dfl);
	asgnRefNoCycle((void**) (&result->data[2]), argDf_jmiRhewuEtou1s3Z7IdwjQ((&(*a)), T2_));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, argHelp_9cMZAyTbb9c9bKS6DC9aO7wAdQ)(NIM_BOOL dfl, tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg* a) {
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* result;
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	NI T7_;
	NimStringDesc* T8_;
	result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
	result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 3);
	asgnRefNoCycle((void**) (&result->data[0]), argKeys_ldmSjxOmtrgGS6fyrYn28Q((&(*a)), ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_12)));
	T1_ = (NimStringDesc*)0;
	T1_ = result->data[1]; result->data[1] = copyStringRC1(((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_13));
	if (T1_) nimGCunrefNoCycle(T1_);
	T2_ = (NimStringDesc*)0;
	T2_ = nimBoolToStr(dfl);
	asgnRefNoCycle((void**) (&result->data[2]), argDf_jmiRhewuEtou1s3Z7IdwjQ((&(*a)), T2_));
	{
		if (!(((NI) 0) < ((*a).parSh ? (*a).parSh->Sup.len : 0))) goto LA5_;
		(*a).shortNoVal[(NU)(((NU8)((*a).parSh->data[((NI) 0)])))>>3] |=(1U<<(((NU8)((*a).parSh->data[((NI) 0)]))&7U));
	}
	LA5_: ;
	(*a).longNoVal = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&((*a).longNoVal)->Sup, sizeof(NimStringDesc*));
	T7_ = (*a).longNoVal->Sup.len++;
	T8_ = (NimStringDesc*)0;
	T8_ = (*a).longNoVal->data[T7_]; (*a).longNoVal->data[T7_] = copyStringRC1((*a).parNm);
	if (T8_) nimGCunrefNoCycle(T8_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, ERR_mq5c5RmYH9ae9bm3Bx0pObiw)(NimStringDesc** x, NI xLen_0) {
	write_OG3BP9aaTiau0tBdonibGTg(stderr, x, xLen_0);
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, argParse_H2EBIpvsLhvjtB9bxggORvA)(NimStringDesc** dst, NimStringDesc* dfl, tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg* a) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		tyArray_nHXaesL0DJZHyVS07ARPRA T5_;
		tyArray_Re75IspeoxXy2oCZHwcRrA T6_;
		if (!((*a).val == NIM_NIL)) goto LA3_;
		memset((void*)T5_, 0, sizeof(T5_));
		memset((void*)T6_, 0, sizeof(T6_));
		T6_[0] = copyString((*a).key);
		T6_[1] = copyString((*a).help);
		T5_[0] = nsuFormatOpenArray(((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_14), T6_, 2);
		ERR_mq5c5RmYH9ae9bm3Bx0pObiw(T5_, 1);
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!(((NI) 0) < ((*a).sep ? (*a).sep->Sup.len : 0))) goto LA9_;
		switch (((NU8)((*a).sep->data[((NI) 0)]))) {
		case 43:
		case 38:
		{
			(*dst) = resizeString((*dst), (*a).val->Sup.len + 0);
appendString((*dst), (*a).val);
		}
		break;
		case 94:
		{
			NimStringDesc* T13_;
			T13_ = (NimStringDesc*)0;
			T13_ = rawNewString((*a).val->Sup.len + (*dst)->Sup.len + 0);
appendString(T13_, (*a).val);
appendString(T13_, (*dst));
			unsureAsgnRef((void**) (&(*dst)), T13_);
		}
		break;
		default:
		{
			unsureAsgnRef((void**) (&(*dst)), copyString((*a).val));
		}
		break;
		}
	}
	goto LA7_;
	LA9_: ;
	{
		unsureAsgnRef((void**) (&(*dst)), copyString((*a).val));
	}
	LA7_: ;
	result = NIM_TRUE;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwsystem)(void* a, void* b, NI size) {
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
	T11_ = equalMem_DCrUjdaMvFDHaR1hs7sQGwsystem(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, argParse_HNUFnbMaWXdWoVyp3fjyvA)(NIM_BOOL* dst, NIM_BOOL dfl, tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg* a) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NimStringDesc* T5_;
		if (!(((NI) 0) < ((*a).val ? (*a).val->Sup.len : 0))) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = nsuToLowerAsciiStr((*a).val);
		switch (hashString(T5_) & 15) {
		case 0: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_17))) goto LA6_;
break;
		case 1: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_24))) goto LA7_;
break;
		case 2: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_22))) goto LA7_;
break;
		case 5: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_16))) goto LA6_;
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_23))) goto LA7_;
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_26))) goto LA7_;
break;
		case 8: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_18))) goto LA6_;
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_20))) goto LA6_;
break;
		case 9: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_19))) goto LA6_;
break;
		case 11: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_25))) goto LA7_;
break;
		case 14: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_21))) goto LA7_;
break;
		case 15: 
if (eqStrings(T5_, ((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_15))) goto LA6_;
break;
		}
		goto LA8_;
		LA6_: ;
		{
			(*dst) = NIM_TRUE;
		}
		goto LA9_;
		LA7_: ;
		{
			(*dst) = NIM_FALSE;
		}
		goto LA9_;
		LA8_: ;
		{
			tyArray_nHXaesL0DJZHyVS07ARPRA T13_;
			tyArray_24KAM9afIUgUaqBaEBB6r9bg T14_;
			memset((void*)T13_, 0, sizeof(T13_));
			memset((void*)T14_, 0, sizeof(T14_));
			T14_[0] = copyString((*a).key);
			T14_[1] = copyString((*a).val);
			T14_[2] = copyString((*a).help);
			T13_[0] = nsuFormatOpenArray(((NimStringDesc*) &TM_i653W4H9bwOcZkwSy9aRLBfg_27), T14_, 3);
			ERR_mq5c5RmYH9ae9bm3Bx0pObiw(T13_, 1);
			result = NIM_FALSE;
			goto BeforeRet_;
		}
		LA9_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		(*dst) = !(dfl);
	}
	LA1_: ;
	result = NIM_TRUE;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, cligen_argcvtInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, cligen_argcvtDatInit000)(void) {
static TNimNode* TM_i653W4H9bwOcZkwSy9aRLBfg_2[12];
static TNimNode TM_i653W4H9bwOcZkwSy9aRLBfg_0[14];
NTI_QVcnYYRJHH6P2DXl8CegPg_.size = sizeof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg);
NTI_QVcnYYRJHH6P2DXl8CegPg_.kind = 18;
NTI_QVcnYYRJHH6P2DXl8CegPg_.base = 0;
NTI_QVcnYYRJHH6P2DXl8CegPg_.flags = 2;
TM_i653W4H9bwOcZkwSy9aRLBfg_2[0] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[1];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[1].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[1].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, key);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[1].name = "key";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[1] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[2];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[2].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[2].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, val);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[2].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[2].name = "val";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[2] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[3];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[3].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[3].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, sep);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[3].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[3].name = "sep";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[3] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[4];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[4].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[4].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, parNm);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[4].name = "parNm";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[4] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[5];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[5].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[5].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, parSh);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[5].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[5].name = "parSh";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[5] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[6];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[6].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[6].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, parCount);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[6].name = "parCount";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[6] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[7];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[7].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[7].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, parReq);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[7].name = "parReq";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[7] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[8];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[8].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[8].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, mand);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[8].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[8].name = "mand";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[8] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[9];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[9].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[9].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, help);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[9].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[9].name = "help";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[9] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[10];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[10].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[10].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, delimit);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[10].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[10].name = "delimit";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[10] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[11];
NTI_HDqWPvEAxZK51ZcfaeQEdg_.size = sizeof(tySet_tyChar_nmiMWKVIe46vacnhAFrQvw);
NTI_HDqWPvEAxZK51ZcfaeQEdg_.kind = 19;
NTI_HDqWPvEAxZK51ZcfaeQEdg_.base = (&NTI_nmiMWKVIe46vacnhAFrQvw_);
NTI_HDqWPvEAxZK51ZcfaeQEdg_.flags = 3;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[12].len = 0; TM_i653W4H9bwOcZkwSy9aRLBfg_0[12].kind = 0;
NTI_HDqWPvEAxZK51ZcfaeQEdg_.node = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[12];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[11].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[11].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, shortNoVal);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[11].typ = (&NTI_HDqWPvEAxZK51ZcfaeQEdg_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[11].name = "shortNoVal";
TM_i653W4H9bwOcZkwSy9aRLBfg_2[11] = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[13];
TM_i653W4H9bwOcZkwSy9aRLBfg_0[13].kind = 1;
TM_i653W4H9bwOcZkwSy9aRLBfg_0[13].offset = offsetof(tyObject_ArgcvtParams_QVcnYYRJHH6P2DXl8CegPg, longNoVal);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[13].typ = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
TM_i653W4H9bwOcZkwSy9aRLBfg_0[13].name = "longNoVal";
TM_i653W4H9bwOcZkwSy9aRLBfg_0[0].len = 12; TM_i653W4H9bwOcZkwSy9aRLBfg_0[0].kind = 2; TM_i653W4H9bwOcZkwSy9aRLBfg_0[0].sons = &TM_i653W4H9bwOcZkwSy9aRLBfg_2[0];
NTI_QVcnYYRJHH6P2DXl8CegPg_.node = &TM_i653W4H9bwOcZkwSy9aRLBfg_0[0];
}

