#include "MenuModify.h"

void MenuModify::update(){
    if(contacts->size() != 0){
        int toModify;
        cout << "Please enter row number to be modified: ";
        cin >> toModify;
        cin.ignore(1, '\n');

        if(toModify < 1 || (unsigned)toModify > contacts->size()){
            throw out_of_range("--> No such row number <--");
        }

        cout << "What do you want to modify? options[first name, last name, phone number] ";
        string key;
        getline(cin, key);

        if(key == "first name"){
            string newData;
            cout << "Enter new first name: ";
            getline(cin, newData);
            contacts->at(toModify-1).changeFirstName(newData);
            cout << "--> changes saved <--" << endl;
        }
        else if(key == "last name"){
            string newData;
            cout << "Enter new last name: ";
            getline(cin, newData);
            contacts->at(toModify-1).changeLastName(newData);
            cout << "--> changes saved <--" << endl;
        }
        else if(key == "phone number"){
            string newData;
            cout << "Enter new phone number: ";
            getline(cin, newData);
            contacts->at(toModify-1).changePhoneNumber(newData);
            cout << "--> changes saved <--" << endl;
        }
        else{
            cout << "--> No such option <--" << endl;
        }
    }
}
