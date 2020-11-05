#ifndef __GTKPP_STYLECONTEXT_HPP__
#define __GTKPP_STYLECONTEXT_HPP__

extern "C"
{
    #include <gtk/gtk.h>
}

namespace gtkpp
{
    class StyleContext
    {
        GtkStyleContext* context;
        
        public:
        StyleContext(GtkStyleContext* context);
        virtual ~StyleContext();
        void add_class(const char* className);
        void invalidate();
    };
}

#endif //__GTKPP_STYLECONTEXT_HPP__