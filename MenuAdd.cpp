#include "MenuAdd.h"
#include <iostream>

void MenuAdd::update(){
    string firstName, lastName, phoneNumber;

    getInformation(firstName, lastName, phoneNumber);

    Contact newContact(firstName, lastName, phoneNumber);
    contacts->push_back(newContact);
}

void MenuAdd::getInformation(string& firstName, string& lastName, string& phoneNumber){
    cout << "Enter first name -> ";
    getline(cin, firstName);

    cout << "Enter last name -> ";
    getline(cin, lastName);

    cout << "Enter phone number -> ";
    getline(cin, phoneNumber);

    cout << "--> added <--" << endl;
}


