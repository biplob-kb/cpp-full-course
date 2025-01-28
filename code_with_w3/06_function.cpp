#include <iostream>
using namespace std;

void add_num(int num1, int num2)
{
    cout << "Addition is : " << num1 + num2 << endl;
}

// ----------default parameters---------------
void sub_num(int num1 = 20, int num2 = 10)
{
    cout << "Subtraction is : " << num1 - num2 << endl;
}

//---------- return value------------------
int mul_num(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int a, b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;

    add_num(a, b);
    sub_num(a, b);
    cout << "Multiplication is : " << mul_num(a, b) << endl;
    return 0;
}