/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <sys/types.h>
#define _GNU_SOURCE
#include <pthread.h>
#include <sys/types.h>
                          #include <pthread.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
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
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_IndexError_b0IIwghFQBADkB2c86kXQA tyObject_IndexError_b0IIwghFQBADkB2c86kXQA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
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
typedef struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg tyTuple_7q7q3E6Oj24ZNVJb9aonhAg;
typedef struct tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ;
typedef struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_IndexError_b0IIwghFQBADkB2c86kXQA {
  Exception Sup;
};
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
struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg {
  Exception Sup;
};
struct tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ {
  tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg Sup;
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
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
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
NI gFG_g7w4T3anr20OMlWloNx2tQ;
NI gBG_dgmeknpHWrtwqMJGQAp9atA;
} NimThreadVars;
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, paramCount_T74rCHY8RMV0X07YnKmggw)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, paramStr_eYicl3uwirn1ppNz7OCowg)(NI i);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void*, GetThreadLocalVars)(void);
static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple_7q7q3E6Oj24ZNVJb9aonhAg* Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getApplAux_Cd6LaCdd4j2y8pff6G0r9aw)(NimStringDesc* procPath);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getApplHeuristic_Mvl1mQZZxpEWtJIYJ85UWw)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getEnv_9b1nh9cAHhSLlHOPz8lCk5FA)(NimStringDesc* key, NimStringDesc* default_0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError_bEwAamo1N7TKcaU9akpiyIg)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError_tNPXXFl9cb3BG0pJKzUn9bew)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, existsOrCreateDir_V86QyZrcGMPX0W9bv1Q53ww)(NimStringDesc* dir);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir_V86QyZrcGMPX0W9bv1Q53ww_2)(NimStringDesc* dir);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir);
static N_INLINE(NIM_CHAR, X5BX5D__OfW9cXEAVaB9aahBBWfdc49cgbuild)(NimStringDesc* s, NI i);
N_LIB_PRIVATE N_NIMCALL(NI64, ntDiffTime)(NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(NI64, nosgetLastModificationTime)(NimStringDesc* file);
N_LIB_PRIVATE N_NIMCALL(NI64, fromUnix_C77WZNbbZYep1XVMN2QCfA)(NI64 unix);
static N_INLINE(long, st_mtime_4z1GMEUFHaC0ldSIJz68Jwos)(struct stat* s);
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI_z58cIdR0vOibqJ0QwYvB3Q_;
extern TNimType NTI_b0IIwghFQBADkB2c86kXQA_;
extern pthread_key_t globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
extern TNimType NTI_HX2M9cQhE3jaovp9aYJDdslA_;
extern TNimType NTI_9czoZw3pzPyrBmb5zTHY1OQ_;
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_2, "invalid index", 13);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_3, "/proc/self/exe", 14);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_4, "PATH", 4);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_5, "", 0);
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_6, "Failed to create the directory", 30);

