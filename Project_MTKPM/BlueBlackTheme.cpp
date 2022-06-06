#pragma once
#include <iostream>
#include <string>

#include "ITheme.cpp"

using namespace std;

class BlueBlackTheme : public ITheme
{
public:
	BlueBlackTheme() {

	}
	string getColor() override {
		return "BlueBlack";
	}
	void setTheme() override {
		system("color 30");
	}
};

