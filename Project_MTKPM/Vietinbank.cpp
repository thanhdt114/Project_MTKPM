#pragma once
#include <iostream>
#include <string>
#include "MethodPay.cpp"

using namespace std;

class Vietinbank : public MethodPay
{
public:
	Vietinbank() {

	}
	void ProcessVietinbank(int balance) {
		this->balance = balance;
	}
	string getMethodPayName() override {
		return "Vietinbank";
	}

private:

};

