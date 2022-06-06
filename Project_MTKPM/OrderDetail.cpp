#pragma once
#include <iostream>

using namespace std;

class OrderDetail
{
public:
	OrderDetail() {

	}
	void setId(string id) {
		this->id = id;
	}
	void setProduct_id(string product_id) {
		this->product_id = product_id;
	}
	void setQuantity(int quantity) {
		this->quantity = quantity;
	}
	void SetPrice(int price) {
		this->price = price;
	}
	void setOrder_id(string order_id) {
		this->order_id = order_id;
	}

	string getId() {
		return this->id;
	}
	string getProduct_id() {
		return this->product_id;
	}
	int getQuantity() {
		return this->quantity;
	}
	int getPrice() {
		return this->price;
	}
	int getTotalPrice() {
		int total = this->price * this->quantity;
		return total;
	}
	string getOrder_id() {
		return this->order_id;
	}

private:
	string id;
	string product_id;
	int quantity;
	int price;
	string order_id;
};

