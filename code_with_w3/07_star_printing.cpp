#include <iostream>
using namespace std;

void print_square_shape(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print_triangle_shape1(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j <= i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void print_triangle_shape2(int row, int col)
{
    for (int i = row; i > 0; i--)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j < i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void print_triangle_shape3(int row, int col)
{
    for (int i = row; i > 0; i--)
    {
        for (int j = 0; j < row; j++)
        {
            if (j < i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cout << "Enter row : ";
    cin >> row;
    cout << "Enter col : ";
    cin >> col;

    print_square_shape(row, col);
    print_triangle_shape1(row, col);
    print_triangle_shape2(row, col);
    cout << endl;
    print_triangle_shape3(row, col);
    return 0;
}