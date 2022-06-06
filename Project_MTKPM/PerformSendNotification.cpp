#pragma once
#include <iostream>
#include <string>

#include "NotiManager.cpp"
#include "OtherManager.cpp"
#include "Email.cpp"
#include "PhoneNumber.cpp"

using namespace std;

class PerformSendNotification
{
public:
	PerformSendNotification() {

	}
	void Process(string type) {
        int key = 0;
        string address;

        cout << "Chon phuong thuc gui:" << endl;
        cout << "1. Email" << endl;
        cout << "2. Phone Number" << endl;
        cin >> key;

        if (key == 1) {
            cout << "Nhap email: ";
            cin >> address;
            NotiManager* emailNotification = new OtherManager<Email>();
            emailNotification->takeNotification(type, address);
        }
        else
        {
            cout << "Nhap so dien thoai: ";
            cin >> address;
            NotiManager* phoneNotification = new OtherManager<PhoneNumber>();
            phoneNotification->takeNotification(type, address);
        }
	}
};

