#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int tax = 5;
    string productName;
    int quantity;
    float price;

    cout << "Enter the product name : ";
    getline(cin, productName);
    cout << "Enter the quantity : ";
    cin >> quantity;
    cout << "Enter the price : ";
    cin >> price;

    cout << "Your product : " << productName << endl;
    cout << "Product Price : " << price << endl;
    cout << "Product quantity : " << quantity << endl;

    return 0;
}