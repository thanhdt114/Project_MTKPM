#pragma once
#include <iostream>
#include <string>

#include "AquaTheme.cpp"
#include "YellowTheme.cpp"
#include "BlueBlackTheme.cpp"
#include "RedWhiteTheme.cpp"
#include "SetTheme.cpp"

using namespace std;

class PerformSetTheme 
{
public:
	PerformSetTheme() {

	}
	void Process(int key) {
		if (key == 1) {
			SetTheme setTheme(aquaTheme);
			setTheme.setSoftwareTheme();
		}
		else if (key == 2) {
			SetTheme setTheme(yellowTheme);
			setTheme.setSoftwareTheme();
		}
		else if (key == 3) {
			SetTheme setTheme(blueBlackTheme);
			setTheme.setSoftwareTheme();
		}
		else
		{
			SetTheme setTheme(redWhiteTheme);
			setTheme.setSoftwareTheme();
		}
	}
private:
	AquaTheme aquaTheme;
	YellowTheme yellowTheme;
	BlueBlackTheme blueBlackTheme;
	RedWhiteTheme redWhiteTheme;
};

