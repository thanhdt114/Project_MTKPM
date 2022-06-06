#pragma once
#include <iostream>
#include <string>

#include "IEmployeeBonus.cpp"

using namespace std;

class SalaryEmployeeBonus
{
public:
	SalaryEmployeeBonus() {
	}
	void ProcessSalaryEmployeeBonus(const shared_ptr<IEmployeeBonus>& state) {
		this->state = state;
	}
	void setState(const shared_ptr<IEmployeeBonus>& state) {
		this->state = state;
	}
	void printfInfor(int salary) {
		this->state->ProcessIEmployeeBonus(salary);
		printf("bonus: %.0lf \n", this->state->calculateBonus());
	}
private:
	shared_ptr<IEmployeeBonus> state;
};

