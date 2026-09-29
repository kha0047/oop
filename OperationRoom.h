#pragma once
#include "Room.h"
#include "Doctor.h"
#include "Patient.h"
class OperationRoom : public Room
{
	vector<Doctor*> staffList;
	Patient* patient;
public:
	void SetPatient(Patient* patient);
	Patient* GetPatient();
	void AddStaff(Doctor* doctor);
	void RemoveStaff(Doctor* doctor);
	int GetStaffCount() override;
	void ClearStaff() override;
	void DoSomeWork() override;
};