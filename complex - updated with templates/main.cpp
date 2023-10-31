#include "Complex.h"

int main() {
    // Complex sınıfını kullanarak iki complex sayı oluşturun
    Complex<double> c1(3.0, 4.0);
    Complex<double> c2(1.0, 2.0);

    // Toplama işlemi
    Complex<double> toplam = c1 + c2;
    cout << "Toplam: " << toplam << endl;

    // Çıkarma işlemi
    Complex<double> fark = c1 - c2;
    cout << "Fark: " << fark << endl;

    // Çarpma işlemi
    Complex<double> carpim = c1 * c2;
    cout << "Çarpım: " << carpim << endl;

    return 0;
}
