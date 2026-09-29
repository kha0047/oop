#include "Room.h"
#include <iostream>
#include <algorithm>
using namespace std;

Room::Room(const string& description, int price, int numberOfRooms)
    : description(description), price(price), numberOfRooms(numberOfRooms) {
}

void Room::addGuest(Guest* guest) {
    guests.push_back(guest);
}

void Room::removeGuest(Guest* guest) {
    guests.erase(remove(guests.begin(), guests.end(), guest), guests.end());
}

void Room::printInfo() const {
    cout << "Room " << numberOfRooms << " - " << description
        << ", price: " << price << " CZK, number of guests: "
        << guests.size() << endl;
    for (Guest* g : guests) {
        cout << "  -> " << g->getName() << " " << g->getSurname() << endl;
    }
}

int Room::getGuestCount() const {
    return guests.size();
}

vector<Guest*> Room::getGuests() const {
    return guests;
}

string Room::getDescription() const {
    return description;
}

int Room::getPrice() const {
    return price;
}

int Room::getNumberOfRooms() const {
    return numberOfRooms;
}

void Room::setDescription(const string& desc) {
    description = desc;
}

void Room::setPrice(int p) {
    price = p;
}

void Room::setNumberOfRooms(int n) {
    numberOfRooms = n;
}