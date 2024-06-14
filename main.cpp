#include <iostream>
#include "figure.h"

using namespace std;

int main() {
    Circle circle("Circle", 5.0);
    Square square("Square", 4.0);
    Rectangle rectangle("Rectangle", 3.0, 6.0);

    cout << "Figure: " << circle.getName() << endl;
    cout << "Perimeter: " << circle.getPerimeter() << endl;
    cout << "Area: " << circle.getArea() << endl << endl;

    cout << "Figure: " << square.getName() << endl;
    cout << "Perimeter: " << square.getPerimeter() << endl;
    cout << "Area: " << square.getArea() << endl << endl;

    cout << "Figure: " << rectangle.getName() << endl;
    cout << "Perimeter: " << rectangle.getPerimeter() << endl;
    cout << "Area: " << rectangle.getArea() << endl << endl;

    return 0;
}
