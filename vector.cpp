#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    // vector<int> v={10,20,30};

    // //iterating using for loop
    // for(int value : v) {
    //     cout<<value<<endl;
    // }   

    // //to delete last element from the vector
    // v.pop_back();
    // cout<<"After deleting last element: "<<endl;
    // for(int value : v) {
    //     cout<<value<<endl;
    // }

    // //size of the vector
    // cout<<"Size of the vector: "<<v.size()<<endl;

    // //specific index element deletion
    // v.erase(v.begin());
    // cout<<"After deleting first element: "<<endl;
    // for(int value : v) {
    //     cout<<value<<endl;
    // }
    // //specific index element deletion
    // v.erase(v.begin()+1);
    // cout<<"After deleting first element: "<<endl;
    // for(int value : v) {
    //     cout<<value<<endl;
    // }

    // //Adding element at the end of the vector
    // v.push_back(40);
    // cout<<"After adding element at the end: "<<endl;
    // for(int value : v) {
    //     cout<<value<<endl;
    // }

    // //removes the last element of the vector
    // v.pop_back();
    // cout<<"After removing last element: "<<endl;
    // for(int value : v) {
    //     cout<<value<<endl;
    // }

    // //Adds an element at the end of the vector
    // v.push_back(50);
    // cout<<"After adding element at the end: "<<endl;
    // for(int value : v) {
    //     cout<<value<<endl;
    // }

    // //return the last element of the vector
    // cout<<"Last element of the vector: "<<v.back()<<endl;

    list <int> l1={1,2,3,4,5,6,7,8,9,10};

    //iterating using for loop
    for(int value : l1) {
        cout<<value<<endl;
    }

    //to delete last element from the vector
    l1.pop_back();
    cout<<"After deleting last element: "<<endl;
    for(int value : l1) {
        cout<<value<<endl;
    }

    return 0;
}