#pragma once
#include <iostream>
#include <string>

#include "ITheme.cpp"

using namespace std;

class RedWhiteTheme : public ITheme
{
public:
	RedWhiteTheme() {

	}
	string getColor() override {
		return "RedWhite";
	}
	void setTheme() override {
		system("color 47");
	}
};

