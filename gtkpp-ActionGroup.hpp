#ifndef __GTKPP_ACTIONGROUP_HPP__
#define __GTKPP_ACTIONGROUP_HPP__

extern "C"
{
    #include <gtk/gtk.h>
}

namespace gtkpp
{
    struct ActionGroup
    {
        GtkActionGroup* action_group;
        public:
        GtkActionGroup* getPtr();
    };
}

#endif //__GTKPP_ACTIONGROUP_HPP__