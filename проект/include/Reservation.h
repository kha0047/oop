#pragma once
#include <vector>
#include <string>
#include "Guest.h"
using namespace std;

class Reservation {
private:
    vector<Guest> guests; // Seznam host? (kopie)
    int room;
    string date;

public:
    Reservation(int room, const string& date);

    bool isGuestInReservation(const Guest& g) const;
    void addGuest(const Guest& g);
    void removeGuest(const Guest& g);
    void printReservationDetails() const;
};
