#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;


// Třída pro uklízečku (podtřída zaměstnance)
class Cleaner : public Employee {
private:
    int floorAssigned;

public:
    Cleaner(const string& name, const string& surname, int phoneNumber, const string& emailAddress, int salary, int floor);

    void servis() override; // Implementace virtuální metody
    void printInfo() const;
    void floorAssignedInfo() const;
};

