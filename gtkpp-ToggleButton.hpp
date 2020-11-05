#ifndef __GTKPP_TOGGLEBUTTON_HPP__
#define __GTKPP_TOGGLEBUTTON_HPP__

#include <gtkpp/gtkpp-Button.hpp>

namespace gtkpp
{
    class ToggleButton : public Button
    {
        public:

        ToggleButton(const char *name, GtkActionGroup* actionGroup);
        ToggleButton();
        ToggleButton(GtkToggleButton* original, bool callAddReference = true);
        virtual ~ToggleButton();
        bool get_active();
        void set_active(bool toSet);
    };
}

#endif //__GTKPP_TOGGLEBUTTON_HPP__