#pragma once
#include <iostream>
#include <string>

#include "INotification.cpp"

using namespace std;

class PhoneNumber : public INotification
{
public:
	PhoneNumber() {

	}
	void Send(string content, string address) override {
		cout << "Send 1 message to the phone number" << endl;
		cout << "Phone number: " << address << endl;
		cout << "Content: " << content << endl;
	}
};

