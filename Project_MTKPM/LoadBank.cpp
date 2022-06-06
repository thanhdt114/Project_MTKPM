#pragma once
#include <iostream>
#include <string>
#include "InputFile.cpp"
#include "Bank.cpp"

using namespace std;

class LoadBank
{
public:
	LoadBank(vector<string> arraytemp, vector<Bank>& bank) {
		this->narray = arraytemp.size();

		for (int i = 0; i < this->narray; i++) {
#pragma warning(suppress : 4996)
			strcpy(this->str, arraytemp[i].c_str());
#pragma warning(suppress : 4996)
			this->p = strtok(this->str, "_");
			this->bank.setId(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->bank.setPin(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->bank.setBidv(stoi(this->p));


#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->bank.setVietinbank(stoi(this->p));

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->bank.setVietcapitalbank(stoi(this->p));

			bank.push_back(this->bank);
		}
	}

private:
	Bank bank;
	int narray;
	char str[255];
	char* p = nullptr;
};

