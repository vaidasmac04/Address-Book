#include "MenuFind.h"

void MenuFind::update(){
    if(contacts->size() == 0){
        cout << "Nothing to show! Address book is empty." << endl;
    }
    else{
        string searchBy;
        cout << "search by: [first name, last name, phone number]: ";
        getline(cin, searchBy);

        bool found = false;
        int j = 1;

        if(searchBy == "first name"){
            string key;
            cout << "Enter the key: ";
            getline(cin, key);
            for(unsigned int i = 0; i < contacts->size(); i++){
                size_t occurAt = contacts->at(i).getFirstName().find(key);
                if(occurAt != string::npos){
                    cout << j << ". " << contacts->at(i).getFullInformation() << endl;
                    found = true;
                    j++;
                }
            }
        }
        else if(searchBy == "last name"){
            string key;
            cout << "Enter the key: ";
            getline(cin, key);
            for(unsigned int i = 0; i < contacts->size(); i++){
                size_t occurAt = contacts->at(i).getLastName().find(key);
                if(occurAt != string::npos){
                    cout << j << ". " << contacts->at(i).getFullInformation() << endl;
                    found = true;
                    j++;
                }
            }
        }
        else if(searchBy == "phone number"){
            string key;
            cout << "Enter the key: ";
            getline(cin, key);
            for(unsigned int i = 0; i < contacts->size(); i++){
                size_t occurAt = contacts->at(i).getPhoneNumber().find(key);
                if(occurAt != string::npos){
                    cout << j << ". " << contacts->at(i).getFullInformation() << endl;
                    found = true;
                    j++;
                }
            }
        }
        else{
            cout << "--> No such option <--" << endl;
            found = true;
        }

        if(!found){
            cout << "--> No such contacts found <--" << endl;
        }
    }
}
