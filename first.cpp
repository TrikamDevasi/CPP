#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace
int main()
{
   int a = 10;
    cout << "Value of a: " << a << endl;  // Print the value of a
    int b = 20;
    cout << "Value of b: " << b << endl;
    int sum = a + b;
    cout << "Sum of a and b: " << sum << endl;
    int your_name_length = 7; // Example length
    cout << "Length of your name: " << your_name_length << endl;
    for(int i = 0; i < your_name_length; i++) {
        cout << "Character " << i + 1 << ": " << char('A' + i) << endl; // Replace 'X' with actual character if needed
    }
    return 0;
}