#include <iostream>
#include "Contact.h"
#include "AddressBook.h"
#include "Controller.h"
#include "Menu.h"
#include "Menu.h"
using namespace std;

int main(){

    Controller* controller = new Controller();
    controller->processInput();
    delete controller;

    return 0;
}
