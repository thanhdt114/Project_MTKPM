#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Staff.cpp"
#include "Bartender.cpp"
#include "Cashier.cpp"
#include "EStaff.cpp"
#include "NullEmployee.cpp"
#include "SalaryEmployee.cpp"
#include "SalaryEmployeeBonus.cpp"

using namespace std;

class Salary
{
public:
	Salary() {

	}
	void ProcessSalary(vector<Staff> staff) {
		double bonus = 0;
		string position = "";
		for (int i = 0; i < staff.size(); i++) {
			position = staff[i].getPosition();
			if (position == "Pha che") {
				this->salaryEmployee.ProcessSalaryEmployee(make_shared<Bartender>());
				this->salaryEmployeeBonus.ProcessSalaryEmployeeBonus(make_shared<Bartender>());
			}
			else if (position == "Thu ngan") {
				this->salaryEmployee.ProcessSalaryEmployee(make_shared<Cashier>());
				this->salaryEmployeeBonus.ProcessSalaryEmployeeBonus(make_shared<Cashier>());
			}
			else if (position == "Phuc vu") {
				this->salaryEmployee.ProcessSalaryEmployee(make_shared<EStaff>());
			}
			else
			{
				this->salaryEmployee.ProcessSalaryEmployee(make_shared<NullEmployee>());
			}
			this->salaryEmployee.printInfor(staff[i].getId(), staff[i].getFullName(), staff[i].getSalary());
			if (position == "Pha che" || position == "Thu ngan") {
				this->salaryEmployeeBonus.printfInfor(staff[i].getSalary());
			}
			cout << endl;
		}
	}
	
private:
	Bartender bartender;
	Cashier cashier;
	EStaff eStaff;
	NullEmployee nullEmployee;
	SalaryEmployee salaryEmployee;
	SalaryEmployeeBonus salaryEmployeeBonus;
};

