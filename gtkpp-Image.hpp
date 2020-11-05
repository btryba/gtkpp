#ifndef __GTKPP_IMAGE_HPP__
#define __GTKPP_IMAGE_HPP__

#include <gtkpp/gtkpp-Widget.hpp>

namespace gtkpp
{
    struct Image : public Widget
    {
        public:
        Image();
        Image(const char* name, GtkIconSize iconSize);
        Image(GtkImage* original, bool callAddReference = true);
        void set_from_icon_name(const char* iconName, GtkIconSize iconSize);
    };
}

#endif //__GTKPP_IMAGE_HPP__