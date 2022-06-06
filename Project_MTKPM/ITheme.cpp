#pragma once
#include <iostream>
#include <string>

using namespace std;

class ITheme
{
public:
	ITheme() {

	}
	virtual string getColor() = 0;
	virtual void setTheme() = 0;
};

