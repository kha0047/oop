#include "Hotel.h"
#include <iostream>
using namespace std;

Hotel::Hotel(const string& description)
    : description(description), totalRooms(0), totalGuests(0), totalStaff(0) {
}

void Hotel::addRoom(Room* newRoom) {
    rooms.push_back(newRoom);
    totalRooms++;
}

void Hotel::addGuest(Guest* g) {
    guests.push_back(g);
    totalGuests++;
}

void Hotel::addEmployee(Employee* e) {
    employees.push_back(e);
    totalStaff++;
}

void Hotel::assignGuestToRoom(Guest* guest, int roomNumber) {
    for (Room* room : rooms) {
        if (room->getNumberOfRooms() == roomNumber) {
            room->addGuest(guest);
            guest->setRoom(roomNumber);
            return;
        }
    }
}

void Hotel::showAllRooms() const {
    cout << "Rooms:\n";
    for (const auto& room : rooms) {
        room->printInfo();
    }
}

void Hotel::showAllGuests() const {
    cout << "Guests:\n";
    for (const auto& guest : guests) {
        cout << guest->getName() << " " << guest->getSurname()
            << " Room: " << guest->getRoom() << "\n";
    }
}

void Hotel::showAllEmployees() const {
    cout << "Employees:\n";
    for (const auto& employee : employees) {
        employee->servis();
    }
}

void Hotel::printAllInfo() const {
    cout << "Hotel Description: " << description << "\n"
        << "Total Rooms: " << totalRooms << "\n"
        << "Total Guests: " << totalGuests << "\n"
        << "Total Staff: " << totalStaff << "\n\n";

    showAllRooms();
    showAllGuests();
    showAllEmployees();
}
