#include <iostream>
using namespace std;

void tambah(int m, int n);

int main()
{
	int a,b;
	a = 5;
	b = 9;
	
	cout << "Nilai sebelum fungsi digunakan\n";
	cout << "a = " << a << " b = " << b << "\n";
	
	tambah(a, b);
	
	cout << "Nilai setelah fungsi digunakan\n";
	cout << "a = " << a << " b = " << b;
	return 0;
}

void tambah(int m, int n)
{
	m += 5;
	n += 7;
	
	cout << "n\Nilai di dalam fungsi tambah()\n";
	cout << "m = " << m << " n = " << n << "\n";
}
