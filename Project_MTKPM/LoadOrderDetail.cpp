#pragma once
#include <iostream>
#include <string>
#include "InputFile.cpp"
#include "OrderDetail.cpp"

using namespace std;

class LoadOrderDetail
{
public:
	LoadOrderDetail(vector<string> arraytemp, vector<OrderDetail>& orderDetail) {
		this->narray = arraytemp.size();

		for (int i = 0; i < this->narray; i++) {
#pragma warning(suppress : 4996)
			strcpy(this->str, arraytemp[i].c_str());
#pragma warning(suppress : 4996)
			this->p = strtok(this->str, "_");
			this->orderDetail.setId(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->orderDetail.setProduct_id(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->orderDetail.setQuantity(stoi(this->p));


#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->orderDetail.SetPrice(stoi(this->p));

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->orderDetail.setOrder_id(this->p);

			orderDetail.push_back(this->orderDetail);
		}
	}

private:
	OrderDetail orderDetail;
	int narray;
	char str[255];
	char* p = nullptr;
};

