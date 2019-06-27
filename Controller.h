#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include "AddressBook.h"

class Controller{
    private:
       AddressBook* addressBook;
    public:
       Controller();
       ~Controller();
       void processInput();
       void saveChanges();
};


#endif // CONTROLLER_H_INCLUDED
