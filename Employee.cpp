#include "Employee.h"

int Employee::employeeCount = 0;

Employee::Employee()
{
    Employee::employeeCount++;
    this->salary = 0;
}

Employee::~Employee()
{
    Employee::employeeCount--;
}

int Employee::GetSalary()
{
    return salary;
}

void Employee::SetSalary(int salary)
{
    this->salary = salary;
}

int Employee::GetEmployeeCount()
{
    return employeeCount;
}
