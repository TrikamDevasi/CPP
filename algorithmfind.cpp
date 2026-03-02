#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
#include<list>
#include<numeric>

using namespace std;

int main(){
    
    // vector<int> v1 = {2,45,6,7,8,2,56};
    
    // auto itr = find(v1.begin(), v1.end(), 8);
    
    // if(itr != v1.end()){
    //     cout << "Element is:  " << *itr << endl;
    // }
    // else{
    //     cout << "Element doesn't exist" << endl;
    // }
    // deque<char> d1 = {'a','b','c','d','e','f','g','h','i','j'};

    
    //  for(char value : d1) {
    //     cout<<value<<endl;
    // }   

    // list <int> l1={10,40,45};

    // auto itr = accumulate(l1.begin(), l1.end(), 0);

    // cout << "Sum of the list is: " << itr << endl;

    // list <int> l1={56,-90,45,67,78,21};\

    // sort(l1.begin(), l1.end());

    // bool result = binary_search(l1.begin(), l1.end(), 67);

    // if(result){
    //     cout << "Element is present" << endl;
    // }
    // else{
    //     cout << "Element is not present" << endl;
    // }

    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2(5);

    copy(v1.begin(), v1.end(), v2.begin());

    for(int value : v2){
        cout << value << endl;
    }
    return 0;
}