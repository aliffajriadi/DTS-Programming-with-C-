#pragma once

class Rectangle {
private:
    double width, height;

public:
    Rectangle();
    Rectangle(double w, double h);

    double getWidth() const;
    double getHeight() const;

    void setWidth(double w);
    void setHeight(double h);

    double getArea() const;
    double getPerimeter() const;
};
