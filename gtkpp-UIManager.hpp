#ifndef __GTKPP_UIMANAGER_HPP__
#define __GTKPP_UIMANAGER_HPP__

extern "C"
{
    #include <gtk/gtk.h>
}

namespace gtkpp
{
    struct UIManager
    {
        GtkUIManager* ui_manager;
        public:
        UIManager();
        GtkUIManager* getPtr();
        void insert_action_group(GtkActionGroup* actionGroup);
    };
}

#endif //__GTKPP_UIMANAGER_HPP__