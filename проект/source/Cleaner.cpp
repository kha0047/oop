#include "Cleaner.h"
#include <iostream>
using namespace std;

Cleaner::Cleaner(const string& name, const string& surname, int phoneNumber,
    const string& emailAddress, int salary, int floor)
    : Employee(name, surname, phoneNumber, emailAddress, salary), floorAssigned(floor) {
}

void Cleaner::servis() {
    cout << "Cleaner is cleaning floor " << floorAssigned << ".\n";
}

void Cleaner::printInfo() const {
    cout << "Cleaner Info:\n"
        << "Name: " << name << " " << surname << endl
        << "Phone: " << phoneNumber << ", Email: " << emailAddress << endl
        << "Salary: " << salary << endl
        << "Assigned floor: " << floorAssigned << endl;
}

void Cleaner::floorAssignedInfo() const {
    cout << "Cleaner assigned to floor " << floorAssigned << ".\n";
}
