#! /bin/sh
# Generated from niminst
# Template is in tools/niminst/buildsh.tmpl
# To regenerate run ``niminst csource`` or ``koch csource``

set -e

while :
do
  case "$1" in
    --extraBuildArgs)
      extraBuildArgs=" $2"
      shift 2
      ;;
    --) # End of all options
      shift
      break;
      ;;
    -*)
      echo "Error: Unknown option: $1" >&2
      exit 1
      ;;
    *)  # No more options
      break
      ;;
  esac
done

CC="gcc"
LINKER="gcc"
COMP_FLAGS="-w -pthread -O3 -fno-strict-aliasing$extraBuildArgs"
LINK_FLAGS="-pthread"
# platform detection
ucpu=`uname -m`
uos=`uname`
# bin dir detection
binDir=.

if [ -s ../koch.nim ]; then
  binDir="../bin"
fi

if [ ! -d $binDir ]; then
  mkdir $binDir
fi

# convert to lower case:
ucpu=`echo $ucpu | tr "[:upper:]" "[:lower:]"`
uos=`echo $uos | tr "[:upper:]" "[:lower:]"`

case $uos in
  *linux* )
    myos="linux"
    LINK_FLAGS="$LINK_FLAGS -ldl -lm"
    ;;
  *dragonfly* )
    myos="freebsd"
    LINK_FLAGS="$LINK_FLAGS -lm"
    ;;
  *freebsd* )
    myos="freebsd"
    CC="clang"
    LINKER="clang"
    LINK_FLAGS="$LINK_FLAGS -lm"
    ;;
  *openbsd* )
    myos="openbsd"
    LINK_FLAGS="$LINK_FLAGS -lm"
    ;;
  *netbsd* )
    myos="netbsd"
    LINK_FLAGS="$LINK_FLAGS -lm"
    ;;
  *darwin* )
    myos="macosx"
    CC="clang"
    LINKER="clang"
    LINK_FLAGS="$LINK_FLAGS -ldl -lm"
    if [ "$HOSTTYPE" = "x86_64" ] ; then
      ucpu="amd64"
    fi
    ;;
  *aix* )
    myos="aix"
    LINK_FLAGS="$LINK_FLAGS -ldl -lm"
    ;;
  *solaris* | *sun* )
    myos="solaris"
    LINK_FLAGS="$LINK_FLAGS -ldl -lm -lsocket -lnsl"
    ;;
  *haiku* )
    myos="haiku"
    ;;
  *mingw64_nt* )
    myos="windows"
    ;;
  *)
    echo "Error: unknown operating system: $uos"
    exit 1
    ;;
esac

case $ucpu in
  *i386* | *i486* | *i586* | *i686* | *bepc* | *i86pc* )
    mycpu="i386" ;;
  *amd*64* | *x86-64* | *x86_64* )
    mycpu="amd64" ;;
  *sparc*|*sun* )
    mycpu="sparc" ;;
  *ppc64* )
    if [ "$myos" = "linux" ] ; then
      COMP_FLAGS="$COMP_FLAGS -m64"
      LINK_FLAGS="$LINK_FLAGS -m64"
    fi
    mycpu="powerpc64" ;;
  *power*|*ppc* )
    mycpu="powerpc" ;;
  *mips* )
    mycpu="mips" ;;
  *arm*|*armv6l* )
    mycpu="arm" ;;
  *)
    echo "Error: unknown processor: $ucpu"
    exit 1
    ;;
esac

# call the compiler:

