#pragma once
#include <string>
using namespace std;

class Person
{
protected:
	string firstName;
	string lastName;
	int age;
public:
	Person();
	Person(string firstName, string lastName, int age);
	~Person();
	int GetAge();
	virtual string GetName();
};