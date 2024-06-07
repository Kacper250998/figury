#include "figure.h"
#include <cmath>
// Implementacja metod klasy Circle
Circle::Circle(const std::string &n, double r) : name(n), radius(r) {}

double Circle::getPerimeter() const {
    return 2 * M_PI * radius;
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

std::string Circle::getName() const {
    return name;
}

// Implementacja metod klasy Square
Square::Square(const std::string &n, double s) : name(n), side(s) {}

double Square::getPerimeter() const {
    return 4 * side;
}

double Square::getArea() const {
    return side * side;
}

std::string Square::getName() const {
    return name;
}

// Implementacja metod klasy Rectangle
Rectangle::Rectangle(const std::string &n, double w, double h) : name(n), width(w), height(h) {}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}

double Rectangle::getArea() const {
    return width * height;
}

std::string Rectangle::getName() const {
    return name;
}