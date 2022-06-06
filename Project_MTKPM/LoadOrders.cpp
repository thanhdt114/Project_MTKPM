#pragma once
#include <iostream>
#include <string>
#include "InputFile.cpp"
#include "Order.cpp"

using namespace std;

class LoadOrders
{
public:
	LoadOrders(vector<string> arraytemp, vector<Order>& order) {
		this->narray = arraytemp.size();

		for (int i = 0; i < this->narray; i++) {
#pragma warning(suppress : 4996)
			strcpy(this->str, arraytemp[i].c_str());
#pragma warning(suppress : 4996)
			this->p = strtok(this->str, "_");
			this->order.setId(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->order.setStaff_id(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->order.setTotalPrice(stoi(this->p));


#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->order.setDate(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->order.setNote(this->p);

			order.push_back(this->order);
		}
	}

private:
	Order order;
	int narray;
	char str[255];
	char* p = nullptr;
};

