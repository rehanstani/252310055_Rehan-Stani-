#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil = hasil * i;
    }
    return hasil;
}

int main() {
    int n;

    cout << "Masukkan angka: ";
    cin >> n;

    if (n < 0) {
        cout << "Faktorial tidak berlaku untuk angka negatif!\n";
        return 0;
    }

    cout << "Faktorial dari " << n << " adalah: " << faktorial(n) << endl;

    return 0;
}

