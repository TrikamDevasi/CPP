#include<iostream>
using namespace std;

class ParentA {
public:
    ParentA() {
        cout << "Constructor of ParentA" << endl;
    }
    ~ParentA() {
        cout << "Destructor of ParentA" << endl;
    }
};

class ChildA : virtual public ParentA {
public:
    ChildA() {
        cout << "Constructor of ChildA" << endl;
    }
    ~ChildA() {
        cout << "Destructor of ChildA" << endl;
    }
};

class ChildB : virtual public ParentA {
public:
    ChildB() {
        cout << "Constructor of ChildB" << endl;
    }
    ~ChildB() {
        cout << "Destructor of ChildB" << endl;
    }
};

class ChildC : public ChildA, public ChildB {
public:
    ChildC() {
        cout << "Constructor of ChildC" << endl;
    }
    ~ChildC() {
        cout << "Destructor of ChildC" << endl;
    }
};

int main() {
    ChildC c1;
    return 0;
}
