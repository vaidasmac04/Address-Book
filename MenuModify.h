#ifndef MENUMODIFY_H_INCLUDED
#define MENUMODIFY_H_INCLUDED

#include <iostream>
#include "Menu.h"
using namespace std;

class MenuModify : public Menu{

    public:
        MenuModify(vector<Contact>* contacts):Menu(contacts){}
        void update();
};

#endif // MENUMODIFY_H_INCLUDED
