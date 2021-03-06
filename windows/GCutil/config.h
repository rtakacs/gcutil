/* include/config.h.in.  Generated from configure.ac by autoheader.  */

/* See doc/README.macros. */
/* #undef DARWIN_DONT_PARSE_STACK */

/* Define to force debug headers on all objects. */
/* #define DBG_HDRS_ALL 1 */

/* Define to enable support for DB/UX threads. */
/* #undef DGUX_THREADS */

/* Define to enable eCos target support. */
/* #undef ECOS */

/* Wine getenv may not return NULL for missing entry. */
/* #undef EMPTY_GETENV_RESULTS */

/* Define to enable alternative finalization interface. */
#define ENABLE_DISCLAIM 1

/* Define to support IBM AIX threads. */
/* #undef GC_AIX_THREADS */

/* Define to enable internal debug assertions. */
/* #define GC_ASSERTIONS 1 */

/* Define to enable atomic uncollectible allocation. */
#define GC_ATOMIC_UNCOLLECTABLE 1

/* Define to support Darwin pthreads. */
/* #undef GC_DARWIN_THREADS */

/* Define to enable support for DB/UX threads on i386. */
/* #undef GC_DGUX386_THREADS */

/* Define to build dynamic libraries with only API symbols exposed. */
#define GC_DLL 1

/* Define to support FreeBSD pthreads. */
/* #undef GC_FREEBSD_THREADS */

/* Define to include support for gcj. */
#define GC_GCJ_SUPPORT 1

/* Define to support GNU pthreads. */
/* #undef GC_GNU_THREADS */

/* Define if backtrace information is supported. */
/* #undef GC_HAVE_BUILTIN_BACKTRACE */

/* Define to support HP/UX 11 pthreads. */
/* #undef GC_HPUX_THREADS */

/* Enable Win32 DllMain-based approach of threads registering. */
/* #undef GC_INSIDE_DLL */

/* Define to support Irix pthreads. */
/* #undef GC_IRIX_THREADS */

/* Define to support pthreads on Linux. */
/* #undef GC_LINUX_THREADS */

/* Define to support NetBSD pthreads. */
/* #undef GC_NETBSD_THREADS */

/* Define to support OpenBSD pthreads. */
/* #undef GC_OPENBSD_THREADS */

/* Define to support Tru64 pthreads. */
/* #undef GC_OSF1_THREADS */

/* Read environment variables from the GC 'env' file. */
/* #undef GC_READ_ENV_FILE */

/* Define to support rtems-pthreads. */
/* #undef GC_RTEMS_PTHREADS */

/* Define to support Solaris pthreads. */
/* #undef GC_SOLARIS_THREADS */

/* Define to support platform-specific threads. */
/* #undef GC_THREADS */

/* Explicitly prefix exported/imported WINAPI symbols with '_'. */
/* #undef GC_UNDERSCORE_STDCALL */

/* Force the GC to use signals based on SIGRTMIN+k. */
/* #undef GC_USESIGRT_SIGNALS */

/* See doc/README.macros. */
/* #undef GC_USE_DLOPEN_WRAP */

/* The major version number of this GC release. */
#define GC_VERSION_MAJOR 7

/* The micro version number of this GC release. */
#define GC_VERSION_MICRO 0

/* The minor version number of this GC release. */
#define GC_VERSION_MINOR 5

/* Define to support pthreads-win32 or winpthreads. */
/* #undef GC_WIN32_PTHREADS */

/* Define to support Win32 threads. */
/* #undef GC_WIN32_THREADS */

/* Define to install pthread_atfork() handlers by default. */
/* #undef HANDLE_FORK */

/* Define to use 'dladdr' function. */
/* #undef HAVE_DLADDR */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/types.h> header file. */
/* #undef HAVE_SYS_TYPES_H */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* See doc/README.macros. */
/* #undef JAVA_FINALIZATION */

/* Define to save back-pointers in debugging headers. */
/* #define KEEP_BACK_PTRS */

/* Define to optimize for large heaps or root sets. */
#define LARGE_CONFIG

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
/* #undef LT_OBJDIR */

/* See doc/README.macros. */
/* #undef MAKE_BACK_GRAPH */

/* Number of GC cycles to wait before unmapping an unused block. */
/* #undef MUNMAP_THRESHOLD */

/* Define to not use system clock (cross compiling). */
/* #undef NO_CLOCK */

/* Disable debugging, like GC_dump and its callees. */
#ifdef NDEBUG
#define NO_DEBUGGING 1
#else
#define DBG_HDRS_ALL 1
#define KEEP_BACK_PTRS 1
#endif

/* Define to make the collector not allocate executable memory by default. */
/* #undef NO_EXECUTE_PERMISSION */

/* Prohibit installation of pthread_atfork() handlers. */
/* #undef NO_HANDLE_FORK */

/* Name of package */
/* #undef PACKAGE */

/* Define to the address where bug reports for this package should be sent. */
/* #undef PACKAGE_BUGREPORT */

/* Define to the full name of this package. */
/* #undef PACKAGE_NAME */

/* Define to the full name and version of this package. */
/* #undef PACKAGE_STRING */

/* Define to the one symbol short name of this package. */
/* #undef PACKAGE_TARNAME */

/* Define to the home page for this package. */
/* #undef PACKAGE_URL */

/* Define to the version of this package. */
/* #undef PACKAGE_VERSION */

/* Define to enable parallel marking. */
/* #undef PARALLEL_MARK */

/* If defined, redirect free to this function. */
/* #undef REDIRECT_FREE */

/* If defined, redirect malloc to this function. */
/* #undef REDIRECT_MALLOC */

/* If defined, redirect GC_realloc to this function. */
/* #undef REDIRECT_REALLOC */

/* The number of caller frames saved when allocating with the debugging API.
   */
/* #define SAVE_CALL_COUNT 8 */

/* Shorten the headers to minimize object size at the expense of checking for
   writes past the end (see doc/README.macros). */
/* #undef SHORT_DBG_HDRS */

/* Define to tune the collector for small heap sizes. */
/* #undef SMALL_CONFIG */

/* See the comment in gcconfig.h. */
/* #undef SOLARIS25_PROC_VDB_BUG_FIXED */

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Define to work around a Solaris 5.3 bug (see dyn_load.c). */
/* #undef SUNOS53_SHARED_LIB */

/* Define to enable thread-local allocation optimization. */
/* #undef THREAD_LOCAL_ALLOC */

/* Use Unicode (W) variant of Win32 API instead of ASCII (A) one. */
/* #undef UNICODE */

/* Define to use of compiler-support for thread-local variables. */
/* #undef USE_COMPILER_TLS */

/* Define to use mmap instead of sbrk to expand the heap. */
/* #undef USE_MMAP */

/* Define to return memory to OS with munmap calls (see doc/README.macros). */
/* #undef USE_MUNMAP */

/* Define to use Win32 VirtualAlloc (instead of sbrk or mmap) to expand the
   heap. */
#define USE_WINALLOC 1

/* Version number of package */
#define VERSION "7.5.0"

/* The POSIX feature macro. */
/* #undef _POSIX_C_SOURCE */

/* Indicates the use of pthreads (NetBSD). */
/* #undef _PTHREADS */

/* Required define if using POSIX threads. */
/* #undef _REENTRANT */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#define inline
#endif