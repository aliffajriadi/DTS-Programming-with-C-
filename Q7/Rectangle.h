#pragma once

/**
 * Design a class named Rectangle to represent a rectangle. The class contains:
 *
 * 1. Two double data fields named width and height that specify the width and
 *    height of the rectangle.
 * 2. A no-arg constructor that creates a rectangle with width 1 and height 1.
 * 3. A constructor that creates a rectangle with the specified width and
 *    height.
 * 4. The accessor and mutator functions for all the data fields.
 * 5. A function named getArea()that returns the area of this rectangle.
 * 6. A function named getPerimeter() that returns the perimeter.
 */

class Rectangle {
   public:
    // No-arg constructor
    Rectangle();

    // Constructor with parameters
    Rectangle(double w, double h);

    // Accessors (getters)
    double getWidth() const;
    double getHeight() const;

    // Mutators (setters)
    void setWidth(double w);
    void setHeight(double h);

    // Member functions
    double getArea() const;
    double getPerimeter() const;

   private:
    double width, height;
};
