#ifndef FIGURE_H
#define FIGURE_H

#include <string>

// Klasa Koło
class Circle {
private:
    const std::string name;
    const double radius;
public:
    Circle(const std::string &n, double r);
    double getPerimeter() const;
    double getArea() const;
    std::string getName() const;
};

// Klasa Kwadrat
class Square {
private:
    const std::string name;
    const double side;
public:
    Square(const std::string &n, double s);
    double getPerimeter() const;
    double getArea() const;
    std::string getName() const;
};

// Klasa Prostokąt
class Rectangle {
private:
    const std::string name;
    const double width;
    const double height;
public:
    Rectangle(const std::string &n, double w, double h);
    double getPerimeter() const;
    double getArea() const;
    std::string getName() const;
};

#endif // FIGURE_H