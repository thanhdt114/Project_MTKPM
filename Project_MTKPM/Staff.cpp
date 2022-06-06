#pragma once
#include <iostream>

using namespace std;

class Staff
{
public:
	Staff() {

	}
	void setId(string id) {
		this->id = id;
	}
	void setFullName(string fullname) {
		this->fullname = fullname;
	}
	void setPosition(string position) {
		this->position = position;
	}
	void setSalary(int salary) {
		this->salary = salary;
	}
	void setBirthday(string birthday) {
		this->birthday = birthday;
	}
	void setAddress(string address) {
		this->address = address;
	}
	void setEmail(string email) {
		this->email = email;
	}
	void setPhoneNumber(string phonenumber) {
		this->phonenumber = phonenumber;
	}

	string getId() {
		return this->id;
	}
	string getFullName() {
		return this->fullname;
	}
	string getPosition() {
		return this->position;
	}
	int getSalary() {
		return this->salary;
	}
	string getBirthday() {
		return this->birthday;
	}
	string getAddress() {
		return this->address;
	}
	string getEmail() {
		return this->email;
	}
	string getPhoneNumber() {
		return this->phonenumber;
	}

private:
	string id;
	string fullname;
	string position;
	int salary;
	string birthday;
	string address;
	string email;
	string phonenumber;
};

