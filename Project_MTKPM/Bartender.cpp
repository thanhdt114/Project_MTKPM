#pragma once
#include <iostream>
#include <string>

#include "IEmployee.cpp"
#include "IEmployeeBonus.cpp"

using namespace std;

class Bartender : public IEmployee, public IEmployeeBonus
{
public:
	Bartender() {

	}
	void ProcessBartender() {

	}
	double calculateBonus() override {
		return IEmployeeBonus::salary * 0.5;
	}
	void printEmployeeDetail() override {
		cout << "id: " << IEmployee::id << endl;
		cout << "fullname: " << IEmployee::fullname << endl;
		cout << "Position: Pha che" << endl;
		cout << "salary: " << IEmployee::salary << endl;
	}
	bool isNull() override {
		return false;
	}
}; 

