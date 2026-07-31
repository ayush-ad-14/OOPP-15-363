#include <iostream>
using namespace std;

// Call by Value
void swapValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside Call by Value: ";
    cout << "a = " << a << " b = " << b << endl;
}

// Call by Reference
void swapReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside Call by Reference: ";
    cout << "a = " << a << " b = " << b << endl;
}

// Call by Address
void swapAddress(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    cout << "Inside Call by Address: ";
    cout << "*a = " << *a << " *b = " << *b << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Original Values: ";
    cout << "x = " << x << " y = " << y << endl;

    // Call by Value
    swapValue(x, y);
    cout << "After Call by Value: ";
    cout << "x = " << x << " y = " << y << endl;

    // Call by Reference
    swapReference(x, y);
    cout << "After Call by Reference: ";
    cout << "x = " << x << " y = " << y << endl;

    // Call by Address
    swapAddress(&x, &y);
    cout << "After Call by Address: ";
    cout << "x = " << x << " y = " << y << endl;

    // xdgx
    return 0;
}