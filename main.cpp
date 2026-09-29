#include "Hospital.h"
#include "Doctor.h"
#include "MaitenanceWorker.h"
#include "MaitenanceRoom.h"
#include "OperationRoom.h"

using namespace std;

vector<string> fNames = { "John", "Sam", "Jane", "Ann", "Suzie", "Saul", "Koblizek" };
vector<string> lNames = { "Dow", "Smith", "Kowalski", "Johnson", "Goodman", "Fabian", "Banks" };

inline int GetRandIndex() { return rand() % fNames.size();  }

int main()
{
	if (fNames.size() != lNames.size())
	{
		cout << "Please make lengths of name vectors equal" << endl;
		return -1;
	}
	Hospital* hospital = new Hospital();

	for (int i = 0; i < 4; i++)
	{
		OperationRoom* room = new OperationRoom();
		for (int i = 0; i < 2; i++)
		{
			Doctor* doc = new Doctor(fNames[GetRandIndex()], lNames[GetRandIndex()], rand() % 75, rand() % 10000);
			doc->SetField("Surgeon");
			room->AddStaff(doc);
			hospital->AddEmployee(doc);
		}
		Patient* p = new Patient(fNames[GetRandIndex()], lNames[GetRandIndex()], rand() % 75, "Plague");
		hospital->AddPatient(p);
		room->SetPatient(p);
		hospital->AddRoom(room);
	}

	for (int i = 0; i < 4; i++)
	{
		MaitenanceRoom* room = new MaitenanceRoom();
		for (int i = 0; i < 3; i++)
		{
			hospital->AddEmployee(room->AddStaff(fNames[GetRandIndex()], lNames[GetRandIndex()], rand() % 75, rand() % 10000));
		}
		hospital->AddRoom(room);
	}
	cout << "Employee count: " << Employee::GetEmployeeCount() << ", Patient count: " << hospital->GetPatientCount()
		<< ", Room count: " << hospital->GetRoomCount() << endl;
	cout << "Total salary: " << hospital->CalculateTotalSalary() << endl;
	cout << "Doing work..." << endl;
	hospital->DoAllRoomWorks();
	return 0;
}