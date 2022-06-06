#pragma once
#include <iostream>
#include <string>

#include "IEmployee.cpp"
#include "IEmployeeBonus.cpp"

using namespace std;

class EStaff : public IEmployee
{
public:
	EStaff() {

	}
	void ProcessEStaff() {

	}
	void printEmployeeDetail() override {
		cout << "id: " << IEmployee::id << endl;
		cout << "fullname: " << IEmployee::fullname << endl;
		cout << "Position: Phuc vu" << endl;
		cout << "salary: " << IEmployee::salary << endl;
	}
	bool isNull() override {
		return false;
	}
};

