#ifndef ADDRESSBOOK_H_INCLUDED
#define ADDRESSBOOK_H_INCLUDED

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include "Contact.h"
#include "Menu.h"
#include "MenuAdd.h"
#include "MenuFind.h"
#include "MenuShow.h"
#include "MenuDelete.h"
#include "MenuModify.h"
using namespace std;

class AddressBook{
    private:
       vector<Contact>* contacts;
       Menu* menuAdd;
       Menu* menuShow;
       Menu* menuFind;
       Menu* menuDelete;
       Menu* menuModify;
       void getData();
       void initialize();
    public:
       AddressBook();
       ~AddressBook();
       void addContact();
       void showContacts();
       void deleteContact();
       void findContacts();
       void deleteAllContacts();
       void modifyContacts();
       vector<Contact>* getContacts();
};

#endif // ADDRESSBOOK_H_INCLUDED
