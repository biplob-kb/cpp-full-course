#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ----------------------array declaration-----------------
    /*
    int arr[5] = {1, 3, 5, 7, 9};
    string str[5] = {"Mango", "Apple", "Orange", "Pineapple", "Banana"};
    cout << "Your array is : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    */

    //--------------------------- array input----------------------------
    /*
    int n;
    cout << "Enter the Length : ";
    cin >> n;
    int arr[n];
    cout << "Enter element : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array element is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    */

    //-------------------------------two dimensional array-------------------
    int row, col;
    cout << "Enter row numbers : ";
    cin >> row;
    cout << "Enter col numbers : ";
    cin >> col;

    int mat[row][col];

    cout << "Enter the element : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Your Matrix is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}