#include<iostream>
#include<string>

using namespace std;

class Student{
    public:

    string name;
    string gender;
    int age;

    Student(string name1,string gender1,int age1){
        cout<<"constructer called"<<endl;    
        name=name1;
        gender=gender1;
        age=age1;
    }

    
    void display(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Gender: "<<this->gender<<endl;
        cout<<"Age: "<<this->age<<endl;
    }
};
int main()
{
    Student s1("trikam","male",20);
    s1.display();

    Student s2("trikam2","male",20);
    s2.display();
    
    return 0;
}