#include <iostream>
using namespace std;

int main()
{
    string productName;
    float price;
    int quantity;
    float sellPrice;

    cout << "Enter product name : ";
    getline(cin, productName);

    cout << "Enter per product price : ";
    cin >> price;
    cout << "Enter product quantity : ";
    cin >> quantity;

    cout << "Product name : " << productName << endl;
    cout << "Per product price : " << price << endl;
    cout << "Product quantity : " << quantity << endl;
    cout << "Total Cost : " << price * quantity << endl;

    cout << "----------------------------" << endl;
    cout << "Price per product for sell : ";
    cin >> sellPrice;

    cout << "Your profit : " << (sellPrice * quantity) - (price * quantity) << endl;
    cout << endl;
    return 0;
}