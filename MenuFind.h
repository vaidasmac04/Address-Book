#ifndef MENUFIND_H_INCLUDED
#define MENUFIND_H_INCLUDED

#include <vector>
#include <iostream>
#include "Menu.h"
using namespace std;

class MenuFind : public Menu{

    public:
        MenuFind(vector<Contact>* contacts):Menu(contacts){}
        void update();
};

#endif // MENUFIND_H_INCLUDED
