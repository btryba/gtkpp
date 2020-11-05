#ifndef __GTKPP_BOX_HPP__
#define __GTKPP_BOX_HPP__

#include <gtkpp/gtkpp-Container.hpp>

namespace gtkpp
{
    class Box : public Container
    {
        public:
        Box(GtkOrientation orientation);
        Box(GtkOrientation orientation, int spacing);
        Box(GtkBox* original, bool callAddReference = true);
        virtual ~Box();
        void pack_start(Widget& child, bool expand = true, bool fill = true, unsigned int padding = 0);
    };
}

#endif //__GTKPP_BOX_HPP__