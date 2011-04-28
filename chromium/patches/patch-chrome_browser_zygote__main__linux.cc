$NetBSD: patch-chrome_browser_zygote__main__linux.cc,v 1.1 2011/04/28 03:09:02 rxg Exp $

--- chrome/browser/zygote_main_linux.cc.orig	2011-04-13 08:01:44.000000000 +0000
+++ chrome/browser/zygote_main_linux.cc
@@ -2,12 +2,18 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#include "build/build_config.h"
+
 #include <dlfcn.h>
 #include <fcntl.h>
 #include <pthread.h>
+#if defined(OS_BSD)
+#include <signal.h>
+#else
 #include <sys/epoll.h>
 #include <sys/prctl.h>
 #include <sys/signal.h>
+#endif
 #include <sys/socket.h>
 #include <sys/stat.h>
 #include <sys/types.h>
@@ -50,7 +56,7 @@
 #include "unicode/timezone.h"
 
 #if defined(ARCH_CPU_X86_FAMILY) && !defined(CHROMIUM_SELINUX) && \
-    !defined(__clang__)
+    !defined(__clang__) && !defined(OS_BSD)
 // The seccomp sandbox is enabled on all ia32 and x86-64 processor as long as
 // we aren't using SELinux or clang.
 #define SECCOMP_SANDBOX
@@ -173,6 +179,11 @@ class Zygote {
         case ZygoteHost::kCmdGetSandboxStatus:
           HandleGetSandboxStatus(fd, pickle, iter);
           return false;
+#if defined(OS_BSD)
+        case ZygoteHost::kCmdEnd:
+          _exit(0);
+          return false;
+#endif
         default:
           NOTREACHED();
           break;
@@ -655,7 +666,7 @@ static bool EnterSandbox() {
 
     SkiaFontConfigSetImplementation(
         new FontConfigIPC(kMagicSandboxIPCDescriptor));
-
+#if !defined(OS_BSD)
     // Previously, we required that the binary be non-readable. This causes the
     // kernel to mark the process as non-dumpable at startup. The thinking was
     // that, although we were putting the renderers into a PID namespace (with
@@ -681,6 +692,7 @@ static bool EnterSandbox() {
         return false;
       }
     }
+#endif
   } else if (switches::SeccompSandboxEnabled()) {
     PreSandboxInit();
     SkiaFontConfigSetImplementation(
