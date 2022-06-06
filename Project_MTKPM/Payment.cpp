#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Bidv.cpp"
#include "Vietinbank.cpp"
#include "Vietcapitalbank.cpp"
#include "Bank.cpp"

using namespace std;

class Payment : public MethodPay
{
public:
	Payment() {

	}
	void ProcessPayment(string id, int amount, vector<Bank> &bank) {
		int narray = 0;
		string nameBank = "";
		int balance = 0;

		narray = bank.size();
		for (int i = 0; i < narray; i++) {
			if (bank[i].getId() == id) {
				bidv.ProcessBidv(bank[i].getBidv());
				vietinbank.ProcessVietinbank(bank[i].getVietinbank());
				vietcapitalbank.ProcessVietcapitalbank(bank[i].getVietcapitalbank());
			}
		}

		bidv.setNext(&vietinbank);
		vietinbank.setNext(&vietcapitalbank);

		bidv.ProcessMethodPay(amount, nameBank);
		for (int i = 0; i < narray; i++) {
			if (bank[i].getId() == id) {
				if (nameBank == "Bidv") {
					balance = bank[i].getBidv() - amount;
					bank[i].setBidv(balance);
				}
				else if (nameBank == "Vietinbank") {
					balance = bank[i].getVietinbank() - amount;
					bank[i].setVietinbank(balance);
				}
				else if (nameBank == "Vietcapitalbank") {
					balance = bank[i].getVietcapitalbank() - amount;
					bank[i].setVietcapitalbank(balance);
				}
				else
				{
					cout << "Thanh toan that bai do so du khong du" << endl;
					return;
				}
				cout << "Paid " << amount << " using " << nameBank << endl;
				i = narray;
			}
		}
	}

private:
	Bidv bidv;
	Vietinbank vietinbank;
	Vietcapitalbank vietcapitalbank;
};

