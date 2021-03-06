--- electron/atom/browser/ui/views/submenu_button.cc.orig	2019-09-11 17:30:11 UTC
+++ electron/atom/browser/ui/views/submenu_button.cc
@@ -25,7 +25,7 @@ SubmenuButton::SubmenuButton(const base::string16& tit
     : views::MenuButton(gfx::RemoveAcceleratorChar(title, '&', NULL, NULL),
                         menu_button_listener),
       background_color_(background_color) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Dont' use native style border.
   SetBorder(CreateDefaultBorder());
 #endif
