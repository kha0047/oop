#include <iostream>
#include "Hotel.h"
#include "Room.h"
#include "Guest.h"
#include "VipGuest.h"
#include "Receptionist.h"
#include "Cleaner.h"
#include "Porter.h"

int main() {
    //инициализация отеля
    Hotel myHotel("Hotel Eleon");

    //создание комнат
    Room* room1 = new Room("Family Room", 300, 101);
    Room* room2 = new Room("Double Room", 200, 102);
    Room* room3 = new Room("Double Room", 200, 103);
    Room* room4 = new Room("Double Room", 200, 104);
    Room* room5 = new Room("Triple Room", 250, 105);
    Room* room6 = new Room("VIP Suite", 500, 106);
    Room* room7 = new Room("Single Room", 150, 107);
    Room* room8 = new Room("Single Room", 150, 108);
    Room* room9 = new Room("Single Room", 150, 109);
    Room* room10 = new Room("Single Room", 150, 110);

    myHotel.addRoom(room1); myHotel.addRoom(room2); myHotel.addRoom(room3); myHotel.addRoom(room4); myHotel.addRoom(room5);
    myHotel.addRoom(room6); myHotel.addRoom(room7); myHotel.addRoom(room8); myHotel.addRoom(room9); myHotel.addRoom(room10);

    //создание работников
    Receptionist* recep = new Receptionist("Lucie", "Vesela", 111222333, "lucie@email.com", 2500, &myHotel);
    Cleaner* cleaner = new Cleaner("Marek", "Cisty", 444555666, "marek@email.com", 1800, 1);
    Porter* porter = new Porter("Tomas", "Nosic", 777888999, "tomas@email.com", 2000);

    myHotel.addEmployee(recep); myHotel.addEmployee(cleaner); myHotel.addEmployee(porter);

    //создание гостей
    Guest* guest1 = new Guest("Jan", "Novak", 123456789, "jan@email.com", 101);
    Guest* guest2 = new Guest("Marie", "Novakova", 123456780, "marie@email.com", 101);
    Guest* guest3 = new Guest("Petr", "Novak", 123456781, "petr@email.com", 101);
    Guest* guest4 = new Guest("Anna", "Novakova", 123456782, "anna@email.com", 101);
    Guest* guest5 = new Guest("Tomas", "Kral", 223456789, "tomas@email.com", 102);
    Guest* guest6 = new Guest("Eliska", "Kralova", 223456780, "eliska@email.com", 102);
    Guest* guest7 = new Guest("Jiri", "Svoboda", 323456789, "jiri@email.com", 103);
    Guest* guest8 = new Guest("Katerina", "Svobodova", 323456780, "katerina@email.com", 103);
    Guest* guest9 = new Guest("Ondrej", "Dvorak", 423456789, "ondrej@email.com", 104);
    Guest* guest10 = new Guest("Lucie", "Dvorakova", 423456780, "lucie@email.com", 104);
    Guest* guest11 = new Guest("Filip", "Blazek", 523456789, "filip@email.com", 105);
    Guest* guest12 = new Guest("Tereza", "Blazkova", 523456780, "tereza@email.com", 105);
    Guest* guest13 = new Guest("Adam", "Blazek", 523456781, "adam@email.com", 105);

    VIPGuest* vip1 = new VIPGuest("Barbora", "Hola", 623456789, "barbora@email.com", 106, true, "Mojito", "Cappuccino");
    VIPGuest* vip2 = new VIPGuest("Jakub", "Valenta", 723456789, "jakub@email.com", 107, false, "Whisky", "Latte");

    myHotel.addGuest(guest1); myHotel.addGuest(guest2); myHotel.addGuest(guest3); myHotel.addGuest(guest4);
    myHotel.addGuest(guest5); myHotel.addGuest(guest6); myHotel.addGuest(guest7); myHotel.addGuest(guest8);
    myHotel.addGuest(guest9); myHotel.addGuest(guest10); myHotel.addGuest(guest11); myHotel.addGuest(guest12);
    myHotel.addGuest(guest13); myHotel.addGuest(vip1); myHotel.addGuest(vip2);

    //процесс регистрасии
    recep->checkInGuest(*guest1, 101);  recep->checkInGuest(*guest2, 101);  recep->checkInGuest(*guest3, 101);  recep->checkInGuest(*guest4, 101);
    recep->checkInGuest(*guest5, 102);  recep->checkInGuest(*guest6, 102);  recep->checkInGuest(*guest7, 103);  recep->checkInGuest(*guest8, 103);
    recep->checkInGuest(*guest9, 104);  recep->checkInGuest(*guest10, 104);  recep->checkInGuest(*guest11, 105);  recep->checkInGuest(*guest12, 105);
    recep->checkInGuest(*guest13, 105); recep->checkInGuest(*vip1, 106);    recep->checkInGuest(*vip2, 107);

    // загруженый метод, показывает что он выселяет и показывает без параметра
    cout << "\n-----Method Overloading Demo-----" << endl;
    guest1->checkIn();

    //вип Guest активность
    cout << "\------VIP Activities--------" << endl;
    vip1->accessLounge();
    vip1->orderCustomDrink();
    vip2->upgradeToVip();

    //информация работники
    cout << "\n-----Staff Members-----" << endl;
    cout << "Receptionist: " << recep->getName() << " " << recep->getSurname() << endl;
    cout << "Cleaner: " << cleaner->getName() << " " << cleaner->getSurname() << endl;
    cout << "Porter: " << porter->getName() << " " << porter->getSurname() << endl;

    //зарплата
    cout << "\n------Staff Salaries-----" << endl;
    cout << recep->getName() << " " << recep->getSurname() << ": " << recep->getSalary() << " CZK" << endl;
    cout << cleaner->getName() << " " << cleaner->getSurname() << ": " << cleaner->getSalary() << " CZK" << endl;
    cout << porter->getName() << " " << porter->getSurname() << ": " << porter->getSalary() << " CZK" << endl;

    //informace hotel
    cout << "\n----Information about hotel-----" << endl;
    myHotel.printAllInfo();

    // static do
    cout << "\n-----Guest count before cleanup (static): " << Guest::getGuestCount() << " ------" << endl;

    //memory clean
    delete guest1; delete guest2; delete guest3; delete guest4; delete guest5;
    delete guest6; delete guest7; delete guest8; delete guest9; delete guest10;
    delete guest11; delete guest12; delete guest13; delete vip1; delete vip2;
    delete recep; delete cleaner; delete porter;
    delete room1; delete room2; delete room3; delete room4; delete room5;
    delete room6; delete room7; delete room8; delete room9; delete room10;

    //static posle
    cout << "\n-----Guest count after cleanup (static): " << Guest::getGuestCount() << "------" << endl;

    return 0;
}
