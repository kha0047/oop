#pragma once
#include "Employee.h"

class Doctor : public Employee
{
	string field;
public:
	Doctor(string fName, string lName, int age, int salary);
	int GetSalary() override;
	string GetName() override;
	string GetField();
	void SetField(string field);
};




