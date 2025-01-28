#include <iostream>
using namespace std;

int main()
{

    //-----------------------------character conversion----------------------
    /*
    char ch;
    cout << "Enter a letter : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        char uppercaseChar = ch - 32;
        cout << "Uppercase is : " << uppercaseChar << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        char lowercaseChar = ch + 32;
        cout << "Lowercase is : " << lowercaseChar << endl;
    }
    else
    {
        cout << "Your input is wrong" << endl;
    }
    */

    //------------------------------string operations-------------------------------------
    string text;
    cout << "Enter a word : ";
    getline(cin, text);

    cout << "You have entered : " << text << endl;
    cout << "Length of the word is : " << text.length() << endl;
    cout << "First character is : " << text[0] << endl;
    cout << "Last character is : " << text[text.length() - 1] << endl;
    text[0] = 'J';
    cout << "First character changed by J : " << text << endl;

    return 0;
}