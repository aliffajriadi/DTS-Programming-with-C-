#pragma once

#include <cmath>

/**
 * Define the Rectangle2D class that contains:
 *
 * 1. Two double data fields named x and y that specify the center of the
 *    rectangle with constant get functions and set functions.
 * 2. The double data fields width and height with constant get functions and
 *    set functions.
 * 3. A no-arg constructor that creates a default rectangle with (0, 0) for
 *    (x,y) and 1 for both width and height.
 * 4. A constructor that creates a rectangle with the specified x, y, width, and
 *    height.
 * 5. A constant function getArea() that returns the area of the rectangle.
 * 6. A constant function getPerimeter() that returns the perimeter.
 * 7. A constant function contains(double x, double y) that returns true if the
 *    specified point (x, y) is inside this rectangle.
 * 8. A constant function contains(const Rectangle2D &r) that returns true if
 *    the specified rectangle is inside this rectangle.
 * 9. A constant function overlaps(const Rectangle2D &r) that returns true if
 *    the specified rectangle overlaps with this rectangle.
 */

class Rectangle2D {
   private:
    double x, y;  // Center of the rectangle
    double width, height;

   public:
    // No-arg constructor
    Rectangle2D();

    // Constructor with parameters
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

    // Member functions
    double getArea() const;
    double getPerimeter() const;

    bool contains(double x, double y) const;
    bool contains(const Rectangle2D &r) const;
    bool overlaps(const Rectangle2D &r) const;
};
