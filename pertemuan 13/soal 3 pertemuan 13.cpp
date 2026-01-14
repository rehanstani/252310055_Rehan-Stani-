#include <iostream>
using namespace std;

struct Pegawai {
    string nama;
    string jabatan;
    int gaji;
};

int main() {
    Pegawai p;
    int umr;

    cout << "Masukkan UMR daerah: ";
    cin >> umr;
    cin.ignore();

    cout << "Masukkan nama pegawai   : ";
    getline(cin, p.nama);

    cout << "Masukkan jabatan        : ";
    getline(cin, p.jabatan);

    cout << "Masukkan gaji pegawai   : ";
    cin >> p.gaji;

    cout << "\n=== Data Pegawai ===" << endl;
    cout << "Nama    : " << p.nama << endl;
    cout << "Jabatan : " << p.jabatan << endl;
    cout << "Gaji    : " << p.gaji << endl;

    if (p.gaji >= umr) {
        cout << "Gaji pegawai diatas UMR" << endl;
    } else {
        cout << "Gaji pegawai dibawah UMR" << endl;
    }

    return 0;
}
