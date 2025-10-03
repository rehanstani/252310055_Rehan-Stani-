#include <iostream>
#include <iomanip> // untuk setprecision

int main() {
    const double PI = 3.141592653589793;
    double r, t;

    std::cout << "=== Menghitung Luas Lingkaran dan Volume Tabung ===\n";
    std::cout << "Masukkan jari-jari lingkaran (r): ";
    std::cin >> r;
    std::cout << "Masukkan tinggi tabung (t): ";
    std::cin >> t;

    // Hitung luas lingkaran dan volume tabung
    double luas = PI * r * r;
    double volume = luas * t;

    // Tampilkan hasil
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "\n=== Hasil Perhitungan ===\n";
    std::cout << "Luas Lingkaran = " << luas << "\n";
    std::cout << "Volume Tabung  = " << volume << "\n";

    return 0;
}
