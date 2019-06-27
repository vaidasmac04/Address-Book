#include "AddressBook.h"

AddressBook::AddressBook(){
    initialize();
    getData();
}

AddressBook::~AddressBook(){
    delete contacts;
}

void AddressBook::initialize(){
    contacts = new vector<Contact>();
    menuAdd = new MenuAdd(contacts);
    menuShow = new MenuShow(contacts);
    menuFind = new MenuFind(contacts);
    menuDelete = new MenuDelete(contacts);
    menuModify = new MenuModify(contacts);
}

void AddressBook::getData(){
    ifstream read("contacts.txt");

    if(read.is_open()){
        string firstName, lastName, phoneNumber;
        while(!read.eof()){

            getline(read, firstName);
            getline(read, lastName);
            getline(read, phoneNumber);

            if(!read.fail()){
                Contact contact(firstName, lastName, phoneNumber);
                contacts->push_back(contact);
            }
        }
    }

    read.close();
}

vector<Contact>* AddressBook::getContacts(){
    return contacts;
}

void AddressBook::addContact(){
    menuAdd->update();
}

void AddressBook::showContacts(){
    menuShow->update();
}

void AddressBook::deleteContact(){
    menuDelete->update();
}

void AddressBook::findContacts(){
    menuFind->update();
}

void AddressBook::modifyContacts(){
    this->showContacts();
    menuModify->update();
}

void AddressBook::deleteAllContacts(){
    if(contacts->size() == 0){
         cout << "Nothing to show! Address book is empty." << endl;
    }
    else{
         contacts->clear();
         cout << "--> deleted <--" << endl;
    }

}
