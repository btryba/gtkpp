#include <gtkpp/gtkpp-UIManager.hpp>

namespace gtkpp
{
    UIManager::UIManager()
    {
        ui_manager = gtk_ui_manager_new();
    }
    GtkUIManager* UIManager::getPtr()
    {
        return ui_manager;
    }
    void UIManager::insert_action_group(GtkActionGroup* actionGroup)
    {
        gtk_ui_manager_insert_action_group (ui_manager, actionGroup, 0);
    }
}