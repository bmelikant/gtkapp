#ifndef _cplusplus
#include <stdbool.h>
#endif

#include <gtk/gtk.h>
#include <console.h>

static int computeConsoleWidth();
static int computeConsoleHeight();

/**
 * @fn createWidgets(GtkApplication *app, gpointer userData)
 * This function will create all the controls on the window for the application.
 * It also wires the events to each created control
 */
void createWidgets(GtkApplication *app, gpointer userData) {
    /** window and control definitions */
    GtkWidget *w_window;
    GtkWidget *mb_mainMenuBar;
    GtkWidget *menu_fileMenu, *menu_controlMenu;
    GtkWidget *mbi_exitItem, *mbi_settingsItem;
    GtkWidget *mbi_startMachine, *mbi_stopMachine, *mbi_resetMachine;
    GtkWidget *bmp_consoleArea;

    /** create and size the window */
    w_window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(w_window), "Virtual Machine");
    gtk_window_set_default_size(GTK_WINDOW(w_window),computeConsoleWidth(), computeConsoleHeight());
    gtk_window_set_resizable(GTK_WINDOW(w_window), false);

    /** create the menu bar */

    /** create the console drawing canvas */
    bmp_consoleArea = gtk_drawing_area_new();
    gtk_container_add(GTK_CONTAINER(w_window), bmp_consoleArea);

    /** show the window */
    gtk_widget_show_all(w_window);
}

int computeConsoleWidth() {
    return 640;
}

int computeConsoleHeight() {
    return 480;
}


