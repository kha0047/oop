#include "Person.h"

Person::Person()
{
}

Person::Person(string firstName, string lastName, int age)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
}

Person::~Person()
{
	firstName.clear();
	lastName.clear();
}

int Person::GetAge()
{
	return age;
}

string Person::GetName()
{
	return firstName + " " + lastName;
}
