#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(10);
    
    cout << "Enter 10 elements:\n";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            v.erase(v.begin() + i);
            cout << "Removed element at index " << i << endl;
        }
    }

    cout << "\nRemaining elements:\n";
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\nTotal size: " << v.size() << endl;

    return 0;
}
