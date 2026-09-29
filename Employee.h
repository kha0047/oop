#pragma once
#include "Person.h"
using namespace std;

class Employee : public Person
{
	static int employeeCount;
	int salary;
public:
	Employee();
	~Employee();
	virtual int GetSalary();
	void SetSalary(int salary);
	static int GetEmployeeCount();
};

