#pragma once
#include <iostream>
#include <string>
#include "InputFile.cpp"
#include "OrderDetail.cpp"
#include "Product.cpp"
#include "Order.cpp"
#include "AddOrderDetail.cpp"
#include "AddOrder.cpp"


using namespace std;

class FuncOrder : public AddOrderDetail, public AddOrder
{
public:
	FuncOrder() {

	}
	void ProcessFuncOrder(vector<Product> product, vector<Order> &order, vector<OrderDetail> &orderDetail) {
		int i = 0, narray = 0;
		int order_id = 0;
		string product_id;
		int quantity = 0;
		int price = 0;
		string id;
		string str;
		int len = 0;
		string bank_id;

		narray = order.size();
		order_id = stoi(order[narray - 1].getId());

		cout << "Nhap id thuc uong va so luong: ";
		cin >> product_id >> quantity;

		do {
			id = to_string(order_id + 1);
			this->ProcessAddOrderDetail(product_id, quantity, id, product, orderDetail);

			cin.ignore();
			cout << "Chon 1 de hoan tat nhap hoac nhap tiep: ";
			getline(cin, str);
			len = str.length();
			if (len > 1) {
				splitString(str, product_id, quantity);
			}
			
		} while (len != 1);

		//cout << "Nhap voucher (N: bo qua): ";

		cout << "Nhap id nhan vien: ";
		cin >> id;
		this->ProcessAddOrder(id, "04/06/2022", "Note", order, orderDetail);
	}

	string charToString(char* a)
	{
		string s(a);

		return s;
	}

	void splitString(string str, string &id, int &quantity) {
		char temp[3];

		id.clear();

		temp[0] = str[0];
		temp[1] = str[1];
		temp[2] = '\0';
		id = charToString(temp);
		temp[0] = str[3];
		temp[1] = '\0';
		if (str.size() == 5) {
			temp[1] = str[4];
			temp[2] = '\0';
		}
		quantity = stoi(charToString(temp));
	}

private:
	OrderDetail orderDetail;
	Order order;
};

