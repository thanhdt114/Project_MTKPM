#pragma once
#include <iostream>
#include <string>

using namespace std;

class MethodPay
{
public:
	MethodPay() {

	}
	void ProcessMethodPay(int amount, string &nameBank) {
		if (canPay(amount)) {
			nameBank = getMethodPayName();
		}
		else if (this->successor) {
			this->successor->ProcessMethodPay(amount, nameBank);
		}
		else
		{
			nameBank = "null";
			//throw "None of the pays have enough balance";
		}
	}

	virtual string getMethodPayName() {
		return "null";
	}

	void setNext(MethodPay* const pay) {
		this->successor = pay;
	}

	bool canPay(int amount) {
		return this->balance >= amount;
	}

protected:
	MethodPay* successor = nullptr;
	int balance;
};

