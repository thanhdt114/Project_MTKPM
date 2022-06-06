#pragma once
#include <iostream>

using namespace std;

class Order
{
public:
	Order() {

	}
	void setId(string id) {
		this->id = id;
	}
	void setStaff_id(string staff_id) {
		this->staff_id = staff_id;
	}
	void setTotalPrice(int totalPrice) {
		this->totalPrice = totalPrice;
	}
	void setDate(string date) {
		this->date = date;
	}
	void setNote(string note) {
		this->note = note;
	}

	string getId() {
		return this->id;
	}
	string getStaff_id() {
		return this->staff_id;
	}
	int getTotalPrice() {
		return this->totalPrice;
	}
	string getdate() {
		return this->date;
	}
	string getNote() {
		return this->note;
	}

private:
	string id;
	string staff_id;
	int totalPrice;
	string date;
	string note;
};

