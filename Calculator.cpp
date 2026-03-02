#include<iostream>
using namespace std;

int main()
{
    cout<<"Choose from a given option below:"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Enter your choice (1-4): ";
    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1:
        int a, b;
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout<<"Result: "<<a+b<<endl;
        break;
    case 2:
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout<<"Result: "<<a-b<<endl;
        break;
    case 3:
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        cout<<"Result: "<<a*b<<endl;
        break;
    case 4:
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        if (b != 0) {
            cout<<"Result: "<<a/b<<endl;
        } else {
            cout<<"Error: Division by zero is not allowed."<<endl;
        }
        break;
    
    default:
        cout<<"Invalid choice!"<<endl;
        break;
    }
    return 0;
}