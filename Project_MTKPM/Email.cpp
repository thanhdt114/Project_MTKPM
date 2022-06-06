#pragma once
#include <iostream>
#include <string>

#include "INotification.cpp"

using namespace std;

class Email : public INotification
{
public:
	Email() {

	}
	void Send(string content, string address) override {
		cout << "Sent an email notification" << endl;
		cout << "Address email: " << address << endl;
		cout << "Content: " << content << endl;
	}
};

