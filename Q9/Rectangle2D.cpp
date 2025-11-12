#include "Rectangle2D.h"

Rectangle2D::Rectangle2D() {
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, double width, double height) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

double Rectangle2D::getX() const { return x; }
double Rectangle2D::getY() const { return y; }
double Rectangle2D::getWidth() const { return width; }
double Rectangle2D::getHeight() const { return height; }

void Rectangle2D::setX(double x) { this->x = x; }
void Rectangle2D::setY(double y) { this->y = y; }
void Rectangle2D::setWidth(double width) { this->width = width; }
void Rectangle2D::setHeight(double height) { this->height = height; }

double Rectangle2D::getArea() const {
    return width * height;
}

double Rectangle2D::getPerimeter() const {
    return 2 * (width + height);
}

bool Rectangle2D::contains(double px, double py) const {
    double left = x - width / 2.0;
    double right = x + width / 2.0;
    double bottom = y - height / 2.0;
    double top = y + height / 2.0;
    return (px > left && px < right && py > bottom && py < top);
}

bool Rectangle2D::contains(const Rectangle2D& r) const {
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

bool Rectangle2D::overlaps(const Rectangle2D& r) const {
    double left = x - width / 2.0;
    double right = x + width / 2.0;
    double bottom = y - height / 2.0;
    double top = y + height / 2.0;

    double rLeft = r.x - r.width / 2.0;
    double rRight = r.x + r.width / 2.0;
    double rBottom = r.y - r.height / 2.0;
    double rTop = r.y + r.height / 2.0;

    if (right <= rLeft || left >= rRight || top <= rBottom || bottom >= rTop)
        return false;
    return true;
}
