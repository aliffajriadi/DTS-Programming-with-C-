#pragma once
#include <cmath>

class Rectangle2D {
   private:
    double x, y;      // Center of the rectangle
    double width, height;

   public:
    // No-arg constructor
    Rectangle2D() {
        x = 0;
        y = 0;
        width = 1;
        height = 1;
    }

    // Constructor with parameters
    Rectangle2D(double x, double y, double width, double height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
    }

    // Accessors (getters)
    double getX() const { return x; }
    double getY() const { return y; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }

    // Mutators (setters)
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    void setWidth(double width) { this->width = width; }
    void setHeight(double height) { this->height = height; }

    // Member functions
    double getArea() const { return width * height; }
    double getPerimeter() const { return 2 * (width + height); }

    bool contains(double px, double py) const {
        double left = x - width / 2.0;
        double right = x + width / 2.0;
        double bottom = y - height / 2.0;
        double top = y + height / 2.0;
        return (px > left && px < right && py > bottom && py < top);
    }

    bool contains(const Rectangle2D& r) const {
        double left = x - width / 2.0;
        double right = x + width / 2.0;
        double bottom = y - height / 2.0;
        double top = y + height / 2.0;

        double rLeft = r.x - r.width / 2.0;
        double rRight = r.x + r.width / 2.0;
        double rBottom = r.y - r.height / 2.0;
        double rTop = r.y + r.height / 2.0;

        return (rLeft >= left && rRight <= right && rBottom >= bottom && rTop <= top);
    }

    bool overlaps(const Rectangle2D& r) const {
        double left = x - width / 2.0;
        double right = x + width / 2.0;
        double bottom = y - height / 2.0;
        double top = y + height / 2.0;

        double rLeft = r.x - r.width / 2.0;
        double rRight = r.x + r.width / 2.0;
        double rBottom = r.y - r.height / 2.0;
        double rTop = r.y + r.height / 2.0;

        // Tidak overlap jika satu benar-benar di luar yang lain
        if (right <= rLeft || left >= rRight || top <= rBottom || bottom >= rTop)
            return false;
        return true;
    }
};
