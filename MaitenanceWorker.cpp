#include "MaitenanceWorker.h"

MaitenanceWorker::MaitenanceWorker(string fName, string lName, int age, MaitenanceRoom* workingRoom)
{
	this->firstName = fName;
	this->lastName = lName;
	this->age = age;
	this->workingRoom = workingRoom;
}

MaitenanceRoom* MaitenanceWorker::GetWorkingRoom()
{
	return this->workingRoom;
}
