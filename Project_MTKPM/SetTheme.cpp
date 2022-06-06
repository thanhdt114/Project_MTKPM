#pragma once
#include <iostream>
#include <string>

#include "ISoftware.cpp"

using namespace std;

class SetTheme : public ISoftware
{
public:
	SetTheme(ITheme& theme) : ISoftware(theme){

	}
	void setSoftwareTheme() override {
		theme_.setTheme();
		cout << "Changed the theme to: " << theme_.getColor();
	}
};

