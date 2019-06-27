#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <vector>
#include "Contact.h"
using namespace std;

class Menu{
    protected:
        vector<Contact>* contacts;
    public:
        Menu(vector<Contact>* contacts):contacts(contacts){}
        virtual void update() = 0;
};

#endif // MENU_H_INCLUDED
