#pragma once
#include <iostream>

using namespace std;

class Bank
{
public:
	Bank() {

	}
	void setId(string id) {
		this->id = id;
	}
	void setPin(string pin) {
		this->pin = pin;
	}
	void setBidv(int balance) {
		this->bidv = balance;
	}
	void setVietinbank(int balance) {
		this->vietinbank = balance;
	}
	void setVietcapitalbank(int balance) {
		this->vietcapitalbank = balance;
	}

	string getId() {
		return this->id;
	}
	string getPin() {
		return this->pin;
	}
	int getBidv() {
		return this->bidv;
	}
	int getVietinbank() {
		return this->vietinbank;
	}
	int getVietcapitalbank() {
		return this->vietcapitalbank;
	}

private:
	string id;
	string pin;
	int bidv;
	int vietinbank;
	int vietcapitalbank;
};

