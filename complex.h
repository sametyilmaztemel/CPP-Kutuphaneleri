#ifndef KOMPLEKSSAYI_H
#define KOMPLEKSSAYI_H

class KompleksSayi {
private:
    double gercek;
    double sanal;

public:
    KompleksSayi(double gercekBolum, double sanalBolum);

    double GercekBolumu() const;
    double SanalBolumu() const;
    double Buyukluk() const;
    void Yazdir() const;

    KompleksSayi operator+(const KompleksSayi& diger) const;
    KompleksSayi operator-(const KompleksSayi& diger) const;
    KompleksSayi operator*(const KompleksSayi& diger) const;

    // Yeni eklenen fonksiyonlar
    KompleksSayi operator/(const KompleksSayi& diger) const;
    KompleksSayi BirkatIleCarp(double kat) const;
    KompleksSayi BirleşikIleCarp() const;
    KompleksSayi ÜstHesapla(int n) const;
};

#endif
