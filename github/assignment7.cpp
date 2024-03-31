#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(const Complex& c1, const Complex& c2) {
    double real_sum = c1.real + c2.real;
    double imag_sum = c1.imag + c2.imag;
    return Complex(real_sum, imag_sum);
}

int main() {
    const int size = 5; // Number of Complex objects in the array
    Complex complexes[size] = {Complex(2.5, 3.7), Complex(1.2, 4.3), Complex(3.0, 2.0), Complex(0.5, 1.5), Complex(4.2, 0.8)};
    
    cout << "Complex numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Complex " << i + 1 << ": ";
        complexes[i].display();
    }
    
    cout << "Sum of complex numbers:" << endl;
    Complex sum(0, 0);
    for (int i = 0; i < size; ++i) {
        sum = sum + complexes[i];
    }
    
    cout << "Sum: ";
    sum.display();

    return 0;
}