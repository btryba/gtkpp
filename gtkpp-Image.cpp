#include <gtkpp/gtkpp-Image.hpp>

namespace gtkpp
{
    Image::Image(const char* name, GtkIconSize iconSize) 
        : Widget{(GtkWidget*)gtk_image_new_from_icon_name(name, iconSize), false} {}

    Image::Image(GtkImage* original, bool callAddReference)
        : Widget((GtkWidget*)original, callAddReference){}

    Image::Image() : Widget{(GtkWidget*)gtk_image_new(), false} {}

    void Image::set_from_icon_name(const char* iconName, GtkIconSize iconSize)
    {
        gtk_image_set_from_icon_name((GtkImage*)widget, iconName, iconSize);
    }
}