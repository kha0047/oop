#pragma once
#include "Employee.h"
#include <vector>
#include <iostream>

class Room
{
public:
	virtual int GetStaffCount() = 0;
	virtual void ClearStaff() = 0;
	virtual void DoSomeWork() = 0;
};
