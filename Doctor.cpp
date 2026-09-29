#include "Doctor.h"

Doctor::Doctor(string fName, string lName, int age, int salary)
{
	this->firstName = fName;
	this->lastName = lName;
	this->age = age;
	this->SetSalary(salary);
}

int Doctor::GetSalary()
{
	return Employee::GetSalary() * 1.5;
}

string Doctor::GetName()
{
	return "Dr. " + Person::GetName();
}

string Doctor::GetField()
{
	return this->field;
}

void Doctor::SetField(string field)
{
	this->field = field;
}
