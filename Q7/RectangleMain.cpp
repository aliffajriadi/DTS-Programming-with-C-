#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle r1(4, 40);
    Rectangle r2(3.5, 35.9);

    cout << "Rectangle 1 area: " << r1.getArea()
         << ", perimeter: " << r1.getPerimeter() << endl;

    cout << "Rectangle 2 area: " << r2.getArea()
         << ", perimeter: " << r2.getPerimeter() << endl;

    return 0;
}
