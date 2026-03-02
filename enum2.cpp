#include <iostream>
using namespace std;
enum word{LOW, MEDIUM=5, HIGH};

int main(){

    enum word a1=LOW;
    enum word a2=MEDIUM;
    enum word a3=HIGH;
    cout<<"The value of a1 is "<<a1<<endl<<"The value of a2 is "<<a2<<endl<<"The value of a3 is "<<a3<<endl;

    switch(a3){
        case 0:
            cout<<"case 0 is executed"<<endl;
            break;
            case 1:
            cout<<"case 1 is executed"<<endl;
            break;
            default:
            cout<<"default case is executed"<<endl;

    }
    return 0;
}