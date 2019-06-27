#include <iostream>
#include <fstream>
#include "Controller.h"
using namespace std;

Controller::Controller(){
    addressBook = new AddressBook();
}

Controller::~Controller(){
    delete addressBook;
}

void Controller::processInput(){

    cout << "This is an address book." << endl;
    cout << "You can add new contacts, delete contacts, find contacts, and modify data at any time." << endl;
    cout << "If you want ..." << endl;
    cout << "to add new contact --> type \"add\"" << endl;
    cout << "to delete specific contact --> type \"delete\" " << endl;
    cout << "to delete all contacts --> type \"delete all\"" << endl;
    cout << "to modify specific contact --> type \"modify\" " << endl;
    cout << "to search specific contacts --> type \"find\" " << endl;
    cout << "to close the program --> type \"exit\" " << endl;
    cout << "to save modifications --> type \"save\" " << endl;
    cout << "NOTE: before closing program always perform \"save\" action, otherwise data will be lost." << endl << endl;

    string userInput;
    do{
        cout << "What would you like to do?" << endl;
        getline(cin, userInput);

        if(userInput == "add"){
            addressBook->addContact();
        }
        else if(userInput == "show"){
            addressBook->showContacts();
            cout << endl;
        }
        else if(userInput == "delete"){
            try{
                addressBook->deleteContact();
            }
            catch(out_of_range &e){
                cout << e.what() << endl;
            }
        }
        else if(userInput == "find"){
            addressBook->findContacts();
            cout << endl;
        }
        else if(userInput == "save"){
            this->saveChanges();
            cout << "--> saved <--" << endl;
        }
        else if(userInput == "modify"){
            try{
                addressBook->modifyContacts();
            }
            catch(out_of_range &e){
                cout << e.what() << endl;
            }
        }
        else if(userInput == "delete all"){
            addressBook->deleteAllContacts();
        }
        else if(userInput != "exit"){
            cout << "--> No such action found <--" << endl;
        }

    }while(userInput != "exit");
}

void Controller::saveChanges(){
    ofstream write("contacts.txt");

    vector<Contact>::iterator i;
    vector<Contact>* contacts = addressBook->getContacts();

    for(i = contacts->begin(); i != contacts->end(); i++){
        write << (*i).getFirstName() << endl;
        write << (*i).getLastName() << endl;
        write << (*i).getPhoneNumber() << endl;
    }

    write.close();
}





