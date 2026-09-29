#include "MaitenanceRoom.h"

int MaitenanceRoom::roomCount = 0;

MaitenanceRoom::MaitenanceRoom()
{
    roomCount++;
    this->roomNumber = roomCount;
}

MaitenanceRoom::~MaitenanceRoom()
{
    roomCount--;
}

MaitenanceWorker* MaitenanceRoom::AddStaff(string fName, string lName, int age, int salary)
{
    MaitenanceWorker* worker = new MaitenanceWorker(fName, lName, age, this);
    worker->SetSalary(salary);
    staffList.push_back(worker);
    return worker;
}

void MaitenanceRoom::RemoveStaff(MaitenanceWorker* worker)
{
    for (int i = 0; i < staffList.size(); i++)
    {
        if (staffList.at(i) == worker) staffList.erase(staffList.begin()+i);
    }
}

int MaitenanceRoom::GetStaffCount()
{
    return staffList.size();
}

void MaitenanceRoom::ClearStaff()
{
    for (auto worker : staffList)
    {
        delete worker;
    }
    staffList.clear();
}

void MaitenanceRoom::DoSomeWork()
{
    cout << "Maitenance room number " << roomNumber << " doing its work." << "Employee count: " << staffList.size() << endl;
    cout << "Staff list: " << endl;
    for (auto worker : staffList)
    {
        cout << "   " << worker->GetName() << ", salary: " << worker->GetSalary() << endl;
    }
    cout << endl;
}
