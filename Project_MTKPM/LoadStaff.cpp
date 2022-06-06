#pragma once
#include <iostream>
#include <string>
#include "InputFile.cpp"
#include "Staff.cpp"

using namespace std;

class LoadStaff
{
public:
	LoadStaff(vector<string> arraytemp, vector<Staff> &staff) {
		this->narray = arraytemp.size();
		
		for (int i = 0; i < this->narray; i++) {
#pragma warning(suppress : 4996)
			strcpy(this->str, arraytemp[i].c_str());
#pragma warning(suppress : 4996)
			this->p = strtok(this->str, "_");
			this->staff.setId(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->staff.setFullName(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->staff.setPosition(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->staff.setSalary(stoi(this->p));

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->staff.setBirthday(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->staff.setAddress(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->staff.setEmail(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->staff.setPhoneNumber(this->p);

			staff.push_back(this->staff);
		}
		
	}

private:
	Staff staff;
	int narray;
	char str[255];
	char* p = nullptr;
};

