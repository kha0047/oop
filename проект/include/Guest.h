#pragma once
#include "Person.h"
#include <iostream>
using namespace std;

class Guest : public Person {
private:
    int room;
    static int guestCount;  // Statická proměnná – počet hostů

public:
    Guest(const string& name, const string& surname, int phoneNumber, const string& emailAddress, int room);
    ~Guest();  // Snížení počtu hostů při destrukci
    //pritizhenost
    void checkIn(); //prihlasheni 
    void checkIn(int room); //prihlaseno do pokoje
    void checkOut();
    int getRoom() const;
    void setRoom(int room);
    void printInfo() const;

    static int getGuestCount();  // Vrací aktuální počet hostů
};

