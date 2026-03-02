#include<iostream>
#include<string>
using namespace std;

class countObjects{
    public:
        static int count;
        countObjects(){
            count++;
        }
        ~countObjects(){
            count--;
        }
};
int countObjects::count=0;

int main(){
    countObjects obj1, obj2, obj3, obj4, obj5;
    cout<<"Total number of objects: "<<countObjects::count<<endl;
    return 0;
}