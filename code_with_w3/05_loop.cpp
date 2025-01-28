#include <iostream>
using namespace std;

int main()
{
    // ------------------------for loop initialize-----------------------
    /*
    for (int i = 0; i <= 5; i++)
    {
        cout << i << " ";
    }
    */

    //------------------------while loop initialize-----------------------
    /*
    int j = 0;
    while (j <= 5)
    {
        cout << j << " ";
        j++;
    }
    */

    //----------------------nested for loop----------------------------------
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}