case $myos in
windows)
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/build.c -o src/1_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/build.c -o src/1_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_system.c -o src/1_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_system.c -o src/1_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_sharedlist.c -o src/1_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_sharedlist.c -o src/1_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_locks.c -o src/1_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_locks.c -o src/1_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_strutils.c -o src/1_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_strutils.c -o src/1_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_parseutils.c -o src/1_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_parseutils.c -o src/1_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_math.c -o src/1_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_math.c -o src/1_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_algorithm.c -o src/1_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_algorithm.c -o src/1_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_sequtils.c -o src/1_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_sequtils.c -o src/1_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_macros.c -o src/1_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_macros.c -o src/1_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_tables.c -o src/1_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_tables.c -o src/1_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_hashes.c -o src/1_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_hashes.c -o src/1_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_strformat.c -o src/1_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_strformat.c -o src/1_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_unicode.c -o src/1_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_unicode.c -o src/1_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_osproc.c -o src/1_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_osproc.c -o src/1_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_os.c -o src/1_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_os.c -o src/1_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_times.c -o src/1_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_times.c -o src/1_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_winlean.c -o src/1_1/stdlib_winlean.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_winlean.c -o src/1_1/stdlib_winlean.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_dynlib.c -o src/1_1/stdlib_dynlib.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_dynlib.c -o src/1_1/stdlib_dynlib.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_ospaths.c -o src/1_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_ospaths.c -o src/1_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_strtabs.c -o src/1_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_strtabs.c -o src/1_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_streams.c -o src/1_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_streams.c -o src/1_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_cpuinfo.c -o src/1_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_cpuinfo.c -o src/1_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/cligen_cligen.c -o src/1_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/cligen_cligen.c -o src/1_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/cligen_parseopt3.c -o src/1_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/cligen_parseopt3.c -o src/1_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/cligen_argcvt.c -o src/1_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/cligen_argcvt.c -o src/1_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_typetraits.c -o src/1_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_typetraits.c -o src/1_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_sets.c -o src/1_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_sets.c -o src/1_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/cligen_textUt.c -o src/1_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/cligen_textUt.c -o src/1_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_terminal.c -o src/1_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_terminal.c -o src/1_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_colors.c -o src/1_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/1_1/stdlib_colors.c -o src/1_1/stdlib_colors.o
    echo "$LINKER -o $binDir/build  \
src/1_1/build.o \
src/1_1/stdlib_system.o \
src/1_1/stdlib_sharedlist.o \
src/1_1/stdlib_locks.o \
src/1_1/stdlib_strutils.o \
src/1_1/stdlib_parseutils.o \
src/1_1/stdlib_math.o \
src/1_1/stdlib_algorithm.o \
src/1_1/stdlib_sequtils.o \
src/1_1/stdlib_macros.o \
src/1_1/stdlib_tables.o \
src/1_1/stdlib_hashes.o \
src/1_1/stdlib_strformat.o \
src/1_1/stdlib_unicode.o \
src/1_1/stdlib_osproc.o \
src/1_1/stdlib_os.o \
src/1_1/stdlib_times.o \
src/1_1/stdlib_winlean.o \
src/1_1/stdlib_dynlib.o \
src/1_1/stdlib_ospaths.o \
src/1_1/stdlib_strtabs.o \
src/1_1/stdlib_streams.o \
src/1_1/stdlib_cpuinfo.o \
src/1_1/cligen_cligen.o \
src/1_1/cligen_parseopt3.o \
src/1_1/cligen_argcvt.o \
src/1_1/stdlib_typetraits.o \
src/1_1/stdlib_sets.o \
src/1_1/cligen_textUt.o \
src/1_1/stdlib_terminal.o \
src/1_1/stdlib_colors.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/1_1/build.o \
src/1_1/stdlib_system.o \
src/1_1/stdlib_sharedlist.o \
src/1_1/stdlib_locks.o \
src/1_1/stdlib_strutils.o \
src/1_1/stdlib_parseutils.o \
src/1_1/stdlib_math.o \
src/1_1/stdlib_algorithm.o \
src/1_1/stdlib_sequtils.o \
src/1_1/stdlib_macros.o \
src/1_1/stdlib_tables.o \
src/1_1/stdlib_hashes.o \
src/1_1/stdlib_strformat.o \
src/1_1/stdlib_unicode.o \
src/1_1/stdlib_osproc.o \
src/1_1/stdlib_os.o \
src/1_1/stdlib_times.o \
src/1_1/stdlib_winlean.o \
src/1_1/stdlib_dynlib.o \
src/1_1/stdlib_ospaths.o \
src/1_1/stdlib_strtabs.o \
src/1_1/stdlib_streams.o \
src/1_1/stdlib_cpuinfo.o \
src/1_1/cligen_cligen.o \
src/1_1/cligen_parseopt3.o \
src/1_1/cligen_argcvt.o \
src/1_1/stdlib_typetraits.o \
src/1_1/stdlib_sets.o \
src/1_1/cligen_textUt.o \
src/1_1/stdlib_terminal.o \
src/1_1/stdlib_colors.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/build.c -o src/1_2/build.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/build.c -o src/1_2/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_system.c -o src/1_2/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_system.c -o src/1_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_sharedlist.c -o src/1_2/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_sharedlist.c -o src/1_2/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_locks.c -o src/1_2/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_locks.c -o src/1_2/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_strutils.c -o src/1_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_strutils.c -o src/1_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_parseutils.c -o src/1_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_parseutils.c -o src/1_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_math.c -o src/1_2/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_math.c -o src/1_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_algorithm.c -o src/1_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_algorithm.c -o src/1_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_sequtils.c -o src/1_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_sequtils.c -o src/1_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_macros.c -o src/1_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_macros.c -o src/1_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_tables.c -o src/1_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_tables.c -o src/1_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_hashes.c -o src/1_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_hashes.c -o src/1_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_strformat.c -o src/1_2/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_strformat.c -o src/1_2/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_unicode.c -o src/1_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_unicode.c -o src/1_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_osproc.c -o src/1_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_osproc.c -o src/1_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_os.c -o src/1_2/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_os.c -o src/1_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_times.c -o src/1_2/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_times.c -o src/1_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_winlean.c -o src/1_2/stdlib_winlean.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_winlean.c -o src/1_2/stdlib_winlean.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_dynlib.c -o src/1_2/stdlib_dynlib.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_dynlib.c -o src/1_2/stdlib_dynlib.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_ospaths.c -o src/1_2/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_ospaths.c -o src/1_2/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_strtabs.c -o src/1_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_strtabs.c -o src/1_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_streams.c -o src/1_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_streams.c -o src/1_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_cpuinfo.c -o src/1_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_cpuinfo.c -o src/1_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/cligen_cligen.c -o src/1_2/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/cligen_cligen.c -o src/1_2/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/cligen_parseopt3.c -o src/1_2/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/cligen_parseopt3.c -o src/1_2/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/cligen_argcvt.c -o src/1_2/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/cligen_argcvt.c -o src/1_2/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_typetraits.c -o src/1_2/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_typetraits.c -o src/1_2/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_sets.c -o src/1_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_sets.c -o src/1_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/cligen_textUt.c -o src/1_2/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/cligen_textUt.c -o src/1_2/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_terminal.c -o src/1_2/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_terminal.c -o src/1_2/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_colors.c -o src/1_2/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/1_2/stdlib_colors.c -o src/1_2/stdlib_colors.o
    echo "$LINKER -o $binDir/build  \
src/1_2/build.o \
src/1_2/stdlib_system.o \
src/1_2/stdlib_sharedlist.o \
src/1_2/stdlib_locks.o \
src/1_2/stdlib_strutils.o \
src/1_2/stdlib_parseutils.o \
src/1_2/stdlib_math.o \
src/1_2/stdlib_algorithm.o \
src/1_2/stdlib_sequtils.o \
src/1_2/stdlib_macros.o \
src/1_2/stdlib_tables.o \
src/1_2/stdlib_hashes.o \
src/1_2/stdlib_strformat.o \
src/1_2/stdlib_unicode.o \
src/1_2/stdlib_osproc.o \
src/1_2/stdlib_os.o \
src/1_2/stdlib_times.o \
src/1_2/stdlib_winlean.o \
src/1_2/stdlib_dynlib.o \
src/1_2/stdlib_ospaths.o \
src/1_2/stdlib_strtabs.o \
src/1_2/stdlib_streams.o \
src/1_2/stdlib_cpuinfo.o \
src/1_2/cligen_cligen.o \
src/1_2/cligen_parseopt3.o \
src/1_2/cligen_argcvt.o \
src/1_2/stdlib_typetraits.o \
src/1_2/stdlib_sets.o \
src/1_2/cligen_textUt.o \
src/1_2/stdlib_terminal.o \
src/1_2/stdlib_colors.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/1_2/build.o \
src/1_2/stdlib_system.o \
src/1_2/stdlib_sharedlist.o \
src/1_2/stdlib_locks.o \
src/1_2/stdlib_strutils.o \
src/1_2/stdlib_parseutils.o \
src/1_2/stdlib_math.o \
src/1_2/stdlib_algorithm.o \
src/1_2/stdlib_sequtils.o \
src/1_2/stdlib_macros.o \
src/1_2/stdlib_tables.o \
src/1_2/stdlib_hashes.o \
src/1_2/stdlib_strformat.o \
src/1_2/stdlib_unicode.o \
src/1_2/stdlib_osproc.o \
src/1_2/stdlib_os.o \
src/1_2/stdlib_times.o \
src/1_2/stdlib_winlean.o \
src/1_2/stdlib_dynlib.o \
src/1_2/stdlib_ospaths.o \
src/1_2/stdlib_strtabs.o \
src/1_2/stdlib_streams.o \
src/1_2/stdlib_cpuinfo.o \
src/1_2/cligen_cligen.o \
src/1_2/cligen_parseopt3.o \
src/1_2/cligen_argcvt.o \
src/1_2/stdlib_typetraits.o \
src/1_2/stdlib_sets.o \
src/1_2/cligen_textUt.o \
src/1_2/stdlib_terminal.o \
src/1_2/stdlib_colors.o $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/build  $LINK_FLAGS"
    $LINKER -o $binDir/build  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
