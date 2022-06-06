#pragma once
#include <iostream>
#include <string>

using namespace std;

class IEmployeeBonus
{
public:
	IEmployeeBonus() {

	}
	void ProcessIEmployeeBonus(int salary) {
		this->salary = salary;
	}
	virtual double calculateBonus() = 0;
protected:
	int salary;
};

