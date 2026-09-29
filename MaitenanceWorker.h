#pragma once
#include "Employee.h"
using namespace std;

class MaitenanceRoom;

class MaitenanceWorker : public Employee
{
	MaitenanceRoom* workingRoom;
public:
	MaitenanceWorker(string fName, string lName, int age, MaitenanceRoom* workingRoom);
	MaitenanceRoom* GetWorkingRoom();

};
