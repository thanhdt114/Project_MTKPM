#pragma once
#include <iostream>
#include <string>

#include "IEmployee.cpp"
#include "IEmployeeBonus.cpp"

using namespace std;

class NullEmployee : public IEmployee
{
public:
	NullEmployee() {

	}
	void ProcessNullEmployee() {

	}
	void printEmployeeDetail() override {
		cout << "Null object can't be payroll" << endl;
	}
	bool isNull() override {
		return true;
	}
};

