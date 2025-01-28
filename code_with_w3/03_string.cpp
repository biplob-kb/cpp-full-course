#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a Lowercase letter : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        char uppercaseChar = ch - 32;
        cout << "Uppercase is : " << uppercaseChar << endl;
    }
    else
    {
        cout << "Your input is wrong" << endl;
    }

    return 0;
}