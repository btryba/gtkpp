#ifndef __GTKPP_CONTAINER_HPP__
#define __GTKPP_CONTAINER_HPP__

#include <gtkpp/gtkpp-Widget.hpp>

namespace gtkpp
{
    class Container : public Widget
    {
        public:
        Container();
        Container(GtkContainer* original, bool callAddReference = true);
        void add(Widget& widgetToAdd);
        void remove(Widget& widgetToRemove);
    };
}

#endif //__GTKPP_CONTAINER_HPP__