/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
#include <sys/types.h>
#define _GNU_SOURCE
#include <pthread.h>
#include <sys/types.h>
                          #include <pthread.h>
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
typedef struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ;
typedef struct RootObj RootObj;
typedef struct tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw;
typedef struct Exception Exception;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ;
typedef struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
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
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tySequence_WF89a8QyKeDCh4DYWTmSiBg tySequence_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct GcFrameHeader GcFrameHeader;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
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
struct tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw {
  tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ Sup;
FILE* f;
};
typedef NU8 tyEnum_FileSeekPos_I9aQjuvWxs8BspGbxwsngWw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_KeeAOYBd84Ofsw6Y7LizaQ;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
typedef NF tyArray_iV2wVpdhi9coq9cstlcqapXg[2001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_iV2wVpdhi9coq9cstlcqapXg tls;
};
struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg {
  Exception Sup;
};
struct tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ {
  tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg Sup;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
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
pthread_mutex_t lock;
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
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
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
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
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
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
struct tySequence_WF89a8QyKeDCh4DYWTmSiBg {
  TGenericSeq Sup;
  tyProc_IIomJ6ptE6vfJ5zRbATgkQ data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
NI gFG_g7w4T3anr20OMlWloNx2tQ;
NI gBG_dgmeknpHWrtwqMJGQAp9atA;
} NimThreadVars;
static N_NIMCALL(void, Marker_tyRef_r3Wc5tOoxP8rz1DvGVTUvw)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef_Z018yRjOOerOKfp9aM3JSOg)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(void, fsClose_qQbp4Nsuc4ou9bqUUbaqJ6A)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_LIB_PRIVATE N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, fsAtEnd_acl02gpfK9cCD8utiP6NxdA)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile_OpxMRqWNQzmofyVQsNQqVA)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, fsSetPosition_C0SEQJWfadg6oK29b8FuMZg)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, setFilePos_YAngY19cHH2nZ9bqhMgAHz8Q)(FILE* f, NI64 pos, tyEnum_FileSeekPos_I9aQjuvWxs8BspGbxwsngWw relativeTo);
N_LIB_PRIVATE N_NIMCALL(NI, fsGetPosition_ht6Fg1Bmvqnb8CP4WayC2A)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos_XePgC9ccBXCgb9bEHXZpnMqA)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NI, fsReadData_7P4Enb2Vt3iOCL5K9cnGqYw)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer_1qjbrvfnPD4PaIieHVDvhw_2)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, fsPeekData_7P4Enb2Vt3iOCL5K9cnGqYw_2)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_LIB_PRIVATE N_NIMCALL(void, fsWriteData_mrtMhMXvYVpi5Svw9bWueBw)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer_1qjbrvfnPD4PaIieHVDvhw)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ*, newEIO_lOrpXone7dPkEAOURnfgBw)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_LIB_PRIVATE N_NIMCALL(void, fsFlush_qQbp4Nsuc4ou9bqUUbaqJ6A_2)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_LIB_PRIVATE N_NIMCALL(void, flushFile_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
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
TNimType NTI_r3Wc5tOoxP8rz1DvGVTUvw_;
TNimType NTI_qoDM8xYRV40zbhS9acPNT9bw_;
extern TNimType NTI_7BHnQsEj49a9c6QtudqWTo1w_;
TNimType NTI_Z018yRjOOerOKfp9aM3JSOg_;
extern pthread_key_t globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
extern TNimType NTI_HX2M9cQhE3jaovp9aYJDdslA_;
extern TNimType NTI_9czoZw3pzPyrBmb5zTHY1OQ_;
STRING_LITERAL(TM_Ue7tnBcsL67VCiRfvt8q0A_4, "cannot write to stream", 22);
static N_NIMCALL(void, Marker_tyRef_r3Wc5tOoxP8rz1DvGVTUvw)(void* p, NI op) {
	tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* a;
	a = (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ*)p;
}
static N_NIMCALL(void, Marker_tyRef_Z018yRjOOerOKfp9aM3JSOg)(void* p, NI op) {
	tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw* a;
	a = (tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*)p;
}

N_LIB_PRIVATE N_NIMCALL(void, fsClose_qQbp4Nsuc4ou9bqUUbaqJ6A)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s) {
	{
		if (!!(((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f == NIM_NIL))) goto LA3_;
		close_BWnr8V7RERYno9bIdPmw8Hw_2((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f);
		(*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f = NIM_NIL;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, fsAtEnd_acl02gpfK9cCD8utiP6NxdA)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	result = endOfFile_OpxMRqWNQzmofyVQsNQqVA((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, fsSetPosition_C0SEQJWfadg6oK29b8FuMZg)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos) {
	setFilePos_YAngY19cHH2nZ9bqhMgAHz8Q((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f, ((NI64) (pos)), ((tyEnum_FileSeekPos_I9aQjuvWxs8BspGbxwsngWw) 0));
}

N_LIB_PRIVATE N_NIMCALL(NI, fsGetPosition_ht6Fg1Bmvqnb8CP4WayC2A)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s) {
	NI result;
	NI64 T1_;
{	result = (NI)0;
	T1_ = (NI64)0;
	T1_ = getFilePos_XePgC9ccBXCgb9bEHXZpnMqA((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f);
	result = ((NI) (T1_));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, fsReadData_7P4Enb2Vt3iOCL5K9cnGqYw)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen) {
	NI result;
	result = (NI)0;
	result = readBuffer_1qjbrvfnPD4PaIieHVDvhw_2((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f, buffer, ((NI) (bufLen)));
	return result;
}

static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s) {
	void* result;
	result = (void*)0;
	result = pthread_getspecific(s);
	return result;
}

static N_INLINE(void*, GetThreadLocalVars)(void) {
	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem(globalsSlot_ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = NimTV_->excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	NimTV_->excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, popSafePoint)(void) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	NimTV_->excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*NimTV_->excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

N_LIB_PRIVATE N_NIMCALL(NI, fsPeekData_7P4Enb2Vt3iOCL5K9cnGqYw_2)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen) {
	NI volatile result;
	NI pos;
	TSafePoint TM_Ue7tnBcsL67VCiRfvt8q0A_3;
	result = (NI)0;
	pos = fsGetPosition_ht6Fg1Bmvqnb8CP4WayC2A(s);
	pushSafePoint(&TM_Ue7tnBcsL67VCiRfvt8q0A_3);
	TM_Ue7tnBcsL67VCiRfvt8q0A_3.status = setjmp(TM_Ue7tnBcsL67VCiRfvt8q0A_3.context);
	if (TM_Ue7tnBcsL67VCiRfvt8q0A_3.status == 0) {
		result = readBuffer_1qjbrvfnPD4PaIieHVDvhw_2((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f, buffer, ((NI) (bufLen)));
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		fsSetPosition_C0SEQJWfadg6oK29b8FuMZg(s, pos);
	}
	if (TM_Ue7tnBcsL67VCiRfvt8q0A_3.status != 0) reraiseException();
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&NimTV_->gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ*, newEIO_lOrpXone7dPkEAOURnfgBw)(NimStringDesc* msg) {
	tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ* result;
	NimStringDesc* T1_;
	result = (tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ*)0;
	result = (tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ*) newObj((&NTI_HX2M9cQhE3jaovp9aYJDdslA_), sizeof(tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ));
	(*result).Sup.Sup.Sup.m_type = (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_);
	T1_ = (NimStringDesc*)0;
	T1_ = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (T1_) nimGCunrefNoCycle(T1_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, fsWriteData_mrtMhMXvYVpi5Svw9bWueBw)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen) {
	{
		NI T3_;
		tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ* T6_;
		T3_ = (NI)0;
		T3_ = writeBuffer_1qjbrvfnPD4PaIieHVDvhw((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f, buffer, ((NI) (bufLen)));
		if (!!((T3_ == bufLen))) goto LA4_;
		T6_ = (tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ*)0;
		T6_ = newEIO_lOrpXone7dPkEAOURnfgBw(((NimStringDesc*) &TM_Ue7tnBcsL67VCiRfvt8q0A_4));
		raiseException((Exception*)T6_, "IOError");
	}
	LA4_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, fsFlush_qQbp4Nsuc4ou9bqUUbaqJ6A_2)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s) {
	flushFile_BWnr8V7RERYno9bIdPmw8Hw_3((*((tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) (s))).f);
}

N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*, newFileStream_j9aOzR9a9bXMSUnTXiGmXXGqQ)(FILE* f) {
	tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw* result;
	result = (tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*)0;
	result = (tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*) newObj((&NTI_Z018yRjOOerOKfp9aM3JSOg_), sizeof(tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw));
	(*result).Sup.Sup.m_type = (&NTI_qoDM8xYRV40zbhS9acPNT9bw_);
	(*result).f = f;
	(*result).Sup.closeImpl = fsClose_qQbp4Nsuc4ou9bqUUbaqJ6A;
	(*result).Sup.atEndImpl = fsAtEnd_acl02gpfK9cCD8utiP6NxdA;
	(*result).Sup.setPositionImpl = fsSetPosition_C0SEQJWfadg6oK29b8FuMZg;
	(*result).Sup.getPositionImpl = fsGetPosition_ht6Fg1Bmvqnb8CP4WayC2A;
	(*result).Sup.readDataImpl = fsReadData_7P4Enb2Vt3iOCL5K9cnGqYw;
	(*result).Sup.peekDataImpl = fsPeekData_7P4Enb2Vt3iOCL5K9cnGqYw_2;
	(*result).Sup.writeDataImpl = fsWriteData_mrtMhMXvYVpi5Svw9bWueBw;
	(*result).Sup.flushImpl = fsFlush_qQbp4Nsuc4ou9bqUUbaqJ6A_2;
	return result;
}

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

N_LIB_PRIVATE N_NIMCALL(void, close_4ed7IXme7lqtClFI7s2sTQ)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s) {
	{
		if (!!(((*s).closeImpl == 0))) goto LA3_;
		(*s).closeImpl(s);
	}
	LA3_: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void) {
static TNimNode* TM_Ue7tnBcsL67VCiRfvt8q0A_2[8];
static TNimNode TM_Ue7tnBcsL67VCiRfvt8q0A_0[10];
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
NTI_r3Wc5tOoxP8rz1DvGVTUvw_.size = sizeof(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ*);
NTI_r3Wc5tOoxP8rz1DvGVTUvw_.kind = 22;
NTI_r3Wc5tOoxP8rz1DvGVTUvw_.base = (&NTI_RShkcoDOPnoCVhtpN1hDPQ_);
NTI_r3Wc5tOoxP8rz1DvGVTUvw_.marker = Marker_tyRef_r3Wc5tOoxP8rz1DvGVTUvw;
NTI_qoDM8xYRV40zbhS9acPNT9bw_.size = sizeof(tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw);
NTI_qoDM8xYRV40zbhS9acPNT9bw_.kind = 17;
NTI_qoDM8xYRV40zbhS9acPNT9bw_.base = (&NTI_RShkcoDOPnoCVhtpN1hDPQ_);
NTI_qoDM8xYRV40zbhS9acPNT9bw_.flags = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[9].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[9].offset = offsetof(tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw, f);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[9].typ = (&NTI_7BHnQsEj49a9c6QtudqWTo1w_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[9].name = "f";
NTI_qoDM8xYRV40zbhS9acPNT9bw_.node = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[9];
NTI_Z018yRjOOerOKfp9aM3JSOg_.size = sizeof(tyObject_FileStreamObj_qoDM8xYRV40zbhS9acPNT9bw*);
NTI_Z018yRjOOerOKfp9aM3JSOg_.kind = 22;
NTI_Z018yRjOOerOKfp9aM3JSOg_.base = (&NTI_qoDM8xYRV40zbhS9acPNT9bw_);
NTI_Z018yRjOOerOKfp9aM3JSOg_.marker = Marker_tyRef_Z018yRjOOerOKfp9aM3JSOg;
}

