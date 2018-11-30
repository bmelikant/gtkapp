#ifndef _CONSOLE_H
#define _CONSOLE_H

#include <gtk/gtk.h>

#ifndef _CONSOLE_WIDTH
#define CONSOLE_WIDTH 80
#endif
#ifndef _CONSOLE_HEIGHT
#define CONSOLE_HEIGHT 25
#endif
#ifndef _TEXT_PIXELS_WIDTH
#define _TEXT_PIXELS_WIDTH 8
#endif
#ifndef _TEXT_PIXELS_HEIGHT
#define _TEXT_PIXELS_HEIGHT 8
#endif

void createWidgets(GtkApplication *app, gpointer userData);

#endif