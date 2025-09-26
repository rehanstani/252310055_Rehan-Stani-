#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Penjumlahan
    cout << " Nomor 1 - penjumlahan \nMasukkan 2 angka " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << a << " + " << b << " = " << (a + b) << endl << endl;

    // Pengurangan
    cout << " Nomor 2 - pengurangan \nMasukkan 2 angka " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << a << " - " << b << " = " << (a - b) << endl << endl;

    // Perkalian
    cout << " Nomor 3 - perkalian \nMasukkan 2 angka " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << a << " * " << b << " = " << (a * b) << endl << endl;

    return 0;
}
