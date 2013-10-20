/*
 *
 * K.D.Hedger 2012 <kdhedger68713@gmail.com>
 *
 */

#include <stdlib.h>
#include <gtk/gtk.h>
#include <string.h>
#include <sys/stat.h>
#include "globals.h"

#include "guis.h"


int main(int argc,char **argv)
{
	AspellCanHaveError*	possible_err;

	gtk_init(&argc,&argv);

	aspellConfig=new_aspell_config();
	possible_err=new_aspell_speller(aspellConfig);

	if(aspell_error_number(possible_err)!= 0)
		puts(aspell_error_message(possible_err));
	else
		spellChecker=to_aspell_speller(possible_err);

	buildMainGui();

	gtk_widget_show_all(window);
	gtk_main();
}