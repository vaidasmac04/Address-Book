#include "contact.h"
#include <iostream>
using namespace std;

Contact::Contact(string firstName, string lastName, string phoneNumber){
    this->firstName = firstName;
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;
}

string Contact::getFirstName(){
    return firstName;
}

string Contact::getLastName(){
    return lastName;
}

string Contact::getPhoneNumber(){
    return phoneNumber;
}

string Contact::getFullInformation() const{
    return firstName+" "+lastName+" "+phoneNumber;
}

void Contact::changeFirstName(string newData){
    this->firstName = newData;
}

void Contact::changeLastName(string newData){
    this->lastName = newData;
}

void Contact::changePhoneNumber(string newData){
    this->phoneNumber = newData;
}

