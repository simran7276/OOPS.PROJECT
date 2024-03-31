#include <iostream>
#include <cmath>
using namespace std;

class Figure {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Circle : public Figure {
private:
    double radius_c;
public:
    Circle(double r) : radius_c(r) {}
    double area() override {
        return M_PI * radius_c * radius_c;
    }
    double perimeter() override {
        return 2 * M_PI * radius_c;
    }
};

class Rect : public Figure {
private:
    double length_r;
    double width_r;
public:
    Rect(double l, double w) : length_r(l), width_r(w) {}
    double area() override {
        return length_r * width_r;
    }
    double perimeter() override {
        return 2 * (length_r + width_r);
    }
};

class Triang : public Figure {
private:
    double side1_t;
    double side2_t;
    double side3_t;
public:
    Triang(double s1, double s2, double s3) : side1_t(s1), side2_t(s2), side3_t(s3) {}
    double area() override {
        double s = (side1_t + side2_t + side3_t) / 2;
        return sqrt(s * (s - side1_t) * (s - side2_t) * (s - side3_t));
    }
    double perimeter() override {
        return side1_t + side2_t + side3_t;
    }
};

void printAreaAndPerimeter(Figure& fig) {
    cout << "Area: " << fig.area() << endl;
    cout << "Perimeter: " << fig.perimeter() << endl;
}

int main() {
    double radius_c, length_r, width_r, side1_t, side2_t, side3_t;

    cout << "Enter radius of the circle: ";
    cin >> radius_c;
    Circle circle(radius_c);

    cout << "Enter length and width of the rectangle: ";
    cin >> length_r >> width_r;
    Rect rectangle(length_r, width_r);

    cout << "Enter three sides of the triangle: ";
    cin >> side1_t >> side2_t >> side3_t;
    Triang triangle(side1_t, side2_t, side3_t);

    cout << "\nCircle:" << endl;
    printAreaAndPerimeter(circle);

    cout << "\nRectangle:" << endl;
    printAreaAndPerimeter(rectangle);

    cout << "\nTriangle:" << endl;
    printAreaAndPerimeter(triangle);

    return 0;
}