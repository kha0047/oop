#pragma once
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string surname;
    int phoneNumber;
    string emailAddress;

public:
    Person(const string& name, const string& surname, int phoneNumber, const string& emailAddress);
    virtual ~Person();

    string getName() const;
    string getSurname() const;
    int getPhoneNumber() const;
    string getEmailAddress() const;

    void setName(const string& name);
    void setSurname(const string& surname);
    void setPhoneNumber(int phoneNumber);
    void setEmailAddress(const string& emailAddress);
};
