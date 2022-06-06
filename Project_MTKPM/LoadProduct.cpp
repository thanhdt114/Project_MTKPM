#pragma once
#include <iostream>
#include <string>
#include "InputFile.cpp"
#include "Product.cpp"

using namespace std;

class LoadProduct
{
public:
	LoadProduct(vector<string> arraytemp, vector<Product>& product) {
		this->narray = arraytemp.size();

		for (int i = 0; i < this->narray; i++) {
#pragma warning(suppress : 4996)
			strcpy(this->str, arraytemp[i].c_str());
#pragma warning(suppress : 4996)
			this->p = strtok(this->str, "_");
			this->product.setId(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->product.setName(this->p);

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->product.setPrice(stoi(this->p));

#pragma warning(suppress : 4996)
			this->p = strtok(NULL, "_");
			this->product.setCat_id(this->p);

			product.push_back(this->product);
		}

	}

private:
	Product product;
	int narray;
	char str[255];
	char* p = nullptr;
};

