#include "OperationRoom.h"

void OperationRoom::SetPatient(Patient* patient)
{
    this->patient = patient;
}

Patient* OperationRoom::GetPatient()
{
    return patient;
}

void OperationRoom::AddStaff(Doctor* doctor)
{
    staffList.push_back(doctor);
}

void OperationRoom::RemoveStaff(Doctor* doctor)
{
    for (int i = 0; i < staffList.size(); i++)
    {
        if (staffList.at(i) == doctor) staffList.erase(staffList.begin() + i);
    }
}

int OperationRoom::GetStaffCount()
{
    return staffList.size();
}

void OperationRoom::ClearStaff()
{
    for (auto doc : staffList)
    {
        delete doc;
    }
    staffList.clear();
}

void OperationRoom::DoSomeWork()
{
    cout << "Operation room with patient " << patient->GetName() << ", " << patient->GetAge() << ", diagnosis: "
        << patient->GetDiagnosis() << endl;
    cout << "Staff list: " << endl;
    for (auto worker : staffList)
    {
        cout << "   " << worker->GetName() << ", salary: " << worker->GetSalary() << ", field:" << worker->GetField() << endl;
    }
    cout << endl;
}
