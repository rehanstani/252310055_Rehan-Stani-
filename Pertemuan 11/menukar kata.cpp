#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat, hasil = "";

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Membalikkan kalimat
    for (int i = kalimat.length() - 1; i >= 0; i--) {
        hasil += kalimat[i];
    }

    cout << "Kalimat setelah dibalik: " << hasil << endl;

    return 0;
}
