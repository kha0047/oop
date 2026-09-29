#include "Reservation.h"
#include <iostream>
#include <algorithm>
using namespace std;

Reservation::Reservation(int room, const string& date)
    : room(room), date(date) {
}

void Reservation::addGuest(const Guest& g) {
    guests.push_back(g);
}

void Reservation::removeGuest(const Guest& g) {
    guests.erase(remove_if(guests.begin(), guests.end(), [&](const Guest& guest) {
        return guest.getName() == g.getName() &&
            guest.getSurname() == g.getSurname();
        }), guests.end());
}

bool Reservation::isGuestInReservation(const Guest& g) const {
    for (const auto& guest : guests) {
        if (guest.getName() == g.getName() &&
            guest.getSurname() == g.getSurname()) {
            return true;
        }
    }
    return false;
}

void Reservation::printReservationDetails() const {
    cout << "Reservation for room: " << room << "\n"
        << "Date: " << date << "\n"
        << "Guests:\n";
    for (const auto& guest : guests) {
        cout << " - " << guest.getName() << " " << guest.getSurname() << "\n";
    }
}
