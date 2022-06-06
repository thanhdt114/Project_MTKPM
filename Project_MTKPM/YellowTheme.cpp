#pragma once
#include <iostream>
#include <string>

#include "ITheme.cpp"

using namespace std;

class YellowTheme : public ITheme
{
public:
	YellowTheme() {

	}
	string getColor() override {
		return "Yellow";
	}
	void setTheme() override {
		system("color 6");
	}
};

