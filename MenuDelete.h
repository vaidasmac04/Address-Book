#ifndef MENUDELETE_H_INCLUDED
#define MENUDELETE_H_INCLUDED

#include <vector>
#include <iostream>
#include "Menu.h"
using namespace std;

class MenuDelete : public Menu{

    public:
        MenuDelete(vector<Contact>* contacts):Menu(contacts){}
        void update();
};

#endif // MENUDELETE_H_INCLUDED
