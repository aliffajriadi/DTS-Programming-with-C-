#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

// Constructor with parameters
Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

// Accessors
double Rectangle::getWidth() const { return width; }
double Rectangle::getHeight() const { return height; }

// Mutators
void Rectangle::setWidth(double w) { width = w; }
void Rectangle::setHeight(double h) { height = h; }

// Member functions
double Rectangle::getArea() const { return width * height; }
double Rectangle::getPerimeter() const { return 2 * (width + height); }
