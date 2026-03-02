#include<iostream>
#include<string>
using namespace std;


class Car
{
    public:
        string comp_name;
        int mileage;
        string engine;

        void display(){
            cout<<"Company Name: "<<this->comp_name<<endl;
            cout<<"Mileage: "<<this->mileage<<endl;
            cout<<"Engine: "<<this->engine<<endl;
        }
};
int main()
{
    std::cout<<"Hello World!"<<std::endl;
     Car c1;
     c1.comp_name="Maruti Suzuki";
     c1.mileage=20;
     c1.engine="Petrol";
     c1.display();
    
    return 0;
}