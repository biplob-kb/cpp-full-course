#include <iostream>
#include <string>
using namespace std;

int main()
{
    //----------------------some string operation------------------
    /*
    string text;

    cout << "Enter a word : ";
    getline(cin, text);

    cout << "You have Entered : " << text << endl;
    cout << "Length of the word : " << text.length() << endl;
    cout << "First character of the word : " << text[0] << endl;
    cout << "Last character of the word : " << text[text.length() - 1] << endl;
    text[0] = 'J';
    cout << "First character replace by J : " << text << endl;

    */

    //--------------------------character conversion---------------
    char ch;
    cout << "Enter a character : ";
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
        cout << "Invalid Input" << endl;
    }
    return 0;
}