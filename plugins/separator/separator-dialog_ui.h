/* automatically generated from separator-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (separator_dialog_ui)
#endif
#ifdef __GNUC__
static const char separator_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char separator_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.20\"/><requires lib=\"libxfce4ui-2\" version=\"4.12\"/"
  "><object class=\"GtkImage\" id=\"image1\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"icon_name\">help-browser</property></object><object class=\"GtkImag"
  "e\" id=\"image2\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">False</property><property name=\"icon_name\">window-c"
  "lose-symbolic</property></object><object class=\"GtkListStore\" id=\"st"
  "yle-model\"><columns><column type=\"gchararray\"/></columns><data><row>"
  "<col id=\"0\" translatable=\"yes\">Transparent</col></row><row><col id="
  "\"0\" translatable=\"yes\">Separator</col></row><row><col id=\"0\" tran"
  "slatable=\"yes\">Handle</col></row><row><col id=\"0\" translatable=\"ye"
  "s\">Dots</col></row></data></object><object class=\"XfceTitledDialog\" "
  "id=\"dialog\"><property name=\"can_focus\">False</property><property na"
  "me=\"title\" translatable=\"yes\">Separator</property><property name=\""
  "icon_name\">org.xfce.panel.separator</property><property name=\"type_hi"
  "nt\">normal</property><child internal-child=\"vbox\"><object class=\"Gt"
  "kBox\" id=\"dialog-vbox2\"><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">False</property><property name=\"orientation"
  "\">vertical</property><property name=\"spacing\">2</property><child int"
  "ernal-child=\"action_area\"><object class=\"GtkButtonBox\" id=\"dialog-"
  "action_area2\"><property name=\"visible\">True</property><property name"
  "=\"can_focus\">False</property><property name=\"layout_style\">end</pro"
  "perty><child><object class=\"GtkButton\" id=\"close-button\"><property "
  "name=\"label\" translatable=\"yes\">_Close</property><property name=\"v"
  "isible\">True</property><property name=\"can_focus\">True</property><pr"
  "operty name=\"receives_default\">True</property><property name=\"image\""
  ">image2</property><property name=\"use_underline\">True</property></obj"
  "ect><packing><property name=\"expand\">False</property><property name=\""
  "fill\">False</property><property name=\"position\">0</property></packin"
  "g></child><child><object class=\"GtkButton\" id=\"help-button\"><proper"
  "ty name=\"label\" translatable=\"yes\">_Help</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"receives_default\">True</property><property name=\"image"
  "\">image1</property><property name=\"use_underline\">True</property></o"
  "bject><packing><property name=\"expand\">False</property><property name"
  "=\"fill\">False</property><property name=\"position\">1</property><prop"
  "erty name=\"secondary\">True</property></packing></child></object><pack"
  "ing><property name=\"expand\">False</property><property name=\"fill\">F"
  "alse</property><property name=\"pack_type\">end</property><property nam"
  "e=\"position\">0</property></packing></child><child><object class=\"Gtk"
  "Frame\" id=\"frame1\"><property name=\"visible\">True</property><proper"
  "ty name=\"can_focus\">False</property><property name=\"border_width\">6"
  "</property><property name=\"label_xalign\">0</property><property name=\""
  "shadow_type\">none</property><child><object class=\"GtkAlignment\" id=\""
  "alignment1\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"left_padding\">12</propert"
  "y><child><object class=\"GtkBox\" id=\"vbox3\"><property name=\"visible"
  "\">True</property><property name=\"can_focus\">False</property><propert"
  "y name=\"border_width\">6</property><property name=\"orientation\">vert"
  "ical</property><property name=\"spacing\">6</property><child><object cl"
  "ass=\"GtkBox\" id=\"hbox1\"><property name=\"visible\">True</property><"
  "property name=\"can_focus\">False</property><property name=\"spacing\">"
  "12</property><child><object class=\"GtkLabel\" id=\"label2\"><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"label\" translatable=\"yes\">_Style:</property><"
  "property name=\"use_underline\">True</property><property name=\"mnemoni"
  "c_widget\">style</property></object><packing><property name=\"expand\">"
  "False</property><property name=\"fill\">True</property><property name=\""
  "position\">0</property></packing></child><child><object class=\"GtkComb"
  "oBox\" id=\"style\"><property name=\"visible\">True</property><property"
  " name=\"can_focus\">False</property><property name=\"model\">style-mode"
  "l</property><child><object class=\"GtkCellRendererText\" id=\"cellrende"
  "rertext1\"/><attributes><attribute name=\"text\">0</attribute></attribu"
  "tes></child></object><packing><property name=\"expand\">True</property>"
  "<property name=\"fill\">True</property><property name=\"position\">1</p"
  "roperty></packing></child></object><packing><property name=\"expand\">F"
  "alse</property><property name=\"fill\">True</property><property name=\""
  "position\">0</property></packing></child><child><object class=\"GtkChec"
  "kButton\" id=\"expand\"><property name=\"label\" translatable=\"yes\">_"
  "Expand</property><property name=\"visible\">True</property><property na"
  "me=\"can_focus\">True</property><property name=\"receives_default\">Fal"
  "se</property><property name=\"use_underline\">True</property><property "
  "name=\"draw_indicator\">True</property></object><packing><property name"
  "=\"expand\">False</property><property name=\"fill\">True</property><pro"
  "perty name=\"position\">1</property></packing></child></object></child>"
  "</object></child><child type=\"label\"><object class=\"GtkLabel\" id=\""
  "label1\"><property name=\"visible\">True</property><property name=\"can"
  "_focus\">False</property><property name=\"label\" translatable=\"yes\">"
  "Appearance</property><attributes><attribute name=\"weight\" value=\"bol"
  "d\"/></attributes></object></child></object><packing><property name=\"e"
  "xpand\">False</property><property name=\"fill\">True</property><propert"
  "y name=\"position\">1</property></packing></child></object></child><act"
  "ion-widgets><action-widget response=\"0\">close-button</action-widget><"
  "action-widget response=\"0\">help-button</action-widget></action-widget"
  "s></object></interface>"
};

static const unsigned separator_dialog_ui_length = 5763u;

