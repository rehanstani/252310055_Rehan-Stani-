#include <iostream>
#include <iomanip> // for setprecision

int main() {
    const double PI = 3.141592653589793;
    double radius, height;

    // Input
    std::cout << "Masukkan jari-jari (radius) lingkaran (mis. 2.5): ";
    std::cin >> radius;
    if (radius < 0) {
        std::cerr << "Radius tidak boleh negatif.\n";
        return 1;
    }

    std::cout << "Masukkan tinggi tabung (mis. 5.0): ";
    std::cin >> height;
    if (height < 0) {
        std::cerr << "Tinggi tidak boleh negatif.\n";
        return 1;
    }
    
    // Perhitungan
    double luas_lingkaran = PI * radius * radius;      // A = p r^2
    double volume_tabung   = luas_lingkaran * height;  // V = A * t

    // Output dengan 4 angka di belakang koma
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Luas lingkaran = " << luas_lingkaran << "\n";
    std::cout << "Volume tabung  = " << volume_tabung << "\n";

    return 0;
}
