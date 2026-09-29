#pragma once
#include <string>
#include <vector>
#include "Room.h"
#include "Guest.h"
#include "Employee.h"
using namespace std;

class Hotel {
private:
    string description;
    int totalRooms;
    int totalGuests;
    int totalStaff;
    vector<Room*> rooms; //kompozice
    vector<Guest*> guests;
    vector<Employee*> employees;

public:
    Hotel(const string& description);

    void addRoom(Room* newRoom);
    void addGuest(Guest* g);
    void addEmployee(Employee* e);
    void assignGuestToRoom(Guest* guest, int roomNumber); // Přiřazení hosta do pokoje

    void showAllRooms() const;
    void showAllGuests() const;
    void showAllEmployees() const;
    void printAllInfo() const;
};
