#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "Product.cpp"

using namespace std;

class Menu
{
public:
    Menu() {

    }

	void Process(vector<Product> product) {
        int narray = 0;
        int i = 0;
        int nMax = 0;
        narray = product.size();
        vector<Product> cafe;
        vector<Product> juice;
        vector<Product> vitamin;

        for (i = 0; i < narray; i++) {
            if (product[i].getCat_id() == "01") {
                cafe.push_back(product[i]);
            }
            else if (product[i].getCat_id() == "02")
            {
                juice.push_back(product[i]);
            }
            else
            {
                vitamin.push_back(product[i]);
            }
        }

        nMax = cafe.size();
        if (nMax < juice.size()) {
            nMax = juice.size();
        }
        if (nMax < vitamin.size()) {
            nMax = vitamin.size();
        }

        cout << ">>>>>>>>>> WELL COME TO CAFE 24H <<<<<<<<<<\n\n";
        cout << "MENU\n\n";

        printProduct(cafe, "CA PHE");
        cout << endl;
        printProduct(juice, "NUOC EP TRAI CAY");
        cout << endl;
        printProduct(vitamin, "SINH TO");
        cout << endl;
	}

    void printProduct(vector<Product> product, string category) {
        int i = 0;
        cout << "....." << category << "....." << endl;
        cout << setw(5) << left << "No";
        cout << setw(20) << left << "Name";
        cout << setw(8) << right << "Price" << endl;

        cout << setfill('-');
        cout << setw(34) << "-";
        cout << setfill(' ') << endl;

        for (i = 0; i < product.size(); i++) {
            cout << setw(5) << left << product[i].getId();
            cout << setw(20) << left << product[i].getName();
            cout << setw(8) << right << product[i].getPrice() << "d" << endl;
        }
    }
};

