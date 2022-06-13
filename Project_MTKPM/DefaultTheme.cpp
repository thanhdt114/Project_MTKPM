#pragma once
#include <iostream>
#include <string>

#include "ITheme.cpp"

using namespace std;

class DefaultTheme : public ITheme
{
public:
	DefaultTheme() {

	}
	string getColor() override {
		return "Default";
	}
	void setTheme() override {
		system("color 7");
	}
};

