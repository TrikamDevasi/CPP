#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int* ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of *ptr: " << *ptr << endl;
    int *ptr2;
    cout << "Value of uninitialized ptr2: " << ptr2 << endl;
    return 0;
}    