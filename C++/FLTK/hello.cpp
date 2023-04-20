#include <FL/Enumerations.H>
#include <FL/Fl.H>
#include <FL/Fl_window.h>
#include <FL/Fl_Box.h>

int main(int argc,  char **argv) {
    Fl_Window *window = new Fl_Window(600, 360);
    Fl_Box *box = new Fl_Box(40, 80, 520, 200, "Hello, World!");
    box->box(FL_UP_BOX);
    box->labelsize(50);
    box->labelfont(FL_BOLD+FL_ITALIC);
    box->labeltype(FL_SHADOW_LABEL);
    window->end();
    window->show(argc, argv);
    return Fl::run();
}
