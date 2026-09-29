#pragma once
#include "Person.h"
using namespace std;

class Patient : public Person
{
	string diagnosis;
public:
	Patient(string fName, string lName, int age, string diagnosis);
	void SetDiagnosis(string d);
	string GetDiagnosis();
};