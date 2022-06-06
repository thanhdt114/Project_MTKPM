#pragma once
#include <iostream>
#include <string>
#include "InputFile.cpp"
#include "OrderDetail.cpp"
#include "Product.cpp"

using namespace std;

class AddOrderDetail
{
public:
	AddOrderDetail() {

	}
	void ProcessAddOrderDetail(string product_id, int quantity, string order_id, vector<Product> product, vector<OrderDetail>& orderDetail) {
		int narray = 0;
		int id = 0;
		int price = 0;

		narray = orderDetail.size();
		id = stoi(orderDetail[narray - 1].getId()) + 1;

		this->orderDetail.setId(to_string(id));
		this->orderDetail.setProduct_id(product_id);
		this->orderDetail.setQuantity(quantity);
		for (int i = 0; i < product.size(); i++) {
			if (product_id == product[i].getId()) {
				price = product[i].getPrice();
			}
		}
		this->orderDetail.SetPrice(price);
		this->orderDetail.setOrder_id(order_id);
		orderDetail.push_back(this->orderDetail);
	}

private:
	OrderDetail orderDetail;
};

