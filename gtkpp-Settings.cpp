#include <gtkpp/gtkpp-Settings.hpp>
#include <gtkpp/gtkpp-Widget.hpp>

namespace gtkpp
{
    Settings::Settings(GtkSettings* original) : settings{original}{}

    unsigned int Settings::connect(const char* signal, GCallback callBack, Widget* widget)
    {
        return g_signal_connect(settings, signal, G_CALLBACK(callBack), widget->getPtr());
    }
}