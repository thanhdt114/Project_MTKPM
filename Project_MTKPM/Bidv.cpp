#pragma once
#include <iostream>
#include <string>
#include "MethodPay.cpp"

using namespace std;

class Bidv : public MethodPay
{
public:
	Bidv() {

	}
	void ProcessBidv(int balance) {
		this->balance = balance;
	}
	string getMethodPayName() override {
		return "Bidv";
	}

private:
	
};