linux)
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/build.c -o src/2_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/build.c -o src/2_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_system.c -o src/2_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_system.c -o src/2_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strutils.c -o src/2_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strutils.c -o src/2_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_parseutils.c -o src/2_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_parseutils.c -o src/2_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sequtils.c -o src/2_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sequtils.c -o src/2_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_tables.c -o src/2_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_tables.c -o src/2_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_osproc.c -o src/2_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_osproc.c -o src/2_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_os.c -o src/2_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_os.c -o src/2_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_posix.c -o src/2_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_posix.c -o src/2_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_ospaths.c -o src/2_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_ospaths.c -o src/2_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_streams.c -o src/2_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_streams.c -o src/2_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_cpuinfo.c -o src/2_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_cpuinfo.c -o src/2_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_linux.c -o src/2_1/stdlib_linux.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_linux.c -o src/2_1/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_argcvt.c -o src/2_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_argcvt.c -o src/2_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_terminal.c -o src/2_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_terminal.c -o src/2_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/2_1/build.o \
src/2_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/2_1/stdlib_strutils.o \
src/2_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/2_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/2_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/2_1/stdlib_osproc.o \
src/2_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/2_1/stdlib_posix.o \
src/2_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/2_1/stdlib_streams.o \
src/2_1/stdlib_cpuinfo.o \
src/2_1/stdlib_linux.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/2_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/2_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/2_1/build.o \
src/2_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/2_1/stdlib_strutils.o \
src/2_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/2_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/2_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/2_1/stdlib_osproc.o \
src/2_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/2_1/stdlib_posix.o \
src/2_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/2_1/stdlib_streams.o \
src/2_1/stdlib_cpuinfo.o \
src/2_1/stdlib_linux.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/2_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/2_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/build.c -o src/2_2/build.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/build.c -o src/2_2/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_system.c -o src/2_2/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_system.c -o src/2_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sharedlist.c -o src/2_2/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sharedlist.c -o src/2_2/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_locks.c -o src/2_2/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_locks.c -o src/2_2/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strutils.c -o src/2_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strutils.c -o src/2_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_parseutils.c -o src/2_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_parseutils.c -o src/2_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_math.c -o src/3_3/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_math.c -o src/3_3/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_algorithm.c -o src/3_3/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_algorithm.c -o src/3_3/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sequtils.c -o src/2_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sequtils.c -o src/2_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_macros.c -o src/3_3/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_macros.c -o src/3_3/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_tables.c -o src/2_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_tables.c -o src/2_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_hashes.c -o src/3_3/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_hashes.c -o src/3_3/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_strformat.c -o src/3_3/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_strformat.c -o src/3_3/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_unicode.c -o src/3_3/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_unicode.c -o src/3_3/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_osproc.c -o src/2_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_osproc.c -o src/2_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_os.c -o src/2_2/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_os.c -o src/2_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_times.c -o src/3_3/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_times.c -o src/3_3/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_posix.c -o src/2_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_posix.c -o src/2_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_ospaths.c -o src/2_2/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_ospaths.c -o src/2_2/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_strtabs.c -o src/3_3/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_strtabs.c -o src/3_3/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_streams.c -o src/2_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_streams.c -o src/2_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_cpuinfo.c -o src/2_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_cpuinfo.c -o src/2_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_linux.c -o src/2_2/stdlib_linux.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_linux.c -o src/2_2/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/cligen_cligen.c -o src/3_3/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/cligen_cligen.c -o src/3_3/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/cligen_parseopt3.c -o src/3_3/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/cligen_parseopt3.c -o src/3_3/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_argcvt.c -o src/2_2/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_argcvt.c -o src/2_2/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_typetraits.c -o src/3_3/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_typetraits.c -o src/3_3/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_sets.c -o src/3_3/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_sets.c -o src/3_3/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/cligen_textUt.c -o src/3_3/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/cligen_textUt.c -o src/3_3/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_terminal.c -o src/2_2/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_terminal.c -o src/2_2/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_colors.c -o src/3_3/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_colors.c -o src/3_3/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_termios.c -o src/3_3/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_termios.c -o src/3_3/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/2_2/build.o \
src/2_2/stdlib_system.o \
src/2_2/stdlib_sharedlist.o \
src/2_2/stdlib_locks.o \
src/2_2/stdlib_strutils.o \
src/2_2/stdlib_parseutils.o \
src/3_3/stdlib_math.o \
src/3_3/stdlib_algorithm.o \
src/2_2/stdlib_sequtils.o \
src/3_3/stdlib_macros.o \
src/2_2/stdlib_tables.o \
src/3_3/stdlib_hashes.o \
src/3_3/stdlib_strformat.o \
src/3_3/stdlib_unicode.o \
src/2_2/stdlib_osproc.o \
src/2_2/stdlib_os.o \
src/3_3/stdlib_times.o \
src/2_2/stdlib_posix.o \
src/2_2/stdlib_ospaths.o \
src/3_3/stdlib_strtabs.o \
src/2_2/stdlib_streams.o \
src/2_2/stdlib_cpuinfo.o \
src/2_2/stdlib_linux.o \
src/3_3/cligen_cligen.o \
src/3_3/cligen_parseopt3.o \
src/2_2/cligen_argcvt.o \
src/3_3/stdlib_typetraits.o \
src/3_3/stdlib_sets.o \
src/3_3/cligen_textUt.o \
src/2_2/stdlib_terminal.o \
src/3_3/stdlib_colors.o \
src/3_3/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/2_2/build.o \
src/2_2/stdlib_system.o \
src/2_2/stdlib_sharedlist.o \
src/2_2/stdlib_locks.o \
src/2_2/stdlib_strutils.o \
src/2_2/stdlib_parseutils.o \
src/3_3/stdlib_math.o \
src/3_3/stdlib_algorithm.o \
src/2_2/stdlib_sequtils.o \
src/3_3/stdlib_macros.o \
src/2_2/stdlib_tables.o \
src/3_3/stdlib_hashes.o \
src/3_3/stdlib_strformat.o \
src/3_3/stdlib_unicode.o \
src/2_2/stdlib_osproc.o \
src/2_2/stdlib_os.o \
src/3_3/stdlib_times.o \
src/2_2/stdlib_posix.o \
src/2_2/stdlib_ospaths.o \
src/3_3/stdlib_strtabs.o \
src/2_2/stdlib_streams.o \
src/2_2/stdlib_cpuinfo.o \
src/2_2/stdlib_linux.o \
src/3_3/cligen_cligen.o \
src/3_3/cligen_parseopt3.o \
src/2_2/cligen_argcvt.o \
src/3_3/stdlib_typetraits.o \
src/3_3/stdlib_sets.o \
src/3_3/cligen_textUt.o \
src/2_2/stdlib_terminal.o \
src/3_3/stdlib_colors.o \
src/3_3/stdlib_termios.o $LINK_FLAGS
    ;;
  arm)
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/build.c -o src/2_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/build.c -o src/2_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_system.c -o src/2_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_system.c -o src/2_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strutils.c -o src/2_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strutils.c -o src/2_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_parseutils.c -o src/2_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_parseutils.c -o src/2_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sequtils.c -o src/2_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sequtils.c -o src/2_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_tables.c -o src/2_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_tables.c -o src/2_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_osproc.c -o src/2_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_osproc.c -o src/2_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_os.c -o src/2_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_os.c -o src/2_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_posix.c -o src/2_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_posix.c -o src/2_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_ospaths.c -o src/2_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_ospaths.c -o src/2_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_streams.c -o src/2_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_streams.c -o src/2_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_cpuinfo.c -o src/2_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_cpuinfo.c -o src/2_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_linux.c -o src/2_1/stdlib_linux.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_linux.c -o src/2_1/stdlib_linux.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_argcvt.c -o src/2_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_argcvt.c -o src/2_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_terminal.c -o src/2_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_terminal.c -o src/2_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/2_1/build.o \
src/2_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/2_1/stdlib_strutils.o \
src/2_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/2_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/2_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/2_1/stdlib_osproc.o \
src/2_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/2_1/stdlib_posix.o \
src/2_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/2_1/stdlib_streams.o \
src/2_1/stdlib_cpuinfo.o \
src/2_1/stdlib_linux.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/2_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/2_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/2_1/build.o \
src/2_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/2_1/stdlib_strutils.o \
src/2_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/2_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/2_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/2_1/stdlib_osproc.o \
src/2_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/2_1/stdlib_posix.o \
src/2_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/2_1/stdlib_streams.o \
src/2_1/stdlib_cpuinfo.o \
src/2_1/stdlib_linux.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/2_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/2_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
macosx)
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/build.c -o src/3_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/build.c -o src/3_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_system.c -o src/3_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_system.c -o src/3_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_osproc.c -o src/3_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_osproc.c -o src/3_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_os.c -o src/3_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_os.c -o src/3_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_ospaths.c -o src/3_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_ospaths.c -o src/3_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_streams.c -o src/3_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_streams.c -o src/3_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_cpuinfo.c -o src/3_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_cpuinfo.c -o src/3_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_kqueue.c -o src/3_1/stdlib_kqueue.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_kqueue.c -o src/3_1/stdlib_kqueue.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/3_1/build.o \
src/3_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/3_1/stdlib_osproc.o \
src/3_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/3_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/3_1/stdlib_streams.o \
src/3_1/stdlib_cpuinfo.o \
src/3_1/stdlib_kqueue.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/3_1/build.o \
src/3_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/3_1/stdlib_osproc.o \
src/3_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/3_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/3_1/stdlib_streams.o \
src/3_1/stdlib_cpuinfo.o \
src/3_1/stdlib_kqueue.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/build.c -o src/3_3/build.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/build.c -o src/3_3/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_system.c -o src/3_2/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_system.c -o src/3_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_sharedlist.c -o src/3_3/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_sharedlist.c -o src/3_3/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_locks.c -o src/3_3/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_locks.c -o src/3_3/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_strutils.c -o src/3_3/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_strutils.c -o src/3_3/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_parseutils.c -o src/3_3/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_parseutils.c -o src/3_3/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_sequtils.c -o src/3_3/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_sequtils.c -o src/3_3/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_tables.c -o src/3_3/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_tables.c -o src/3_3/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_osproc.c -o src/3_3/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_osproc.c -o src/3_3/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_os.c -o src/3_3/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_os.c -o src/3_3/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_times.c -o src/2_2/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_times.c -o src/2_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_posix.c -o src/3_3/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_posix.c -o src/3_3/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_ospaths.c -o src/3_3/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_ospaths.c -o src/3_3/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_streams.c -o src/3_3/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_streams.c -o src/3_3/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_cpuinfo.c -o src/3_3/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_cpuinfo.c -o src/3_3/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_kqueue.c -o src/3_3/stdlib_kqueue.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_kqueue.c -o src/3_3/stdlib_kqueue.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/cligen_argcvt.c -o src/3_3/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/cligen_argcvt.c -o src/3_3/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_terminal.c -o src/3_3/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_3/stdlib_terminal.c -o src/3_3/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/3_3/build.o \
src/3_2/stdlib_system.o \
src/3_3/stdlib_sharedlist.o \
src/3_3/stdlib_locks.o \
src/3_3/stdlib_strutils.o \
src/3_3/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_3/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_3/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/3_3/stdlib_osproc.o \
src/3_3/stdlib_os.o \
src/2_2/stdlib_times.o \
src/3_3/stdlib_posix.o \
src/3_3/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/3_3/stdlib_streams.o \
src/3_3/stdlib_cpuinfo.o \
src/3_3/stdlib_kqueue.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_3/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_3/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/3_3/build.o \
src/3_2/stdlib_system.o \
src/3_3/stdlib_sharedlist.o \
src/3_3/stdlib_locks.o \
src/3_3/stdlib_strutils.o \
src/3_3/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_3/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_3/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/3_3/stdlib_osproc.o \
src/3_3/stdlib_os.o \
src/2_2/stdlib_times.o \
src/3_3/stdlib_posix.o \
src/3_3/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/3_3/stdlib_streams.o \
src/3_3/stdlib_cpuinfo.o \
src/3_3/stdlib_kqueue.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_3/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_3/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/build  $LINK_FLAGS"
    $LINKER -o $binDir/build  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
