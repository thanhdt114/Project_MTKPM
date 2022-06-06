#pragma once
#include <iostream>
#include <string>

#include "ITheme.cpp"

using namespace std;

class AquaTheme : public ITheme
{
public:
	AquaTheme() {

	}
	string getColor() override {
		return "Aqua";
	}
	void setTheme() override {
		system("color 3");
	}
};

