#pragma once
#include <cmath>

class Rectangle2D {
private:
    double x, y;      // Center of the rectangle
    double width, height;

public:
    // Constructors
    Rectangle2D();
    Rectangle2D(double x, double y, double width, double height);

    // Accessors
    double getX() const;
    double getY() const;
    double getWidth() const;
    double getHeight() const;

    // Mutators
    void setX(double x);
    void setY(double y);
    void setWidth(double width);
    void setHeight(double height);

    // Methods
    double getArea() const;
    double getPerimeter() const;
    bool contains(double px, double py) const;
    bool contains(const Rectangle2D& r) const;
    bool overlaps(const Rectangle2D& r) const;
};
