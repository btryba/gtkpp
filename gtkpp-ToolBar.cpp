#include <gtkpp/gtkpp-ToolBar.hpp>

namespace gtkpp
{
    ToolBar::ToolBar()
        : Container((GtkContainer*)gtk_toolbar_new(), false){}

    ToolBar::ToolBar(GtkToolbar* original, bool callAddReference)
        : Container((GtkContainer*)original, callAddReference){}
    
    ToolBar::~ToolBar() { }
}