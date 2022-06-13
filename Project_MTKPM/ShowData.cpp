#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "Bank.cpp"
#include "Category.cpp"
#include "Order.cpp"
#include "OrderDetail.cpp"
#include "Product.cpp"
#include "Staff.cpp"

using namespace std;

class ShowData
{
public:
	ShowData() {

	}
	void ShowDataBank(vector<Bank> bank) {
		for (int i = 0; i < bank.size(); i++) {
			cout << "id: " << bank[i].getId() << endl;
			cout << "pin: " << bank[i].getPin() << endl;
			cout << "bidv: " << bank[i].getBidv() << endl;
			cout << "vietinbank: " << bank[i].getVietinbank() << endl;
			cout << "vietcapitalbank: " << bank[i].getVietcapitalbank() << endl;
			cout << endl;
		}
	}

	void ShowDataCategory(vector<Category> category) {
		for (int i = 0; i < category.size(); i++) {
			cout << "id: " << category[i].getId() << endl;
			cout << "name: " << category[i].getName() << endl;
			cout << endl;
		}
	}

	void ShowDataOrder(vector<Order> order) {
		for (int i = 0; i < order.size(); i++) {
			cout << "id: " << order[i].getId() << endl;
			cout << "staff_id: " << order[i].getStaff_id() << endl;
			cout << "totalprice: " << order[i].getTotalPrice() << endl;
			cout << "date: " << order[i].getdate() << endl;
			cout << "note: " << order[i].getNote() << endl;
			cout << endl;
		}
	}

	void ShowDataOrderDetail(vector<OrderDetail> orderDetail) {
		for (int i = 0; i < orderDetail.size(); i++) {
			cout << "id: " << orderDetail[i].getId() << endl;
			cout << "product_id: " << orderDetail[i].getProduct_id() << endl;
			cout << "quantity: " << orderDetail[i].getQuantity() << endl;
			cout << "price: " << orderDetail[i].getPrice() << endl;
			cout << "total: " << orderDetail[i].getTotalPrice() << endl;
			cout << "order_id: " << orderDetail[i].getOrder_id() << endl;
			cout << endl;
		}
	}

	void ShowDataProduct(vector<Product> product) {
		for (int i = 0; i < product.size(); i++) {
			cout << "id: " << product[i].getId() << endl;
			cout << "name: " << product[i].getName() << endl;
			cout << "price: " << product[i].getPrice() << endl;
			cout << "cat_id: " << product[i].getCat_id() << endl;
			cout << endl;
		}
	}

	void ShowDataStaff(vector<Staff> staff) {
		for (int i = 0; i < staff.size(); i++) {
			cout << "id: " << staff[i].getId() << endl;
			cout << "fullname: " << staff[i].getFullName() << endl;
			cout << "position: " << staff[i].getPosition() << endl;
			cout << "salary: " << staff[i].getSalary() << endl;
			cout << "birthday: " << staff[i].getBirthday() << endl;
			cout << "address: " << staff[i].getAddress() << endl;
			cout << "email: " << staff[i].getEmail() << endl;
			cout << "phonenumber: " << staff[i].getPhoneNumber() << endl;
			cout << endl;
		}
	}

	void ShowDataOrderDetail_OrderID(vector<OrderDetail> orderDetail, string order_id, vector<Product> product) {
		int totalBill = 0;

		cout << ".........................BILL........................" << endl;
		cout << "ID: " << order_id << endl;
		cout << setw(25) << left << "Name product";
		cout << setw(10) << left << "Price";
		cout << setw(5) << left << "Quantity";
		cout << setw(10) << right << "Total" << endl;

		cout << setfill('-');
		cout << setw(53) << "-";
		cout << setfill(' ') << endl;

		for (int i = 0; i < orderDetail.size(); i++) {
			if (orderDetail[i].getOrder_id() == order_id) {
				totalBill += orderDetail[i].getTotalPrice();
				for (int k = 0; k < product.size(); k++) {
					if (product[k].getId() == orderDetail[i].getProduct_id()) {
						cout << setw(25) << left << product[k].getName();
					}
				}
				cout << setw(14) << left << orderDetail[i].getPrice();
				cout << setw(3) << left << orderDetail[i].getQuantity();
				cout << setw(10) << right << orderDetail[i].getTotalPrice() << "d" << endl;
			}
		}

		cout << setfill('-');
		cout << setw(53) << "-";
		cout << setfill(' ') << endl;

		cout << setw(46) << right << "Total Bill: " << totalBill << "d\n\n";
	}
};

