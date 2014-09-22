/*
 *
 * K.D.Hedger 2013 <kdhedger68713@gmail.com>
 *
 * globals.h
 *
*/

#ifndef _GLOBALS_
#define _GLOBALS_

#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <aspell.h>

#include "config.h"

#ifndef _USEQT5_
	#include <gtk/gtk.h>
	typedef GtkWidget Widget;
#else
	#include <glib.h>
	#include <QtWidgets>
	typedef QWidget Widget;

	extern QApplication*	holdapp;
#endif

#define MYEMAIL "kdhedger68713@gmail.com"
#define MYWEBSITE "http://keithhedger.hostingsiteforfree.com"
#define	QTMAPPICON DATADIR "/pixmaps/AspellGUI48.png"

extern Widget*				scrollBox;
extern Widget*				textBox;
extern Widget*				viewBox;
extern Widget*				bufferBox;
extern Widget*				window;
extern Widget*				badWordLabel;

extern Widget*				spellCheckWord;
extern Widget*				wordListDropbox;
#endif

extern char*				badWord;
extern char*				goodWord;

extern AspellConfig*		aspellConfig;
extern AspellSpeller*		spellChecker;

extern int					numWords;

