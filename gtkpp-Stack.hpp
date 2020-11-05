#ifndef __GTKPP_STACK_HPP__
#define __GTKPP_STACK_HPP__

#include <gtkpp/gtkpp-Container.hpp>

namespace gtkpp
{
    class Stack : public Container
    {
        public:
        Stack();
        Stack(GtkStack* original, bool callAddReference = true);
        virtual ~Stack();
        void set_transition_type(GtkStackTransitionType type);
        void set_transition_duration(int duration);
        void add_named(Widget& childWidget, const char* childName);
        void add_named(GtkWidget* childWidget, const char* childName);
        void set_visible_child_name(const char* name);
    };
}

#endif //__GTKPP_STACK_HPP__