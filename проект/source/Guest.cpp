#include "Guest.h"
#include <iostream>
using namespace std;

int Guest::guestCount = 0;

Guest::Guest(const string& name, const string& surname, int phoneNumber,
    const string& emailAddress, int room)
    : Person(name, surname, phoneNumber, emailAddress), room(room) {
    guestCount++;
}

Guest::~Guest() {
    guestCount--;
}

void Guest::checkIn(int room) {
    this->room = room;
    cout << "Guest checked into room " << room << endl;
}

void Guest::checkIn() {
    this->room = 0;
    cout << "Guest checked in with default room (0)" << endl;
}

void Guest::checkOut() {
    this->room = -1;
}

int Guest::getRoom() const {
    return room;
}

void Guest::setRoom(int room) {
    this->room = room;
}

void Guest::printInfo() const {
    cout << name << " " << surname << ", room: " << room << endl;
}

int Guest::getGuestCount() {
    return guestCount;
}


