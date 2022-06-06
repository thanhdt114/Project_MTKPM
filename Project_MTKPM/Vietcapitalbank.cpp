#pragma once
#include <iostream>
#include <string>
#include "MethodPay.cpp"

using namespace std;

class Vietcapitalbank : public MethodPay
{
public:
	Vietcapitalbank() {

	}
	void ProcessVietcapitalbank(int balance) {
		this->balance = balance;
	}
	string getMethodPayName() override {
		return "Vietcapitalbank";
	}

private:

};

