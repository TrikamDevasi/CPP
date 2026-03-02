#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int original=a;
    int reverse=0;
    while(a>0){
        int digit=a%10;
        reverse=reverse*10+digit;
        a=a/10;
    }
    if(original==reverse){
        cout<<"The number is pallindrome."<<endl;
    }
    else{
        cout<<"The number is not pallindrome."<<endl;
    }
    return 0;
}