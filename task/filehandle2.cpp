#include <iostream>
#include <string>
using namespace std;

struct Student {
    int ID{0};
    string name{};
    int roll_num{0};
};

int main() {
    Student students[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter your ID: ";
        cin >> students[i].ID;

        cout << "Enter your first name only: ";
        cin >> students[i].name;

        cout << "Enter your roll number: ";
        cin >> students[i].roll_num;
    }

    for (const auto& student : students) {
        cout << "Given student data are: "
             << student.ID << " "
             << student.name << " "
             << student.roll_num << endl;
    }

    return 0;
}

