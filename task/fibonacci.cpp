#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    fstream file;
    file.open("fileHandling.cpp", ios::out | ios::app);
    file<<"Enter a number: ";
    cin>>n;
    
    return 0;
}