/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <windows.h>
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
typedef struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw;
typedef struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw;
struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* head;
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* tail;
CRITICAL_SECTION lock;
};
typedef void* tyArray_Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* next;
NI dataLen;
tyArray_Rrw59cMvNu8cDA9cQDh4v2oA d;
};
static N_INLINE(void, initLock_NXoRcxfV39aV9cflSTUwtJ1gsharedlist)(CRITICAL_SECTION* lock);

static N_INLINE(void, initLock_NXoRcxfV39aV9cflSTUwtJ1gsharedlist)(CRITICAL_SECTION* lock) {
	InitializeCriticalSection(lock);
}

N_LIB_PRIVATE N_NIMCALL(void, init_JKeFCoMeAURymbhVJWrpNA)(tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw* t) {
	initLock_NXoRcxfV39aV9cflSTUwtJ1gsharedlist((&(*t).lock));
	(*t).head = NIM_NIL;
	(*t).tail = NIM_NIL;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_sharedlistInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_sharedlistDatInit000)(void) {
}

