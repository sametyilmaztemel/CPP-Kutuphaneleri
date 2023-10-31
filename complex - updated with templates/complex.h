#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std; // std isim alanını kullan

template <typename T>
class Complex {
private:
    T real; // Gerçek kısım
    T imag; // Sanal kısım

public:
    // Kurucu fonksiyon
    Complex(T r, T i) : real(r), imag(i) {}

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
    friend ostream& operator<<(ostream& os, const Complex& number) {
        os << number.real << " + " << number.imag << "i";
        return os;
    }
};

#endif
