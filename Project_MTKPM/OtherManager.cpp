#pragma once
#include <iostream>
#include <string>

#include "NotiManager.cpp"

using namespace std;

template <typename Notification>
class OtherManager : public NotiManager
{
protected:
	INotification* makeNotification() override {
		return new Notification();
	}
};

