#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // set dimensions – silently ignore non‑positive values
    void setDimensions(double w, double h) {
        if (w > 0 && h > 0) {          // simple validation, no exception
            width = w;
            height = h;
        }
        // if w or h <= 0 we leave the current values unchanged
    }

    // calculate and return area
    double getArea() const {
        return width * height;
    }

    // calculate and return perimeter
    double getPerimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 3);          // 5 × 3 rectangle (valid)
    cout << "Area: " << rect.getArea() << endl;        // 15
    cout << "Perimeter: " << rect.getPerimeter() << endl; // 16
    return 0;
}
