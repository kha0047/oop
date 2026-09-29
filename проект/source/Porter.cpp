#include "Porter.h"
#include <iostream>
using namespace std;

Porter::Porter(const string& name, const string& surname, int phoneNumber,
    const string& emailAddress, int salary)
    : Employee(name, surname, phoneNumber, emailAddress, salary), luggageCarried(0) {
}

void Porter::servis() {
    cout << "Porter is providing luggage service." << endl;
}

void Porter::printInfo() const {
    cout << "Porter Info:\n"
        << "Name: " << name << " " << surname << endl
        << "Phone: " << phoneNumber << ", Email: " << emailAddress << endl
        << "Salary: " << salary << endl
        << "Luggage carried: " << luggageCarried << endl;
}

void Porter::luggageCarriedFor(const Guest& g) {
    ++luggageCarried;
    cout << "Porter carried luggage for Guest in room " << g.getRoom() << endl;
}

