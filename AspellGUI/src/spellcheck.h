/******************************************************
*
*     ©keithhedger Tue 16 Jul 20:46:19 BST 2013
*     kdhedger68713@gmail.com
*
*     spellcheck.h
* 
******************************************************/
#include <gtk/gtk.h>

#ifndef _SPELLCHECK_
#define _SPELLCHECK_

void checkWord(GtkWidget* widget,gpointer data);
void doChangeWord(GtkWidget* widget,gpointer data);
void doAddIgnoreWord(GtkWidget* widget,gpointer data);
void doSpellCheckDoc(GtkWidget* widget,gpointer data);
void doCancelCheck(GtkWidget* widget,gpointer data);

#endif
