/*
 *
 * K.D.Hedger 2013 <kdhedger68713@gmail.com>
 *
 * globals.cpp
 *
*/

#include <stdlib.h>
#include <gtk/gtk.h>
#include <string.h>
#include <sys/stat.h>

#include <aspell.h>
#include "globals.h"

GtkWidget*		scrollBox=NULL;
GtkWidget*		textBox=NULL;
GtkWidget*		viewBox=NULL;
GtkWidget*		bufferBox=NULL;
GtkWidget*		window=NULL;
GtkWidget*		badWordLabel=NULL;

//spellcheck
GtkWidget*		spellCheckWord=NULL;
GtkWidget*		wordListDropbox;
char*			badWord=NULL;
char*			goodWord=NULL;
AspellConfig*	aspellConfig;
AspellSpeller*	spellChecker=0;

int				numWords=0;

