#pragma once
#include <iostream>

using namespace std;

class Category
{
public:
	Category() {

	}
	void setId(string id) {
		this->id = id;
	}
	void setName(string name) {
		this->name = name;
	}

	string getId() {
		return this->id;
	}
	string getName() {
		return this->name;
	}

private:
	string id;
	string name;
};

