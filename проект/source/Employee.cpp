#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(const string& name, const string& surname, int phoneNumber,
    const string& emailAddress, int salary)
    : Person(name, surname, phoneNumber, emailAddress), salary(salary) {
}

int Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(int salary) {
    this->salary = salary;
}

void Employee::servis() {
    cout << "Employee performs a service (to be overridden)." << endl;
}