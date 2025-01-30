#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {
        string brand;
        string model;
        int year;
    } car1, car2;

    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 1999;

    cout << "Car brand : " << car1.brand << endl;
    cout << "Car model : " << car1.model << endl;
    cout << "Publish year : " << car1.year << endl;
    return 0;
}