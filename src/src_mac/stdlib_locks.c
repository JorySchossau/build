/* Generated by Nim Compiler v0.18.1 */
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

N_LIB_PRIVATE N_NIMCALL(void, acquire_c9cbvs4ShkxrwmQmnY63PGA)(pthread_mutex_t* lock) {
	pthread_mutex_lock(lock);
}

N_LIB_PRIVATE N_NIMCALL(void, release_c9cbvs4ShkxrwmQmnY63PGA_2)(pthread_mutex_t* lock) {
	pthread_mutex_unlock(lock);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_locksInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_locksDatInit000)(void) {
}

