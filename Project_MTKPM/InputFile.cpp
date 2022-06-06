#pragma once
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class InputFile
{
public:
    InputFile() {

    }
	void Process(string namefile, vector<string> &arraytemp) {
        char temp[255];
        int i = 0;

        ifstream fileInput(namefile);
        if (fileInput.fail()) {
            cout << "Failed to open this file!" << endl;
        }
        else
        {
            while (!fileInput.eof()) {
                fileInput.getline(temp, 255);
                arraytemp.push_back(temp);
            }
        }
        fileInput.close();
	} 
};
