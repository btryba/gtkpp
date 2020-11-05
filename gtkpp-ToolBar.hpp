#ifndef __GTKPP_TOOLBAR_HPP__
#define __GTKPP_TOOLBAR_HPP__

#include <gtkpp/gtkpp-Container.hpp>

namespace gtkpp
{
    class ToolBar : public Container
    {
        public:
        ToolBar();
        ToolBar(GtkToolbar* original, bool callAddReference = true);
        virtual ~ToolBar();
    };
}

#endif //__GTKPP_TOOLBAR_HPP__