N_LIB_PRIVATE N_NIMCALL(NI, paramCount_T74rCHY8RMV0X07YnKmggw)(void) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NI32)(cmdCount - ((NI32) 1))));
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
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
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, paramStr_eYicl3uwirn1ppNz7OCowg)(NI i) {
	NimStringDesc* result;
	tyObject_IndexError_b0IIwghFQBADkB2c86kXQA* e;
	NimStringDesc* T7_;
{	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (i < ((NI) (cmdCount)));
		if (!(T3_)) goto LA4_;
		T3_ = (((NI) 0) <= i);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = cstrToNimstr(cmdLine[(i)- 0]);
		goto BeforeRet_;
	}
	LA5_: ;
	e = (tyObject_IndexError_b0IIwghFQBADkB2c86kXQA*)0;
	e = (tyObject_IndexError_b0IIwghFQBADkB2c86kXQA*) newObj((&NTI_z58cIdR0vOibqJ0QwYvB3Q_), sizeof(tyObject_IndexError_b0IIwghFQBADkB2c86kXQA));
	(*e).Sup.Sup.m_type = (&NTI_b0IIwghFQBADkB2c86kXQA_);
	T7_ = (NimStringDesc*)0;
	T7_ = (*e).Sup.message; (*e).Sup.message = copyStringRC1(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_2));
	if (T7_) nimGCunrefNoCycle(T7_);
	asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
	raiseException((Exception*)e, "IndexError");
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, commandLineParams_WoBZMy8AVRATRE9bQuYWzCQ)(void) {
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* result;
	result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
	result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = paramCount_T74rCHY8RMV0X07YnKmggw();
		res = ((NI) 1);
		{
			while (1) {
				NimStringDesc* T4_;
				NI T5_;
				NimStringDesc* T6_;
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				T4_ = (NimStringDesc*)0;
				T4_ = paramStr_eYicl3uwirn1ppNz7OCowg(i);
				result = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(result)->Sup, sizeof(NimStringDesc*));
				T5_ = result->Sup.len++;
				T6_ = (NimStringDesc*)0;
				T6_ = result->data[T5_]; result->data[T5_] = copyStringRC1(T4_);
				if (T6_) nimGCunrefNoCycle(T6_);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
{	result = (NIM_BOOL)0;
	memset((void*)(&res), 0, sizeof(res));
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(filename->data, (&res));
	T1_ = (((NI32) 0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISREG(res.st_mode);
	LA3_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getApplAux_Cd6LaCdd4j2y8pff6G0r9aw)(NimStringDesc* procPath) {
	NimStringDesc* result;
	NI len;
	result = (NimStringDesc*)0;
	result = mnewString(((NI) 256));
	len = readlink(procPath->data, result->data, ((NI) 256));
	{
		if (!(((NI) 256) < len)) goto LA3_;
		result = mnewString(((NI) ((NI)(len + ((NI) 1)))));
		len = readlink(procPath->data, result->data, len);
	}
	LA3_: ;
	result = setLengthStr(result, ((NI) (len)));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getApplHeuristic_Mvl1mQZZxpEWtJIYJ85UWw)(void) {
	NimStringDesc* result;
{	result = (NimStringDesc*)0;
	result = paramStr_eYicl3uwirn1ppNz7OCowg(((NI) 0));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) < (result ? result->Sup.len : 0));
		if (!(T3_)) goto LA4_;
		T3_ = !(((NU8)(result->data[((NI) 0)]) == (NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		{
			NimStringDesc* p;
			NimStringDesc* colontmp_;
			NI last;
			NI splits;
			p = (NimStringDesc*)0;
			colontmp_ = (NimStringDesc*)0;
			colontmp_ = getEnv_9b1nh9cAHhSLlHOPz8lCk5FA(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_4), ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_5));
			last = ((NI) 0);
			splits = ((NI) -1);
			{
				while (1) {
					NI first;
					NimStringDesc* x;
					if (!(last <= (colontmp_ ? colontmp_->Sup.len : 0))) goto LA9;
					first = last;
					{
						while (1) {
							NIM_BOOL T12_;
							T12_ = (NIM_BOOL)0;
							T12_ = (last < (colontmp_ ? colontmp_->Sup.len : 0));
							if (!(T12_)) goto LA13_;
							T12_ = !((((NU8)(colontmp_->data[last])) == ((NU8)(58))));
							LA13_: ;
							if (!T12_) goto LA11;
							last += ((NI) 1);
						} LA11: ;
					}
					{
						if (!(splits == ((NI) 0))) goto LA16_;
						last = (colontmp_ ? colontmp_->Sup.len : 0);
					}
					LA16_: ;
					p = copyStrLast(colontmp_, first, (NI)(last - ((NI) 1)));
					x = nosjoinPath(p, result);
					{
						NIM_BOOL T20_;
						T20_ = (NIM_BOOL)0;
						T20_ = nosexistsFile(x);
						if (!T20_) goto LA21_;
						result = copyString(x);
						goto BeforeRet_;
					}
					LA21_: ;
					{
						if (!(splits == ((NI) 0))) goto LA25_;
						goto LA8;
					}
					LA25_: ;
					splits -= ((NI) 1);
					last += ((NI) 1);
				} LA9: ;
			} LA8: ;
		}
	}
	LA5_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = getApplAux_Cd6LaCdd4j2y8pff6G0r9aw(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_3));
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA3_;
		result = getApplHeuristic_Mvl1mQZZxpEWtJIYJ85UWw();
	}
	LA3_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetAppDir)(void) {
	NimStringDesc* result;
	NimStringDesc* T1_;
	tyTuple_7q7q3E6Oj24ZNVJb9aonhAg T2_;
	result = (NimStringDesc*)0;
	T1_ = (NimStringDesc*)0;
	T1_ = nosgetAppFilename();
	memset((void*)(&T2_), 0, sizeof(T2_));
	nossplitFile(T1_, (&T2_));
	result = copyString(T2_.Field0);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename) {
	NimStringDesc* result;
	NCSTRING r;
	result = (NimStringDesc*)0;
	r = realpath(filename->data, NIM_NIL);
	{
		NI32 T5_;
		if (!(r == 0)) goto LA3_;
		T5_ = (NI32)0;
		T5_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T5_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_5));
	}
	goto LA1_;
	LA3_: ;
	{
		result = cstrToNimstr(r);
		free(((void*) (r)));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir_V86QyZrcGMPX0W9bv1Q53ww_2)(NimStringDesc* dir) {
	NIM_BOOL result;
	int res;
	result = (NIM_BOOL)0;
	res = mkdir(dir->data, ((mode_t) 511));
	{
		if (!(res == ((NI32) 0))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(errno == EEXIST)) goto LA6_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA6_: ;
	{
		tyArray_nHXaesL0DJZHyVS07ARPRA T9_;
		NI32 T10_;
		memset((void*)T9_, 0, sizeof(T9_));
		T9_[0] = nimIntToStr(((NI) (res)));
		echoBinSafe(T9_, 1);
		T10_ = (NI32)0;
		T10_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T10_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_5));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
{	result = (NIM_BOOL)0;
	memset((void*)(&res), 0, sizeof(res));
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(dir->data, (&res));
	T1_ = (((NI32) 0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISDIR(res.st_mode);
	LA3_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, existsOrCreateDir_V86QyZrcGMPX0W9bv1Q53ww)(NimStringDesc* dir) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = rawCreateDir_V86QyZrcGMPX0W9bv1Q53ww_2(dir);
	result = !(T1_);
	{
		if (!result) goto LA4_;
		{
			NIM_BOOL T8_;
			tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ* e;
			NimStringDesc* T11_;
			T8_ = (NIM_BOOL)0;
			T8_ = nosexistsDir(dir);
			if (!!(T8_)) goto LA9_;
			e = (tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ*)0;
			e = (tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ*) newObj((&NTI_HX2M9cQhE3jaovp9aYJDdslA_), sizeof(tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ));
			(*e).Sup.Sup.Sup.m_type = (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_);
			T11_ = (NimStringDesc*)0;
			T11_ = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_6));
			if (T11_) nimGCunrefNoCycle(T11_);
			asgnRef((void**) (&(*e).Sup.Sup.parent), NIM_NIL);
			raiseException((Exception*)e, "IOError");
		}
		LA9_: ;
	}
	LA4_: ;
	return result;
}

