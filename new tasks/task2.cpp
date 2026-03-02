#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int m[3],n[4],x;
    
    list <int> l1;
    list <int> l2;
    list <int> l3;
    
    cin>>m[0]>>m[1]>>m[2];
    cin>>n[0]>>n[1]>>n[2]>>n[3];
    
    for(int i=0;i<m[0];i++){
        cin>>x;
        l1.push_back(x);
    }
    for(int i=0;i<n[0];i++){
        cin>>x;
        l2.push_back(x);
    }
    
    for(int i:l1) l3.push_back(i);
    for(int i:l2) l3.push_back(i);
    
    l3.sort();
    l3.merge(l1);
    l3.merge(l2);
    l3.sort();
    for(int i:l3) cout<< i<<" ";
    
    return 0;
}