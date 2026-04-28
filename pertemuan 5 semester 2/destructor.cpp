#include <iostream>
#include <iostream>

using namespace std;

class mahasiswa {
	public:
		mahasiswa (string nama, int umur) : nama_(nama), umur_(umur) {
			cout << "contructor mahasiswa" << endl;
		} 
		
		~mahasiswa() {
			cout << "==contoh destructor mahasiswa==" << endl;
		}
		
		void TampilkanBiodata() {
			cout << "Nama:" << nama_ << endl;
			cout << "Umur:" << umur_ << endl;
		}
		
	private:
		string nama_;
		int umur_;
		
};

int main () {
	{
		mahasiswa mhs("katarina", 20);
		mhs.TampilkanBiodata();
	}
	
	return 0;
}
