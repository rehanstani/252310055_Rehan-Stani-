#include <iostream>
using namespace std;

int main() {
	int a = 5;
	
	//increament dan decrement
	cout << "nilai awal a = " << a << endl;
	
	//pre-increment : a ditambah dulu, jadi 6, lalu ditampilkan 
	cout << "pre-increment -> ++a = " << ++a << endl;
	
	// a = 6
	
	//post-increment : nilai lama a=6 ditampilkan dulu, lalu a jadi 7
	cout << "post-increment -> a++ = " << a++ << ", sekarang a = " << a << endl;
	
	// a = 7
		
	//post-decrement : a dikurangi dulu, jadi 6, lalu  ditampilkan 
	cout << "pre-decrement -> --a = " << --a << endl;
	
	//a = 6
	
	//post-decrement : nilai lama a=6 ditampilkan dulu, lalu a jadi 5
	cout << "post-decrement -> a--- = " << a-- << ", sekarang a = " << a << endl;
	
	return 0;
}
