#pragma once
#include "Guest.h"
#include <string>
#include <iostream>
using namespace std;

class VIPGuest : public Guest {
private:
    bool hasLoungeAccess;
    string welcomeGift;
    string preferredDrink;

public:
    VIPGuest(const string& name, const string& surname, int phoneNumber,
        const string& emailAddress, int room,
        bool hasLoungeAccess, const string& welcomeGift, const string& preferredDrink)
        : Guest(name, surname, phoneNumber, emailAddress, room),
        hasLoungeAccess(hasLoungeAccess), welcomeGift(welcomeGift), preferredDrink(preferredDrink) {
    }

    void orderCustomDrink() {
        cout << getName() << " " << getSurname() << " is ordering custom drink: " << preferredDrink << endl;
    }

    void accessLounge() {
        cout << getName() << " " << getSurname() << " is ";
        if (hasLoungeAccess) {
            cout << "accessing the VIP lounge..." << endl;
        }
        else {
            cout << "not allowed to access the VIP lounge." << endl;
        }
    }

    void upgradeToVip() {
        hasLoungeAccess = true;
        cout << getName() << " " << getSurname() << "'s VIP privileges upgraded." << endl;
    }

    void printVipInfo() const {
        printInfo();
        cout << "Welcome gift: " << welcomeGift
            << "\nPreferred drink: " << preferredDrink
            << "\nLounge access: " << (hasLoungeAccess ? "Yes" : "No") << endl;
    }
};
