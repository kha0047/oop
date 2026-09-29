#include "Patient.h"

Patient::Patient(string fName, string lName, int age, string diagnosis)
{
    this->firstName = fName;
    this->lastName = lName;
    this->age = age;
    this->diagnosis = diagnosis;
}

void Patient::SetDiagnosis(string d)
{
    this->diagnosis = d;
}

string Patient::GetDiagnosis()
{
    return diagnosis;
}
