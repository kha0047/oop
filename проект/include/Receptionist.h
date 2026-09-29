#pragma once
#include "Employee.h"
#include "Guest.h"
#include "Hotel.h"
using namespace std;

class Receptionist : public Employee {
private:
    Hotel* hotel; // Ukazatel na hotel, kde pracuje

public:
    Receptionist(const string& name, const string& surname, int phoneNumber,
        const string& emailAddress, int salary, Hotel* hotel);

    void servis() override;
    void printInfo() const;

    void checkInGuest(Guest& g, int room); // Přihlásí hosta
    void checkOutGuest(Guest& g);
};

