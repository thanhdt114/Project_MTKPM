#pragma once
#include <iostream>
#include <string>
#include "InputFile.cpp"
#include "OrderDetail.cpp"
#include "Product.cpp"
#include "Order.cpp"
#include "AddOrderDetail.cpp"

using namespace std;

class AddOrder
{
public:
	AddOrder() {

	}
	void ProcessAddOrder(string staff_id, string date, string note, vector<Order>& order, vector<OrderDetail> orderDetail) {
		int id = 0;
		int total = 0;
		int narray = 0;

		narray = order.size();
		id = stoi(order[narray - 1].getId()) + 1;

		this->order.setId(to_string(id));
		this->order.setStaff_id(staff_id);
		for (int i = 0; i < orderDetail.size(); i++) {
			if (orderDetail[i].getOrder_id() == to_string(id)) {
				total += orderDetail[i].getTotalPrice();
			}
		}
		this->order.setTotalPrice(total);
		this->order.setDate(date);
		this->order.setNote(note);
		order.push_back(this->order);
	}

private:
	Order order;
};