solaris)
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Isrc -c src/4_1/build.c -o src/4_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/4_1/build.c -o src/4_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_system.c -o src/4_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_system.c -o src/4_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_strutils.c -o src/4_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_strutils.c -o src/4_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_parseutils.c -o src/2_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_parseutils.c -o src/2_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sequtils.c -o src/2_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sequtils.c -o src/2_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_tables.c -o src/2_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_tables.c -o src/2_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_osproc.c -o src/4_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_osproc.c -o src/4_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_os.c -o src/4_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_os.c -o src/4_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_ospaths.c -o src/4_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_ospaths.c -o src/4_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_streams.c -o src/4_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/4_1/stdlib_streams.c -o src/4_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_cpuinfo.c -o src/2_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_cpuinfo.c -o src/2_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_argcvt.c -o src/2_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_argcvt.c -o src/2_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_terminal.c -o src/2_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_terminal.c -o src/2_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/4_1/build.o \
src/4_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/4_1/stdlib_strutils.o \
src/2_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/2_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/2_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/4_1/stdlib_osproc.o \
src/4_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/4_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/4_1/stdlib_streams.o \
src/2_1/stdlib_cpuinfo.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/2_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/2_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/4_1/build.o \
src/4_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/4_1/stdlib_strutils.o \
src/2_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/2_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/2_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/4_1/stdlib_osproc.o \
src/4_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/4_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/4_1/stdlib_streams.o \
src/2_1/stdlib_cpuinfo.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/2_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/2_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/build.c -o src/4_2/build.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/build.c -o src/4_2/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_system.c -o src/4_2/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_system.c -o src/4_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_strutils.c -o src/4_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_strutils.c -o src/4_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_parseutils.c -o src/4_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_parseutils.c -o src/4_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_sequtils.c -o src/4_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_sequtils.c -o src/4_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_tables.c -o src/4_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_tables.c -o src/4_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_osproc.c -o src/4_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_osproc.c -o src/4_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_os.c -o src/4_2/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_os.c -o src/4_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_times.c -o src/2_2/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_times.c -o src/2_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_ospaths.c -o src/4_2/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_ospaths.c -o src/4_2/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_streams.c -o src/4_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_streams.c -o src/4_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_cpuinfo.c -o src/4_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_cpuinfo.c -o src/4_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/cligen_argcvt.c -o src/4_2/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/cligen_argcvt.c -o src/4_2/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_terminal.c -o src/4_2/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_terminal.c -o src/4_2/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/4_2/build.o \
src/4_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/4_2/stdlib_strutils.o \
src/4_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/4_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/4_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/4_2/stdlib_osproc.o \
src/4_2/stdlib_os.o \
src/2_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/4_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/4_2/stdlib_streams.o \
src/4_2/stdlib_cpuinfo.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/4_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/4_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/4_2/build.o \
src/4_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/4_2/stdlib_strutils.o \
src/4_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/4_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/4_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/4_2/stdlib_osproc.o \
src/4_2/stdlib_os.o \
src/2_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/4_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/4_2/stdlib_streams.o \
src/4_2/stdlib_cpuinfo.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/4_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/4_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/build  $LINK_FLAGS"
    $LINKER -o $binDir/build  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
