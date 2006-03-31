/* $Id: config.h 1137 2004-09-04 01:24:57Z peter $ */

#define yasm__splitpath(path, tail)	yasm__splitpath_win(path, tail)
#define yasm__abspath(path)		yasm__abspath_win(path)
#define yasm__combpath(from, to)	yasm__combpath_win(from, to)

#define _CRT_SECURE_NO_DEPRECATE 1

/* */
/* #undef ENABLE_NLS */

/* Define if you have the `abort' function. */
#define HAVE_ABORT 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix). */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the `argz_append' function. */
/* #undef HAVE_ARGZ_APPEND */

/* Define to 1 if you have the `argz_create_sep' function. */
/* #undef HAVE_ARGZ_CREATE_SEP */

/* Define if you have the <argz.h> header file. */
/* #undef HAVE_ARGZ_H */

/* Define to 1 if you have the `argz_insert' function. */
/* #undef HAVE_ARGZ_INSERT */

/* Define to 1 if you have the `argz_next' function. */
/* #undef HAVE_ARGZ_NEXT */

/* Define to 1 if you have the `argz_stringify' function. */
/* #undef HAVE_ARGZ_STRINGIFY */

/* Define to 1 if you have the <assert.h> header file. */
/* #undef HAVE_ASSERT_H */

/* Define to 1 if you have the `basename' function. */
#define HAVE_BASENAME 1

/* Define to 1 if you have the `bcopy' function. */
/* #undef HAVE_BCOPY */

/* */
/* #undef HAVE_CATGETS */

/* Define to 1 if you have the `closedir' function. */
/* #undef HAVE_CLOSEDIR */

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_DIRENT_H */

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the `dlerror' function. */
/* #undef HAVE_DLERROR */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define if you don't have `vprintf' but do have `_doprnt'. */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if the system has the type `error_t'. */
/* #undef HAVE_ERROR_T */

/* Define if you have the `fork' function. */
/* #undef HAVE_FORK */

/* */
/* #undef HAVE_GETTEXT */

/* Define if you have the GNU C Library */
/* #undef HAVE_GNU_C_LIBRARY */

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the `index' function. */
/* #undef HAVE_INDEX */

/* Define if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* */
/* #undef HAVE_LC_MESSAGES */

/* Define if you have the libdl library or equivalent. */
/* #undef HAVE_LIBDL */

/* Define if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define if you have the `mergesort function. */
/* #undef HAVE_MERGESORT */

/* Define if you have the `msgctl' function. */
/* #undef HAVE_MSGCTL */

/* Define if you have the `msgget' function. */
/* #undef HAVE_MSGGET */

/* Define if you have the `msgrcv' function. */
/* #undef HAVE_MSGRCV */

/* Define if you have the `msgsnd' function. */
/* #undef HAVE_MSGSND */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the `opendir' function. */
/* #undef HAVE_OPENDIR */

/* Define if libtool can extract symbol lists from object files. */
/* #undef HAVE_PRELOADED_SYMBOLS */

/* Define to 1 if you have the `readdir' function. */
/* #undefine HAVE_READDIR */

/* Define to 1 if you have the `rindex' function. */
/* #undef HAVE_RINDEX */

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Define if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1
#define snprintf _snprintf

/* Define if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* */
/* #undef HAVE_STPCPY */

/* Define if you have the `strcasecmp' function. */
/* #undef HAVE_STRCASECMP */

/* Define if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strcmp' function. */
#define HAVE_STRCMP 1

/* Define if you have the `strcmpi' function. */
/* #undef HAVE_STRCMPI */

/* Define if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define if you have the `stricmp' function. */
#define HAVE__STRICMP 1

/* Define if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if you have the `strncasecmp' function. */
/* #undef HAVE_STRNCASECMP */

/* Define if you have the `strrchr' function. */
/* #undef HAVE_STRRCHR */

/* Define if you have the `strsep' function. */
/* #undef HAVE_STRSEP */

/* Define if you have the <sys/cdefs.h> header file. */
/* #undef HAVE_SYS_CDEFS_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define if you have the <sys/ipc.h> header file. */
/* #undef HAVE_SYS_IPC_H */

/* Define if you have the <sys/msg.h> header file. */
/* #undef HAVE_SYS_MSG_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define if you have the <sys/queue.h> header file. */
/* #undef HAVE_SYS_QUEUE_H */

/* Define if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if you have <sys/wait.h> that is POSIX.1 compatible. */
/* #undef HAVE_SYS_WAIT_H */

/* Define if you have the `toascii' function. */
#define HAVE_TOASCII 1
#define toascii __toascii

/* Define if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define if you have the vprintf function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
/* #undef HAVE_VSNPRINTF */

/* Define if you have the `wait' function. */
/* #undef HAVE_WAIT */

/* Define if `fork' works. */
/* #undef HAVE_WORKING_FORK */

/* Define if `vfork' works. */
/* #undef HAVE_WORKING_VFORK */

/* Define if the OS needs help to load dependent libraries for dlopen(). */
#define LTDL_DLOPEN_DEPLIBS 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LTDL_OBJDIR ".libs/"

/* Define to the name of the environment variable that determines the dynamic
   library search path. */
#define LTDL_SHLIBPATH_VAR "PATH"

/* Define to the extension used for shared libraries, say, ".so". */
#define LTDL_SHLIB_EXT ".dll"

/* Define to the system default library search path. */
#define LTDL_SYSSEARCHPATH "/lib:/usr/lib"

/* Define if dlsym() requires a leading underscode in symbol names. */
/* #undef NEED_USCORE */

/* Name of package */
#define PACKAGE "yasm"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-yasm@tortall.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "yasm"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "yasm 0.5.0rc1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "yasm"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.5.0rc1"

/* Define if the C compiler supports function prototypes. */
#define PROTOTYPES 1

/* Define if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Combined test for fork/wait/msg* */
/* #undef USE_FORKWAITMSG */

/* Version number of package */
#define VERSION "0.5.0rc1"

/* Define if using the dmalloc debugging malloc package */
/* #undef WITH_DMALLOC */

/* Make sure we see all GNU extensions. */
/* #undef _GNU_SOURCE */

/* Make sure we see all SVID extensions. */
/* #undef _SVID_SOURCE */

/* Define like PROTOTYPES; this can be used by system headers. */
#define __PROTOTYPES 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to a type to use for `error_t' if it is not otherwise available. */
#define error_t int

/* Define as `__inline' if that's what the C compiler calls it, or to nothing
   if it is not supported. */
/* #undef inline */

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to `int' if <sys/types.h> doesn't define. */
#define pid_t int

/* Define to `unsigned' if <sys/types.h> doesn't define. */
/* #undef size_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */
