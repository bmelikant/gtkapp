#include <gtk/gtk.h>
#include <console.h>

int main(int argc, char *argv[]) {
    GtkApplication *app;
    int status;

    /** initialize the application */
    app = gtk_application_new("org.gtk.virtualmachine", G_APPLICATION_FLAGS_NONE);

    /** create controls and connect events */
    g_signal_connect(G_APPLICATION(app), "activate", G_CALLBACK(createWidgets), NULL);

    /** run application */
    status = g_application_run(G_APPLICATION(app), argc, argv);

    /** destroy application and return status code */
    g_object_unref(app);
    return status;
}