freebsd)
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/build.c -o src/3_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/build.c -o src/3_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_system.c -o src/5_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_system.c -o src/5_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_osproc.c -o src/5_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_osproc.c -o src/5_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_os.c -o src/5_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_os.c -o src/5_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_times.c -o src/5_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_times.c -o src/5_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_ospaths.c -o src/5_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_ospaths.c -o src/5_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_streams.c -o src/3_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_streams.c -o src/3_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_cpuinfo.c -o src/3_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_cpuinfo.c -o src/3_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_kqueue.c -o src/3_1/stdlib_kqueue.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_kqueue.c -o src/3_1/stdlib_kqueue.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/3_1/build.o \
src/5_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/5_1/stdlib_osproc.o \
src/5_1/stdlib_os.o \
src/5_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/5_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/3_1/stdlib_streams.o \
src/3_1/stdlib_cpuinfo.o \
src/3_1/stdlib_kqueue.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/3_1/build.o \
src/5_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/5_1/stdlib_osproc.o \
src/5_1/stdlib_os.o \
src/5_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/5_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/3_1/stdlib_streams.o \
src/3_1/stdlib_cpuinfo.o \
src/3_1/stdlib_kqueue.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/build.c -o src/3_2/build.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/build.c -o src/3_2/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_system.c -o src/5_2/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_system.c -o src/5_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_strutils.c -o src/3_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_strutils.c -o src/3_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_parseutils.c -o src/3_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_parseutils.c -o src/3_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sequtils.c -o src/3_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sequtils.c -o src/3_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_tables.c -o src/3_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_tables.c -o src/3_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_osproc.c -o src/5_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_osproc.c -o src/5_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_os.c -o src/5_2/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_os.c -o src/5_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_times.c -o src/5_2/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_times.c -o src/5_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_ospaths.c -o src/5_2/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_ospaths.c -o src/5_2/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_streams.c -o src/3_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_streams.c -o src/3_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_cpuinfo.c -o src/3_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_cpuinfo.c -o src/3_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_kqueue.c -o src/3_2/stdlib_kqueue.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_kqueue.c -o src/3_2/stdlib_kqueue.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/cligen_argcvt.c -o src/3_2/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/cligen_argcvt.c -o src/3_2/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_terminal.c -o src/3_2/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_terminal.c -o src/3_2/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/3_2/build.o \
src/5_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/3_2/stdlib_strutils.o \
src/3_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/5_2/stdlib_osproc.o \
src/5_2/stdlib_os.o \
src/5_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/5_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/3_2/stdlib_streams.o \
src/3_2/stdlib_cpuinfo.o \
src/3_2/stdlib_kqueue.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/3_2/build.o \
src/5_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/3_2/stdlib_strutils.o \
src/3_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/5_2/stdlib_osproc.o \
src/5_2/stdlib_os.o \
src/5_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/5_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/3_2/stdlib_streams.o \
src/3_2/stdlib_cpuinfo.o \
src/3_2/stdlib_kqueue.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/build  $LINK_FLAGS"
    $LINKER -o $binDir/build  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
