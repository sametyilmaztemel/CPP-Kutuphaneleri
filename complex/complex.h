// Complex.h - Complex sınıfını tanımlayan kütüphane

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real; // Gerçek kısım
    double imag; // Sanal kısım

public:
    // Kurucu fonksiyon
    Complex(double r, double i) : real(r), imag(i) {}

    // Toplama işlemi
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Çıkarma işlemi
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Çarpma işlemi
    Complex operator*(const Complex& other) const {
        return Complex((real * other.real) - (imag * other.imag), (real * other.imag) + (imag * other.real));
    }

    // Complex sayıyı yazdıran fonksiyon
    friend std::ostream& operator<<(std::ostream& os, const Complex& number) {
        os << number.real << " + " << number.imag << "i";
        return os;
    }
};

#endif

