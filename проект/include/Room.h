#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Guest.h"
using namespace std;

class Room {
private:
    string description;
    int price;
    int numberOfRooms;
    vector<Guest*> guests;

public:
    Room(const string& description, int price, int numberOfRooms);

    void addGuest(Guest* guest);
    void removeGuest(Guest* guest);
    void printInfo() const;

    int getGuestCount() const;
    vector<Guest*> getGuests() const;
    string getDescription() const;
    int getPrice() const;
    int getNumberOfRooms() const;

    void setDescription(const string& desc);
    void setPrice(int p);
    void setNumberOfRooms(int n);
};