netbsd)
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/build.c -o src/3_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/build.c -o src/3_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_system.c -o src/5_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_system.c -o src/5_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_osproc.c -o src/5_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_osproc.c -o src/5_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/6_1/stdlib_os.c -o src/6_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/6_1/stdlib_os.c -o src/6_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_times.c -o src/5_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_times.c -o src/5_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_ospaths.c -o src/5_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_ospaths.c -o src/5_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_streams.c -o src/3_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_streams.c -o src/3_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/6_1/stdlib_cpuinfo.c -o src/6_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/6_1/stdlib_cpuinfo.c -o src/6_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_kqueue.c -o src/3_1/stdlib_kqueue.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_kqueue.c -o src/3_1/stdlib_kqueue.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/3_1/build.o \
src/5_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/5_1/stdlib_osproc.o \
src/6_1/stdlib_os.o \
src/5_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/5_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/3_1/stdlib_streams.o \
src/6_1/stdlib_cpuinfo.o \
src/3_1/stdlib_kqueue.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/3_1/build.o \
src/5_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/5_1/stdlib_osproc.o \
src/6_1/stdlib_os.o \
src/5_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/5_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/3_1/stdlib_streams.o \
src/6_1/stdlib_cpuinfo.o \
src/3_1/stdlib_kqueue.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/build.c -o src/3_2/build.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/build.c -o src/3_2/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_system.c -o src/5_2/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_system.c -o src/5_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_strutils.c -o src/3_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_strutils.c -o src/3_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_parseutils.c -o src/3_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_parseutils.c -o src/3_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sequtils.c -o src/3_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sequtils.c -o src/3_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_tables.c -o src/3_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_tables.c -o src/3_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_osproc.c -o src/5_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_osproc.c -o src/5_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/6_2/stdlib_os.c -o src/6_2/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/6_2/stdlib_os.c -o src/6_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_times.c -o src/5_2/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_times.c -o src/5_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_ospaths.c -o src/5_2/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_ospaths.c -o src/5_2/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_streams.c -o src/3_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_streams.c -o src/3_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/6_2/stdlib_cpuinfo.c -o src/6_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/6_2/stdlib_cpuinfo.c -o src/6_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_kqueue.c -o src/3_2/stdlib_kqueue.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_kqueue.c -o src/3_2/stdlib_kqueue.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/cligen_argcvt.c -o src/3_2/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/cligen_argcvt.c -o src/3_2/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_terminal.c -o src/3_2/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_terminal.c -o src/3_2/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/3_2/build.o \
src/5_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/3_2/stdlib_strutils.o \
src/3_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/5_2/stdlib_osproc.o \
src/6_2/stdlib_os.o \
src/5_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/5_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/3_2/stdlib_streams.o \
src/6_2/stdlib_cpuinfo.o \
src/3_2/stdlib_kqueue.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/3_2/build.o \
src/5_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/3_2/stdlib_strutils.o \
src/3_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/5_2/stdlib_osproc.o \
src/6_2/stdlib_os.o \
src/5_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/5_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/3_2/stdlib_streams.o \
src/6_2/stdlib_cpuinfo.o \
src/3_2/stdlib_kqueue.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/build  $LINK_FLAGS"
    $LINKER -o $binDir/build  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
