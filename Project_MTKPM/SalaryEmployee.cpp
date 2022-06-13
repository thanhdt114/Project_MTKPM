#pragma once
#include <iostream>
#include <string>

#include "IEmployee.cpp"

using namespace std;

class SalaryEmployee 
{
public:
	SalaryEmployee() {
	}
	void ProcessSalaryEmployee(const shared_ptr<IEmployee>& state) {
		this->state = state;
	}
	void printInfor(string id, string fullname, int salary) {
		this->state->ProcessIEmployee(id, fullname, salary);
	}

private:
	shared_ptr<IEmployee> state;
};

