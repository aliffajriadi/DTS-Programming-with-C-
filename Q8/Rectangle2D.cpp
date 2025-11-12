#include "Rectangle2D.h"
#include <iostream>
using namespace std;

// Constructors
Rectangle2D::Rectangle2D() {
    x = 0; y = 0; width = 1; height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, double width, double height) {
    this->x = x; this->y = y; this->width = width; this->height = height;
}

// Accessors
double Rectangle2D::getX() const { return x; }
double Rectangle2D::getY() const { return y; }
double Rectangle2D::getWidth() const { return width; }
double Rectangle2D::getHeight() const { return height; }

// Mutators
void Rectangle2D::setX(double x) { this->x = x; }
void Rectangle2D::setY(double y) { this->y = y; }
void Rectangle2D::setWidth(double width) { this->width = width; }
void Rectangle2D::setHeight(double height) { this->height = height; }

// Member functions
double Rectangle2D::getArea() const { return width * height; }
double Rectangle2D::getPerimeter() const { return 2 * (width + height); }

bool Rectangle2D::contains(double px, double py) const {
    return (fabs(px - x) <= width / 2 && fabs(py - y) <= height / 2);
}

bool Rectangle2D::contains(const Rectangle2D &r) const {
    return (fabs(r.getX() - x) + r.getWidth() / 2 <= width / 2 &&
            fabs(r.getY() - y) + r.getHeight() / 2 <= height / 2);
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const {
    return !(x + width / 2 < r.getX() - r.getWidth() / 2 ||
             x - width / 2 > r.getX() + r.getWidth() / 2 ||
             y + height / 2 < r.getY() - r.getHeight() / 2 ||
             y - height / 2 > r.getY() + r.getHeight() / 2);
}

// ================== MAIN FUNCTION ==================
int main() {
    double x1, y1, w1, h1;
    double x2, y2, w2, h2;

    cout << "Enter rectangle 1 (x y width height): ";
    cin >> x1 >> y1 >> w1 >> h1;
    Rectangle2D r1(x1, y1, w1, h1);

    cout << "Enter rectangle 2 (x y width height): ";
    cin >> x2 >> y2 >> w2 >> h2;
    Rectangle2D r2(x2, y2, w2, h2);

    cout << fixed;
    cout << "Rectangle 1 area: " << r1.getArea() << endl;
    cout << "Rectangle 1 perimeter: " << r1.getPerimeter() << endl;

    cout << boolalpha;
    cout << "r1 contains r2? " << r1.contains(r2) << endl;
    cout << "r1 overlaps r2? " << r1.overlaps(r2) << endl;

    double px, py;
    cout << "Enter a point (x y): ";
    cin >> px >> py;
    cout << "r1 contains point (" << px << "," << py << ")? " << r1.contains(px, py) << endl;

    return 0;
}
