#pragma once
#include <iostream>
#include <string>

using namespace std;

class INotification
{
public:
	INotification() {
	}
	virtual void Send(string content, string address) = 0;
};

