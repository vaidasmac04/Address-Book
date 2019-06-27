#ifndef MENUSHOW_H_INCLUDED
#define MENUSHOW_H_INCLUDED

#include <iostream>
#include <vector>
#include "Menu.h"

class MenuShow : public Menu{

    public:
       MenuShow(vector<Contact>* contacts):Menu(contacts){}
       void update();
};


#endif // MENUSHOW_H_INCLUDED
