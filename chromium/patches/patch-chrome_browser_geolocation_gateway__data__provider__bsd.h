$NetBSD: patch-chrome_browser_geolocation_gateway__data__provider__bsd.h,v 1.1 2011/04/28 03:09:02 rxg Exp $

--- chrome/browser/geolocation/gateway_data_provider_bsd.h.orig	2011-04-26 05:17:13.000000000 +0000
+++ chrome/browser/geolocation/gateway_data_provider_bsd.h
@@ -0,0 +1,22 @@
+// Copyright (c) 2010 The Chromium Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style license that can be
+// found in the LICENSE file.
+
+#ifndef CHROME_BROWSER_GEOLOCATION_GATEWAY_DATA_PROVIDER_BSD_H_
+#define CHROME_BROWSER_GEOLOCATION_GATEWAY_DATA_PROVIDER_BSD_H_
+#pragma once
+#include "chrome/browser/geolocation/gateway_data_provider_common.h"
+
+class GatewayDataProviderBSD : public GatewayDataProviderCommon {
+ public:
+  GatewayDataProviderBSD();
+
+ private:
+  virtual ~GatewayDataProviderBSD();
+
+  // GatewayDataProviderCommon
+  virtual GatewayApiInterface* NewGatewayApi();
+  DISALLOW_COPY_AND_ASSIGN(GatewayDataProviderBSD);
+};
+
+#endif  // CHROME_BROWSER_GEOLOCATION_GATEWAY_DATA_PROVIDER_BSD_H_
