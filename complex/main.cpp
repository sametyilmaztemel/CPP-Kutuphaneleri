#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    // Complex sınıfını kullanarak iki complex sayı oluşturun
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    // Toplama işlemi
    Complex toplam = c1 + c2;
    cout << "Toplam: " << toplam << endl;

    // Çıkarma işlemi
    Complex fark = c1 - c2;
    cout << "Fark: " << fark << endl;

    // Çarpma işlemi
    Complex carpim = c1 * c2;
    cout << "Çarpım: " << carpim << endl;

    return 0;
}