static N_INLINE(NIM_CHAR, X5BX5D__OfW9cXEAVaB9aahBBWfdc49cgbuild)(NimStringDesc* s, NI i) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	result = s->data[(NI)((s ? s->Sup.len : 0) - i)];
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, noscreateDir)(NimStringDesc* dir) {
	NIM_BOOL omitNext;
	omitNext = NIM_FALSE;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				{
					if (!(((NU8)(dir->data[i])) == ((NU8)(47)) || ((NU8)(dir->data[i])) == ((NU8)(47)))) goto LA6_;
					{
						if (!omitNext) goto LA10_;
						omitNext = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						NimStringDesc* T13_;
						NIM_BOOL T14_;
						T13_ = (NimStringDesc*)0;
						T13_ = copyStrLast(dir, ((NI) 0), (NI)(i - ((NI) 1)));
						T14_ = (NIM_BOOL)0;
						T14_ = existsOrCreateDir_V86QyZrcGMPX0W9bv1Q53ww(T13_);
						T14_;
					}
					LA8_: ;
				}
				LA6_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NIM_BOOL T17_;
		NIM_BOOL T18_;
		NIM_CHAR T21_;
		NIM_BOOL T24_;
		T17_ = (NIM_BOOL)0;
		T18_ = (NIM_BOOL)0;
		T18_ = (((NI) 0) < (dir ? dir->Sup.len : 0));
		if (!(T18_)) goto LA19_;
		T18_ = !(omitNext);
		LA19_: ;
		T17_ = T18_;
		if (!(T17_)) goto LA20_;
		T21_ = (NIM_CHAR)0;
		T21_ = X5BX5D__OfW9cXEAVaB9aahBBWfdc49cgbuild(dir, ((NI) 1));
		T17_ = !((((NU8)(T21_)) == ((NU8)(47)) || ((NU8)(T21_)) == ((NU8)(47))));
		LA20_: ;
		if (!T17_) goto LA22_;
		T24_ = (NIM_BOOL)0;
		T24_ = existsOrCreateDir_V86QyZrcGMPX0W9bv1Q53ww(dir);
		T24_;
	}
	LA22_: ;
}

static N_INLINE(long, st_mtime_4z1GMEUFHaC0ldSIJz68Jwos)(struct stat* s) {
	long result;
	result = (long)0;
	result = (*s).st_mtim.tv_sec;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, nosgetLastModificationTime)(NimStringDesc* file) {
	NI64 result;
	struct stat res;
	long T7_;
{	result = (NI64)0;
	memset((void*)(&res), 0, sizeof(res));
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = stat(file->data, (&res));
		if (!(T3_ < ((NI32) 0))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T6_, ((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_5));
	}
	LA4_: ;
	T7_ = (long)0;
	T7_ = st_mtime_4z1GMEUFHaC0ldSIJz68Jwos((&res));
	result = fromUnix_C77WZNbbZYep1XVMN2QCfA(((NI64) (T7_)));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI64 T1_;
	NI64 T2_;
	NI64 T3_;
	result = (NIM_BOOL)0;
	T1_ = (NI64)0;
	T1_ = nosgetLastModificationTime(a);
	T2_ = (NI64)0;
	T2_ = nosgetLastModificationTime(b);
	T3_ = (NI64)0;
	T3_ = ntDiffTime(T1_, T2_);
	result = (IL64(0) <= T3_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, nossleep)(NI milsecs) {
	struct timespec a;
	struct timespec b;
	int T1_;
	memset((void*)(&a), 0, sizeof(a));
	memset((void*)(&b), 0, sizeof(b));
	a.tv_sec = (NI)(milsecs / ((NI) 1000));
	a.tv_nsec = (NI)((NI)((NI)(milsecs % ((NI) 1000)) * ((NI) 1000)) * ((NI) 1000));
	T1_ = (int)0;
	T1_ = nanosleep((&a), (&b));
	T1_;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void) {
}

