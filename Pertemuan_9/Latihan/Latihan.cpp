#include <iostream>
using namespace std;

int main(){
	int i,j;
	int r[3][3];
	int total = 0;
	
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout << "Masukan Nilai Matriks [" << i << "]" << "[" << j << "] : ";
			cin >> r[i][j];
		}
	}
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(0 > r[i][j]){
				
			}
			total = total + r[i][j];
		}
		cout << endl;
	}
	cout << "Total = " << total;
}
