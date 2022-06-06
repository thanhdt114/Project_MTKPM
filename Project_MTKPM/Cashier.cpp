#pragma once
#include <iostream>
#include <string>

#include "IEmployee.cpp"
#include "IEmployeeBonus.cpp"

using namespace std;

class Cashier : public IEmployee, public IEmployeeBonus
{
public:
	Cashier() {

	}
	void ProcessCashier() {

	}
	double calculateBonus() override {
		return IEmployeeBonus::salary * 0.3;
	}
	void printEmployeeDetail() override {
		cout << "id: " << IEmployee::id << endl;
		cout << "fullname: " << IEmployee::fullname << endl;
		cout << "Position: Thu ngan" << endl;
		cout << "salary: " << IEmployee::salary << endl;
	}
	bool isNull() override {
		return false;
	}
};