openbsd)
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/build.c -o src/3_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/build.c -o src/3_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_system.c -o src/5_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_system.c -o src/5_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_osproc.c -o src/5_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_osproc.c -o src/5_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/7_1/stdlib_os.c -o src/7_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/7_1/stdlib_os.c -o src/7_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_times.c -o src/5_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_times.c -o src/5_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_ospaths.c -o src/5_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_ospaths.c -o src/5_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_streams.c -o src/3_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_streams.c -o src/3_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/6_1/stdlib_cpuinfo.c -o src/6_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/6_1/stdlib_cpuinfo.c -o src/6_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_kqueue.c -o src/3_1/stdlib_kqueue.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_kqueue.c -o src/3_1/stdlib_kqueue.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/3_1/build.o \
src/5_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/5_1/stdlib_osproc.o \
src/7_1/stdlib_os.o \
src/5_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/5_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/3_1/stdlib_streams.o \
src/6_1/stdlib_cpuinfo.o \
src/3_1/stdlib_kqueue.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/3_1/build.o \
src/5_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/5_1/stdlib_osproc.o \
src/7_1/stdlib_os.o \
src/5_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/5_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/3_1/stdlib_streams.o \
src/6_1/stdlib_cpuinfo.o \
src/3_1/stdlib_kqueue.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/build.c -o src/3_2/build.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/build.c -o src/3_2/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_system.c -o src/5_2/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_system.c -o src/5_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_strutils.c -o src/3_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_strutils.c -o src/3_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_parseutils.c -o src/3_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_parseutils.c -o src/3_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sequtils.c -o src/3_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sequtils.c -o src/3_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_tables.c -o src/3_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_tables.c -o src/3_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_osproc.c -o src/5_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_osproc.c -o src/5_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/7_2/stdlib_os.c -o src/7_2/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/7_2/stdlib_os.c -o src/7_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_times.c -o src/5_2/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_times.c -o src/5_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_ospaths.c -o src/5_2/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_ospaths.c -o src/5_2/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_streams.c -o src/3_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_streams.c -o src/3_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/6_2/stdlib_cpuinfo.c -o src/6_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/6_2/stdlib_cpuinfo.c -o src/6_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_kqueue.c -o src/3_2/stdlib_kqueue.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_kqueue.c -o src/3_2/stdlib_kqueue.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/cligen_argcvt.c -o src/3_2/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/cligen_argcvt.c -o src/3_2/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_terminal.c -o src/3_2/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_terminal.c -o src/3_2/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/3_2/build.o \
src/5_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/3_2/stdlib_strutils.o \
src/3_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/5_2/stdlib_osproc.o \
src/7_2/stdlib_os.o \
src/5_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/5_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/3_2/stdlib_streams.o \
src/6_2/stdlib_cpuinfo.o \
src/3_2/stdlib_kqueue.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/3_2/build.o \
src/5_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/3_2/stdlib_strutils.o \
src/3_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/5_2/stdlib_osproc.o \
src/7_2/stdlib_os.o \
src/5_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/5_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/3_2/stdlib_streams.o \
src/6_2/stdlib_cpuinfo.o \
src/3_2/stdlib_kqueue.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/build  $LINK_FLAGS"
    $LINKER -o $binDir/build  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
haiku)
  case $mycpu in
  i386)
    echo "$CC $COMP_FLAGS -Isrc -c src/8_1/build.c -o src/8_1/build.o"
    $CC $COMP_FLAGS -Isrc -c src/8_1/build.c -o src/8_1/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/8_1/stdlib_system.c -o src/8_1/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/8_1/stdlib_system.c -o src/8_1/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sharedlist.c -o src/2_1/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_locks.c -o src/2_1/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_strutils.c -o src/3_1/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_parseutils.c -o src/3_1/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_math.c -o src/2_1/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_algorithm.c -o src/2_1/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_sequtils.c -o src/3_1/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_macros.c -o src/2_1/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_tables.c -o src/3_1/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_hashes.c -o src/2_1/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strformat.c -o src/2_1/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_unicode.c -o src/2_1/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/8_1/stdlib_osproc.c -o src/8_1/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/8_1/stdlib_osproc.c -o src/8_1/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/7_1/stdlib_os.c -o src/7_1/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/7_1/stdlib_os.c -o src/7_1/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_times.c -o src/2_1/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_posix.c -o src/3_1/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_ospaths.c -o src/5_1/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/5_1/stdlib_ospaths.c -o src/5_1/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_strtabs.c -o src/2_1/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/8_1/stdlib_streams.c -o src/8_1/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/8_1/stdlib_streams.c -o src/8_1/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_cpuinfo.c -o src/2_1/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_cpuinfo.c -o src/2_1/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_cligen.c -o src/2_1/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_parseopt3.c -o src/2_1/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/cligen_argcvt.c -o src/3_1/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_typetraits.c -o src/2_1/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_sets.c -o src/2_1/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/cligen_textUt.c -o src/2_1/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_1/stdlib_terminal.c -o src/3_1/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_colors.c -o src/2_1/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_1/stdlib_termios.c -o src/2_1/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/8_1/build.o \
