#include "Receptionist.h"
#include <iostream>
using namespace std;

Receptionist::Receptionist(const string& name, const string& surname, int phoneNumber,
    const string& emailAddress, int salary, Hotel* hotel)
    : Employee(name, surname, phoneNumber, emailAddress, salary), hotel(hotel) {
}

void Receptionist::servis() {
    cout << "Receptionist is at the front desk." << endl;
}

void Receptionist::printInfo() const {
    cout << "Receptionist: " << name << " " << surname
        << ", salary: " << salary << endl;
}

void Receptionist::checkInGuest(Guest& g, int room) {
    g.checkIn(room);
    cout << "Receptionist checked in the guest to room " << room << "." << endl;

    if (hotel) {
        hotel->assignGuestToRoom(&g, room);
    }
}

void Receptionist::checkOutGuest(Guest& g) {
    g.checkOut();
    cout << "Receptionist checked out the guest." << endl;
}


