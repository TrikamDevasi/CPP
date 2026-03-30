#include<iostream>
using namespace std;

class Car
{
    public:
    virtual void engine()
    {
        cout<<"Car is running"<<endl;
    }

    virtual ~Car(){
        cout<<"Car is destroyed"<<endl;
    }
};

class Tata{
    public:
    void engine()
    {
        cout<<"Tata is running"<<endl;
    }
    ~Tata(){
        cout<<"Tata is destroyed"<<endl;
    }
};
int main()
{

}