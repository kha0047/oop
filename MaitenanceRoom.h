#pragma once
#include "Room.h"
#include "MaitenanceWorker.h"
using namespace std;

class MaitenanceRoom : public Room
{
	vector<MaitenanceWorker*> staffList;
	int roomNumber;
	static int roomCount;
public:
	MaitenanceRoom();
	~MaitenanceRoom();
	MaitenanceWorker* AddStaff(string fName, string lName, int age, int salary);
	void RemoveStaff(MaitenanceWorker* worker);
	int GetStaffCount() override;
	void ClearStaff() override;
	void DoSomeWork() override;
};