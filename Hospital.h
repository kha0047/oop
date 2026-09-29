#pragma once
#include "Employee.h"
#include "Patient.h"
#include "Room.h"
using namespace std;

class Hospital
{
	vector<Employee*> employees;
	vector<Patient*> patients;
	vector<Room*> rooms;
public:
	~Hospital();
	void AddEmployee(Employee* emp);
	void AddRoom(Room* room);
	void AddPatient(Patient* pat);
	int GetEmployeeCount();
	int GetPatientCount();
	int GetRoomCount();
	void DoAllRoomWorks();
	int CalculateTotalSalary();
	void Clear();
};


