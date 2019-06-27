#include "MenuShow.h"

void MenuShow::update(){
    vector<Contact>::iterator i;

    if(contacts->size() == 0){
        cout << "Nothing to show! Address book is empty." << endl;
    }

    int j;
    for(j = 1, i = contacts->begin(); i != contacts->end(); i++, j++){
        cout << j << ". " << (*i).getFullInformation() << endl;
    }
}
