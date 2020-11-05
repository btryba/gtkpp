#include <gtkpp/gtkpp-StyleContext.hpp>

namespace gtkpp
{
    StyleContext::StyleContext(GtkStyleContext* context): context(context) {}

    StyleContext::~StyleContext(){}
    
    void StyleContext::add_class(const char* className)
    {
        gtk_style_context_add_class(context, className);
    }

    void StyleContext::invalidate()
    {
        gtk_style_context_invalidate(context);
    }
}