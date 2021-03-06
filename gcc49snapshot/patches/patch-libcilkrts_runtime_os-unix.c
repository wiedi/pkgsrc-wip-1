$NetBSD: patch-libcilkrts_runtime_os-unix.c,v 1.1 2013/11/09 20:22:09 keckhardt Exp $

--- libcilkrts/runtime/os-unix.c.orig	2013-10-29 18:37:47.000000000 +0000
+++ libcilkrts/runtime/os-unix.c
@@ -54,7 +54,7 @@
 #elif defined __APPLE__
 #   include <sys/sysctl.h>
     // Uses sysconf(_SC_NPROCESSORS_ONLN) in verbose output
-#elif defined  __FreeBSD__
+#elif defined  __FreeBSD__ || defined __NetBSD__
 // No additional include files
 #elif defined __CYGWIN__
 // Cygwin on Windows - no additional include files
@@ -366,7 +366,7 @@ COMMON_SYSDEP int __cilkrts_hardware_cpu
     assert((unsigned)count == count);
 
     return count;
-#elif defined  __FreeBSD__ || defined __CYGWIN__
+#elif defined  __FreeBSD__ || defined __NetBSD__ || defined __CYGWIN__
     int ncores = sysconf(_SC_NPROCESSORS_ONLN);
 
     return ncores;
@@ -390,7 +390,7 @@ COMMON_SYSDEP void __cilkrts_sleep(void)
 
 COMMON_SYSDEP void __cilkrts_yield(void)
 {
-#if __APPLE__ || __FreeBSD__ || __VXWORKS__
+#if __APPLE__ || __FreeBSD__ || __NetBSD__ || __VXWORKS__
     // On MacOS, call sched_yield to yield quantum.  I'm not sure why we
     // don't do this on Linux also.
     sched_yield();
