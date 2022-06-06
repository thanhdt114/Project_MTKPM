#pragma once
#include <iostream>
#include <string>

#include "INotification.cpp"

using namespace std;

class NotiManager
{
public:
	NotiManager() {
		
	}
	void takeNotification(string content, string address) {
		INotification* notification = this->makeNotification();
		notification->Send(content, address);
	}
protected:
	virtual INotification* makeNotification() = 0;
};

