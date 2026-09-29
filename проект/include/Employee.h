#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Employee : public Person {
protected:
    int salary;

public:
    Employee(const string& name, const string& surname, int phoneNumber, const string& emailAddress, int salary);

    int getSalary() const;
    void setSalary(int newSalary);

    virtual void servis() = 0; //polymorfismus

    virtual ~Employee() {}
};
