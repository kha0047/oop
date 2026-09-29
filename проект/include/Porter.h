#pragma once
#include "Employee.h"
#include "Guest.h"
#include <iostream>
using namespace std;

// Třída pro poslíčka
class Porter : public Employee {
private:
    int luggageCarried;

public:
    Porter(const string& name, const string& surname, int phoneNumber, const string& emailAddress, int salary);

    void servis() override;  // Implementace služby
    void printInfo() const;

    void luggageCarriedFor(const Guest& g);
};
