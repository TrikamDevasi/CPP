#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    static int totalEmployees;

public:
    Employee(string empName) {
        name = empName;
        totalEmployees++;
    }

    static int getTotal() {
        return totalEmployees;
    }

    void showName() const {
        cout << "Name: " << name << endl;
    }
};

int Employee::totalEmployees = 0;
int Employee::totalEmployees = 0;
int main() {
    Employee e1("Alice");
    Employee e2("Bob");
    Employee e3("Charlie");
    Employee e4("Diana");
    cout << "Total employees: " << Employee::getTotal() << endl;
    return 0;
}
