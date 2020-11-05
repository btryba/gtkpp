#ifndef __GTKPP_LABEL_HPP__
#define __GTKPP_LABEL_HPP__

#include <gtkpp/gtkpp-Widget.hpp>

namespace gtkpp
{
    struct Label : public Widget
    {
        Label(const char* text);
        Label(GtkLabel* original, bool callAddReference);
        bool get_use_markup();
        void set_markup(char* markup);
        void set_text(const char* text);
        void set_label(const char* label);
        void set_use_markup(bool toUse);
        void set_ellipsize(PangoEllipsizeMode size);
    };
}

#endif //__GTKPP_LABEL_HPP__