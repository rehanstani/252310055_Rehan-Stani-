#include <iostream>
using namespace std;

// Fungsi yang benar: menerima Jenis Awal, Tujuan, dan Nilai Suhu
float konversiSuhu(char jenisAwal, char tujuan, float suhu) {
    float hasil = suhu;

    // LANGKAH 1: Ubah semua suhu awal ke basis Celsius
    if (jenisAwal == 'F') {
        // Fahrenheit ke Celsius
        hasil = (suhu - 32.0) * 5.0 / 9.0;
    } else if (jenisAwal == 'K') {
        // Kelvin ke Celsius
        hasil = suhu - 273.15;
    } 
    // Jika jenisAwal adalah 'C', nilai 'hasil' tetap 'suhu'

    // LANGKAH 2: Ubah dari Celsius (nilai 'hasil' sekarang) ke Suhu Tujuan
    if (tujuan == 'F') {
        // Celsius ke Fahrenheit
        hasil = (hasil * 9.0 / 5.0) + 32.0; 
    } else if (tujuan == 'K') {
        // Celsius ke Kelvin
        hasil = hasil + 273.15;
    } 
    // Jika tujuan adalah 'C', tidak ada perubahan

    return hasil;
}

int main() {
    char jenis; 
    float suhu;
    char tujuan;

    cout << "Masukkan jenis suhu awal (C/F/K): ";
    cin >> jenis;

    cout << "Masukkan nilai suhu: ";
    cin >> suhu;

    cout << "Masukkan jenis suhu tujuan (C/F/K): ";
    cin >> tujuan;

    // Memanggil fungsi dengan 3 parameter yang lengkap
    float hasil = konversiSuhu(jenis, tujuan, suhu); 

    cout << "Hasil konversi: " << hasil << " derajat " << tujuan << endl;
    
    return 0;
}
