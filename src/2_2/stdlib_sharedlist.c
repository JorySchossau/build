/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <pthread.h>
#include <sys/types.h>
                          #include <pthread.h>
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
typedef long tyArray_xDUyu9aScDpt0JZLU6q9aEZQ[5];
struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* head;
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* tail;
pthread_mutex_t lock;
};
typedef void* tyArray_Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* next;
NI dataLen;
tyArray_Rrw59cMvNu8cDA9cQDh4v2oA d;
};
static N_INLINE(void, initLock_NyibMGWEvLI6dmuAjxN9brAsharedlist)(pthread_mutex_t* lock);

static N_INLINE(void, initLock_NyibMGWEvLI6dmuAjxN9brAsharedlist)(pthread_mutex_t* lock) {
	pthread_mutex_init(lock, NIM_NIL);
}

N_LIB_PRIVATE N_NIMCALL(void, init_JKeFCoMeAURymbhVJWrpNA)(tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw* t) {
	initLock_NyibMGWEvLI6dmuAjxN9brAsharedlist((&(*t).lock));
	(*t).head = NIM_NIL;
	(*t).tail = NIM_NIL;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_sharedlistInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_sharedlistDatInit000)(void) {
}