src/8_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/8_1/stdlib_osproc.o \
src/7_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/5_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/8_1/stdlib_streams.o \
src/2_1/stdlib_cpuinfo.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/8_1/build.o \
src/8_1/stdlib_system.o \
src/2_1/stdlib_sharedlist.o \
src/2_1/stdlib_locks.o \
src/3_1/stdlib_strutils.o \
src/3_1/stdlib_parseutils.o \
src/2_1/stdlib_math.o \
src/2_1/stdlib_algorithm.o \
src/3_1/stdlib_sequtils.o \
src/2_1/stdlib_macros.o \
src/3_1/stdlib_tables.o \
src/2_1/stdlib_hashes.o \
src/2_1/stdlib_strformat.o \
src/2_1/stdlib_unicode.o \
src/8_1/stdlib_osproc.o \
src/7_1/stdlib_os.o \
src/2_1/stdlib_times.o \
src/3_1/stdlib_posix.o \
src/5_1/stdlib_ospaths.o \
src/2_1/stdlib_strtabs.o \
src/8_1/stdlib_streams.o \
src/2_1/stdlib_cpuinfo.o \
src/2_1/cligen_cligen.o \
src/2_1/cligen_parseopt3.o \
src/3_1/cligen_argcvt.o \
src/2_1/stdlib_typetraits.o \
src/2_1/stdlib_sets.o \
src/2_1/cligen_textUt.o \
src/3_1/stdlib_terminal.o \
src/2_1/stdlib_colors.o \
src/2_1/stdlib_termios.o $LINK_FLAGS
    ;;
  amd64)
    echo "$CC $COMP_FLAGS -Isrc -c src/8_2/build.c -o src/8_2/build.o"
    $CC $COMP_FLAGS -Isrc -c src/8_2/build.c -o src/8_2/build.o
    echo "$CC $COMP_FLAGS -Isrc -c src/8_2/stdlib_system.c -o src/8_2/stdlib_system.o"
    $CC $COMP_FLAGS -Isrc -c src/8_2/stdlib_system.c -o src/8_2/stdlib_system.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sharedlist.c -o src/3_2/stdlib_sharedlist.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_locks.c -o src/3_2/stdlib_locks.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_strutils.c -o src/3_2/stdlib_strutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_strutils.c -o src/3_2/stdlib_strutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_parseutils.c -o src/3_2/stdlib_parseutils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_parseutils.c -o src/3_2/stdlib_parseutils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_math.c -o src/2_2/stdlib_math.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_algorithm.c -o src/2_2/stdlib_algorithm.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sequtils.c -o src/3_2/stdlib_sequtils.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_sequtils.c -o src/3_2/stdlib_sequtils.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_macros.c -o src/2_2/stdlib_macros.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_tables.c -o src/3_2/stdlib_tables.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_tables.c -o src/3_2/stdlib_tables.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_hashes.c -o src/2_2/stdlib_hashes.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strformat.c -o src/2_2/stdlib_strformat.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_unicode.c -o src/2_2/stdlib_unicode.o
    echo "$CC $COMP_FLAGS -Isrc -c src/8_2/stdlib_osproc.c -o src/8_2/stdlib_osproc.o"
    $CC $COMP_FLAGS -Isrc -c src/8_2/stdlib_osproc.c -o src/8_2/stdlib_osproc.o
    echo "$CC $COMP_FLAGS -Isrc -c src/7_2/stdlib_os.c -o src/7_2/stdlib_os.o"
    $CC $COMP_FLAGS -Isrc -c src/7_2/stdlib_os.c -o src/7_2/stdlib_os.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_times.c -o src/2_2/stdlib_times.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_times.c -o src/2_2/stdlib_times.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_posix.c -o src/3_2/stdlib_posix.o
    echo "$CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_ospaths.c -o src/5_2/stdlib_ospaths.o"
    $CC $COMP_FLAGS -Isrc -c src/5_2/stdlib_ospaths.c -o src/5_2/stdlib_ospaths.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_strtabs.c -o src/2_2/stdlib_strtabs.o
    echo "$CC $COMP_FLAGS -Isrc -c src/8_2/stdlib_streams.c -o src/8_2/stdlib_streams.o"
    $CC $COMP_FLAGS -Isrc -c src/8_2/stdlib_streams.c -o src/8_2/stdlib_streams.o
    echo "$CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_cpuinfo.c -o src/4_2/stdlib_cpuinfo.o"
    $CC $COMP_FLAGS -Isrc -c src/4_2/stdlib_cpuinfo.c -o src/4_2/stdlib_cpuinfo.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_cligen.c -o src/2_2/cligen_cligen.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_parseopt3.c -o src/2_2/cligen_parseopt3.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/cligen_argcvt.c -o src/3_2/cligen_argcvt.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/cligen_argcvt.c -o src/3_2/cligen_argcvt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_typetraits.c -o src/2_2/stdlib_typetraits.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_sets.c -o src/2_2/stdlib_sets.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/cligen_textUt.c -o src/2_2/cligen_textUt.o
    echo "$CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_terminal.c -o src/3_2/stdlib_terminal.o"
    $CC $COMP_FLAGS -Isrc -c src/3_2/stdlib_terminal.c -o src/3_2/stdlib_terminal.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_colors.c -o src/2_2/stdlib_colors.o
    echo "$CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o"
    $CC $COMP_FLAGS -Isrc -c src/2_2/stdlib_termios.c -o src/2_2/stdlib_termios.o
    echo "$LINKER -o $binDir/build  \
src/8_2/build.o \
src/8_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/3_2/stdlib_strutils.o \
src/3_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/8_2/stdlib_osproc.o \
src/7_2/stdlib_os.o \
src/2_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/5_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/8_2/stdlib_streams.o \
src/4_2/stdlib_cpuinfo.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS"
    $LINKER -o $binDir/build  \
src/8_2/build.o \
src/8_2/stdlib_system.o \
src/3_2/stdlib_sharedlist.o \
src/3_2/stdlib_locks.o \
src/3_2/stdlib_strutils.o \
src/3_2/stdlib_parseutils.o \
src/2_2/stdlib_math.o \
src/2_2/stdlib_algorithm.o \
src/3_2/stdlib_sequtils.o \
src/2_2/stdlib_macros.o \
src/3_2/stdlib_tables.o \
src/2_2/stdlib_hashes.o \
src/2_2/stdlib_strformat.o \
src/2_2/stdlib_unicode.o \
src/8_2/stdlib_osproc.o \
src/7_2/stdlib_os.o \
src/2_2/stdlib_times.o \
src/3_2/stdlib_posix.o \
src/5_2/stdlib_ospaths.o \
src/2_2/stdlib_strtabs.o \
src/8_2/stdlib_streams.o \
src/4_2/stdlib_cpuinfo.o \
src/2_2/cligen_cligen.o \
src/2_2/cligen_parseopt3.o \
src/3_2/cligen_argcvt.o \
src/2_2/stdlib_typetraits.o \
src/2_2/stdlib_sets.o \
src/2_2/cligen_textUt.o \
src/3_2/stdlib_terminal.o \
src/2_2/stdlib_colors.o \
src/2_2/stdlib_termios.o $LINK_FLAGS
    ;;
  arm)
    echo "$LINKER -o $binDir/build  $LINK_FLAGS"
    $LINKER -o $binDir/build  $LINK_FLAGS
    ;;
  *)
    echo "Error: no C code generated for: [$myos: $mycpu]"
    exit 1
    ;;
  esac
  ;;
*)
  echo "Error: no C code generated for: [$myos: $mycpu]"
  exit 1
  ;;
esac

echo "SUCCESS"

