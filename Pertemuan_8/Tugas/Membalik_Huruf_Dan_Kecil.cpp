#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char kalimat[] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
	
	cout << kalimat << endl;
    strlwr(kalimat);   // jadi huruf kecil semua
    strrev(kalimat);   // dibalik
	
    cout << "\nHasil: " << kalimat;

    return 0;
}

