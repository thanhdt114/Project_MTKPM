#pragma once
#include <iostream>
#include "InputFile.cpp"
#include "Category.cpp"

using namespace std;

class LoadCategory
{
public:
	LoadCategory(vector<string> arraytemp, vector<Category>& category) {
		this->narray = arraytemp.size();

		for (int i = 0; i < this->narray; i++) {
#pragma warning(suppress : 4996)
			strcpy(this->str, arraytemp[i].c_str());
#pragma warning(suppress : 4996)
			this->p = strtok(this->str, "_");
			this->category.setId(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->category.setName(this->p);

			category.push_back(this->category);
		}

	}

private:
	Category category;
	int narray;
	char str[255];
	char* p = nullptr;
};

