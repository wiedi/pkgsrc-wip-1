$NetBSD: patch-webkit_plugins_ppapi_ppapi__plugin__instance.cc,v 1.1 2011/04/28 03:09:03 rxg Exp $

--- webkit/plugins/ppapi/ppapi_plugin_instance.cc.orig	2011-04-13 08:01:07.000000000 +0000
+++ webkit/plugins/ppapi/ppapi_plugin_instance.cc
@@ -304,7 +304,7 @@ PluginInstance::PluginInstance(PluginDel
       plugin_pdf_interface_(NULL),
       plugin_selection_interface_(NULL),
       plugin_zoom_interface_(NULL),
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
       canvas_(NULL),
 #endif  // defined(OS_LINUX)
       plugin_print_interface_(NULL),
@@ -335,7 +335,7 @@ PluginInstance::~PluginInstance() {
   module_->InstanceDeleted(this);
 
   ResourceTracker::Get()->InstanceDeleted(pp_instance_);
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   ranges_.clear();
 #endif  // defined(OS_LINUX)
 }
@@ -844,7 +844,7 @@ int PluginInstance::PrintBegin(const gfx
   if (!num_pages)
     return 0;
   current_print_settings_ = print_settings;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   canvas_ = NULL;
   ranges_.clear();
 #endif  // defined(OS_LINUX)
@@ -855,7 +855,7 @@ bool PluginInstance::PrintPage(int page_
   DCHECK(plugin_print_interface_);
   PP_PrintPageNumberRange_Dev page_range;
   page_range.first_page_number = page_range.last_page_number = page_number;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   ranges_.push_back(page_range);
   canvas_ = canvas;
   return true;
@@ -886,7 +886,7 @@ bool PluginInstance::PrintPageHelper(PP_
 }
 
 void PluginInstance::PrintEnd() {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // This hack is here because all pages need to be written to PDF at once.
   if (!ranges_.empty())
     PrintPageHelper(&(ranges_.front()), ranges_.size(), canvas_);
@@ -977,7 +977,7 @@ bool PluginInstance::PrintPDFOutput(PP_R
 #endif  // defined(OS_WIN)
 
   bool ret = false;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // On Linux we need to get the backing PdfPsMetafile and write the bits
   // directly.
   cairo_t* context = canvas->beginPlatformPaint();
