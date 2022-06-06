#pragma once
#include <iostream>
#include <string>

using namespace std;

class IEmployee
{
public:
	IEmployee() {

	}
	void ProcessIEmployee(string id, string fullname, int salary) {
		this->id = id;
		this->fullname = fullname;
		this->salary = salary;
		printEmployeeDetail();
		isNull();
	}

protected:
	string id;
	string fullname;
	int salary;
	virtual void printEmployeeDetail() = 0;
	virtual bool isNull() = 0;
};

