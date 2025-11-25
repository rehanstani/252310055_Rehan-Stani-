#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char kalimat1[50] = "Teknik";      // kasih ruang lebih biar bisa digabung
    char kalimat2[50]   = "Informatika";
    cout << kalimat1 << endl;
    cout << kalimat2 << endl;

    strcat(kalimat1, kalimat2);        // gabungkan

    cout << "Hasil: " << kalimat1;

    return 0;
}

