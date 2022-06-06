#pragma once
#include <iostream>
#include <string>

#include "ITheme.cpp"

using namespace std;

class ISoftware
{
public:
	ISoftware(ITheme& theme) : theme_(theme){
		
	}
	virtual void setSoftwareTheme() = 0;
protected:
	ITheme& theme_;
};

