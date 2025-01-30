#include <iostream>
using namespace std;

int main()
{
    float price = 10.25;
    int quantity = 20;
    cout << "Before casting : " << price << endl;
    cout << "After casting : " << (int)price << endl;
    cout << "Before casting : " << quantity << endl;
    cout << "After casting : " << (float)quantity << endl;
    return 0;
}