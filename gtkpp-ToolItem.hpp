#ifndef __GTKPP_TOOLITEM_HPP__
#define __GTKPP_TOOLITEM_HPP__

#include <gtkpp/gtkpp-Container.hpp>

namespace gtkpp
{
    class ToolItem : public Container
    {
        public:
        ToolItem();
        ToolItem(GtkToolItem* original, bool callAddReference = true);
        virtual ~ToolItem();
        void set_expand(bool setTo);
    };
}

#endif //__GTKPP_TOOLITEM_HPP__