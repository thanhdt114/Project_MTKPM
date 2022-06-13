#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <iomanip>
#include <conio.h>

#include "Staff.cpp"
#include "Category.cpp"
#include "Product.cpp"
#include "Order.cpp"
#include "OrderDetail.cpp"
#include "Bank.cpp"

#include "LoadStaff.cpp"
#include "LoadCategory.cpp"
#include "LoadProduct.cpp"
#include "LoadOrders.cpp"
#include "LoadOrderDetail.cpp"
#include "LoadBank.cpp"

#include "InputFile.cpp"
#include "Menu.cpp"
#include "FuncOrder.cpp"
#include "Payment.cpp"
#include "ShowData.cpp"
#include "Salary.cpp"
#include "PerformSendNotification.cpp"
#include "PerformSetTheme.cpp"

using namespace std;

int main()
{
    char key_press;
    int i = 0;
    int narray = 0;
    int key = 0;
    int total = 0;
    string type;
    string bank_id;
    InputFile inputfile;
    ShowData showData;
    vector<string> arraytemp;
    vector<Staff> staff;
    vector<Category> category;
    vector<Product> product;
    vector<Order> order;
    vector<OrderDetail> orderDetail;
    vector<Bank> bank;
  
    // Load data
    inputfile.Process("Staff.txt", arraytemp);
    LoadStaff loadStaff(arraytemp, staff);
    arraytemp.clear();
    inputfile.Process("Category.txt", arraytemp);
    LoadCategory loadCategory(arraytemp, category);
    arraytemp.clear();
    inputfile.Process("Product.txt", arraytemp);
    LoadProduct loadProduct(arraytemp, product);
    arraytemp.clear();
    inputfile.Process("Orders.txt", arraytemp);
    LoadOrders loadOrders(arraytemp, order);
    arraytemp.clear();
    inputfile.Process("OrderDetail.txt", arraytemp);
    LoadOrderDetail loadOrderDetail(arraytemp, orderDetail);
    arraytemp.clear();
    inputfile.Process("Bank.txt", arraytemp);
    LoadBank loadBank(arraytemp, bank);
    arraytemp.clear();
    
    // Show Menu
    Menu menu;
    menu.Process(product);
    
    do {
        // Th?c thi
        cout << ">>>>> OPTIONS <<<<<" << endl;
        cout << "1. Order" << endl;
        cout << "2. Payroll" << endl;
        cout << "3. Send notification" << endl;
        cout << "4. Set Theme" << endl;
        cout << "5. Show data" << endl;
        cout << "Select: ";
        cin >> key;
        if (key == 1) {
            cout << "\n";
            FuncOrder funcOrder;
            funcOrder.ProcessFuncOrder(product, order, orderDetail);
            
            cout << "Chon phuong thuc thanh toan:" << endl;
            cout << "1. Tien mat \n2. Online" << endl;
            cin >> key;
            if (key == 1) {
                cout << "Da thanh toan" << endl;
            }
            else if (key == 2) {
                cout << "Nhap ma so CCCD: ";
                cin >> bank_id;

                Payment payment;
                payment.ProcessPayment(bank_id, order[order.size() - 1].getTotalPrice(), bank);
            }
            
        }
        else if (key == 2) {
            cout << "\n";
            Salary salary;
            salary.ProcessSalary(staff);
        }
        else if (key == 3)
        {
            cout << "\n";
            cin.ignore();
            cout << "Nhap notification: ";
            getline(cin, type);

            PerformSendNotification send;
            send.Process(type);
        }
        else if (key == 4)
        {
            cout << "\n";
            cout << "Chon theme:" << endl;
            cout << "1. Aqua Theme" << endl;
            cout << "2. Yellow Theme" << endl;
            cout << "3. BlueBlack Theme" << endl;
            cout << "4. RedWhite Theme" << endl;
            cout << "5. Default Theme" << endl;
            cout << "Select: ";
            cin >> key;
            
            PerformSetTheme theme;
            theme.Process(key);
        }
        else
        {
            cout << ">>>>> SELECT DATA <<<<<" << endl;
            cout << "1. Show data category" << endl;
            cout << "2. Show data product" << endl;
            cout << "3. Show data staff" << endl;
            cout << "4. Show data order" << endl;
            cout << "5. Show data order detail" << endl;
            cout << "6. Show data bank" << endl;
            cout << "Select: ";
            cin >> key;
            if (key == 1) {
                showData.ShowDataCategory(category);
            }
            else if (key == 2) {
                showData.ShowDataProduct(product);
            }
            else if (key == 3) {
                showData.ShowDataStaff(staff);
            }
            else if (key == 4) {
                showData.ShowDataOrder(order);
            }
            else if (key == 5) {
                showData.ShowDataOrderDetail(orderDetail);
            }
            else {
                showData.ShowDataBank(bank);
            }
        }
        cout << "\n---------------------------------------------\n";
        cout << ">>>>> OPTIONS <<<<<" << endl;
        cout << "Press ENTER to continue" << endl;
        cout << "Press ESC to exit" << endl;
        key_press = _getch();
        if (key_press == 27) {
            break;
        }
    } while (true);

    return 0;
}

