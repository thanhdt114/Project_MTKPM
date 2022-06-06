#pragma once
#include <iostream>

using namespace std;

class Product
{
public:
	Product() {

	}
	void setId(string id) {
		this->id = id;
	}
	void setName(string name) {
		this->name = name;
	}
	void setPrice(int price) {
		this->price = price;
	}
	void setCat_id(string cat_id) {
		this->cat_id = cat_id;
	}

	string getId() {
		return this->id;
	}
	string getName() {
		return this->name;
	}
	int getPrice() {
		return this->price;
	}
	string getCat_id() {
		return this->cat_id;
	}

private:
	string id;
	string name;
	int price;
	string cat_id;
};

