#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string onelinestatement;
ifstream file;
file.open("example.txt");

if(file.is_open()){
    cout<<"File is open"<<endl;
    while(getline(file, onelinestatement)){
        cout<<onelinestatement<<endl;
    }
    
    file.close();
}
    return 0;
}


