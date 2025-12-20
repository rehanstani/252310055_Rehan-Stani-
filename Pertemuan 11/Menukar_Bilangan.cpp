#include <iostream>
using namespace std;

// fungsi untuk menukar dua bilangan
void tukar(int *a, int *b) {
    int temp;

    temp = *a;   // simpan nilai yang ditunjuk a
    *a = *b;     // isi a diganti nilai b
    *b = temp;   // isi b diganti nilai temp
}

int main() {
    int A;
    int B;
	
	cout << "Masukan Bilangan A = ";
	cin >> A;
	cout << "Masukan Bilangan B : ";
	cin >> B;
    cout << "\n\nSebelum ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    // panggil fungsi, kirim ALAMAT A dan B
    tukar(&A, &B);

    cout << "\nSetelah ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}

