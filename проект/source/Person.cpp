#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(const string& name, const string& surname, int phoneNumber,
    const string& emailAddress)
    : name(name), surname(surname), phoneNumber(phoneNumber), emailAddress(emailAddress) {
}

Person::~Person() {}

string Person::getName() const {
    return name;
}

string Person::getSurname() const {
    return surname;
}

int Person::getPhoneNumber() const {
    return phoneNumber;
}

string Person::getEmailAddress() const {
    return emailAddress;
}

void Person::setName(const string& name) {
    this->name = name;
}

void Person::setSurname(const string& surname) {
    this->surname = surname;
}

void Person::setPhoneNumber(int phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Person::setEmailAddress(const string& emailAddress) {
    this->emailAddress = emailAddress;
}
