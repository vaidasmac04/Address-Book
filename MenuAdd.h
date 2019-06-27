#ifndef CONTACTADD_H_INCLUDED
#define CONTACTADD_H_INCLUDED

#include <vector>
#include "Contact.h"
#include "Menu.h"
#include <iostream>
using namespace std;

class MenuAdd : public Menu{
    private:
       void getInformation(string& firstName, string& lastName, string& phoneNumber);
    public:
       MenuAdd(vector<Contact>* contacts):Menu(contacts){}
       void update();
};

#endif // CONTACTADD_H_INCLUDED
