#include "Hospital.h"

Hospital::~Hospital()
{
    this->Clear();
}

void Hospital::AddEmployee(Employee* emp)
{
    employees.push_back(emp);
}

void Hospital::AddRoom(Room* room)
{
    rooms.push_back(room);
}

void Hospital::AddPatient(Patient* pat)
{
    patients.push_back(pat);
}

int Hospital::GetEmployeeCount()
{
    return employees.size();
}

int Hospital::GetPatientCount()
{
    return patients.size();
}

int Hospital::GetRoomCount()
{
    return rooms.size();
}

void Hospital::DoAllRoomWorks()
{
    for (auto room : rooms)
    {
        room->DoSomeWork();
    }
}

int Hospital::CalculateTotalSalary()
{
    int sum = 0;
    for (auto emp : employees)
    {
        sum += emp->GetSalary();
    }
    return sum;
}

void Hospital::Clear()
{
    for (auto emp : employees)
    {
        delete emp;
    }
    for (auto room : rooms)
    {
        room->ClearStaff();
        delete room;
    }
    for (auto pat : patients)
    {
        delete pat;
    }
}
