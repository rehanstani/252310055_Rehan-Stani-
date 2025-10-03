#include <iostream>
#include <iomanip> // untuk setprecision

int main() {
    const double PI = 3.141592653589793;
    double r, t;

    // Input
    std::cout << "=== Menghitung Luas Lingkaran dan Volume Tabung ===\n";
    std::cout << "Masukkan jari-jari lingkaran (r): ";
    std::cin >> r;
    std::cout << "Masukkan tinggi tabung (t): ";
    std::cin >> t;

    // Perhitungan langkah demi langkah
    std::cout << "\nLangkah-langkah perhitungan:\n";

    // Luas Lingkaran
    std::cout << "1. Rumus luas lingkaran: L = p * r^2\n";
    std::cout << "   Substitusi: L = " << PI << " * " << r << "^2\n";
    double luas = PI * r * r;
    std::cout << "   Hitung: L = " << PI << " * " << (r * r) << "\n";
    std::cout << "   Hasil: L = " << luas << "\n\n";

    // Volume Tabung
    std::cout << "2. Rumus volume tabung: V = L * t\n";
    std::cout << "   Substitusi: V = " << luas << " * " << t << "\n";
    double volume = luas * t;
    std::cout << "   Hitung: V = " << (luas * t) << "\n";
    std::cout << "   Hasil: V = " << volume << "\n";

    // Output ringkas
    std::cout << "\n=== Hasil Akhir ===\n";
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Luas Lingkaran = " << luas << "\n";
    std::cout << "Volume Tabung  = " << volume << "\n";

    return 0;
}
