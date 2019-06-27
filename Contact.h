#include <string>
using namespace std;

#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

class Contact{
   private:
       string firstName;
       string lastName;
       string phoneNumber;
   public:
       Contact(){}
       Contact(string firstName, string lastName, string phoneNumber);
       string getFirstName();
       string getLastName();
       string getPhoneNumber();
       string getFullInformation() const;
       void changeFirstName(string newData);
       void changeLastName(string newData);
       void changePhoneNumber(string newData);
};

#endif // CONTACT_H_INCLUDED
