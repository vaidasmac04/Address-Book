#include "MenuDelete.h"

void MenuDelete::update(){

    if(contacts->size() == 0){
         cout << "Nothing to show! Address book is empty." << endl;
    }
    else{
        vector<Contact>::iterator i;
        int j;
        for(j = 1, i = contacts->begin(); i != contacts->end(); i++, j++){
            cout << j << ". " << (*i).getFullInformation() << endl;
        }

        int toDelete;
        cout << "Type row number to delete contact: ";
        cin >> toDelete;
        cin.ignore(1, '\n');

        if(toDelete < 1 || (unsigned)toDelete > contacts->size()){
            throw out_of_range("--> No such row number <--");
        }

        contacts->erase(contacts->begin()+toDelete-1);

        cout << "--> deleted <--" << endl;
    }
}
