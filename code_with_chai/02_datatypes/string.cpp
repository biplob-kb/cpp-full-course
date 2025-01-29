#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a word : ";
    getline(cin, text);

    cout << "You have Entered : " << text << endl;
    return 0;
}