#include <iostream>
using namespace std;

int main()
{
    //-------------------------Leap year-------------------------
    /*
    int year;
    cout << "Enter a year : ";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "It is Leap year." << endl;
    }
    else
    {
        if (year % 100 != 0 && year % 4 == 0)
        {
            cout << "It is Leap year." << endl;
        }
        else
        {
            cout << "It is not Leap year." << endl;
        }
    }

    */

    //----------------------------Finding big number from three-------
    int firstNum, secondNum, thirdNum;
    cout << "Enter first number : ";
    cin >> firstNum;
    cout << "Enter second number : ";
    cin >> secondNum;
    cout << "Enter third number : ";
    cin >> thirdNum;

    if (firstNum > secondNum && firstNum > thirdNum)
    {
        cout << "The big number is : " << firstNum << endl;
    }
    else if (secondNum > firstNum && secondNum > thirdNum)
    {
        cout << "The big number is : " << secondNum << endl;
    }
    else
    {
        cout << "The big number is : " << thirdNum << endl;
    }

    return 0;
}