#include <iostream>
using namespace std;

int main () {
	//Kamus
	int sum, i;
	int Tabint[10];
	
	//Algoritma
	//mengisi data nilai dari input user 
	cout << "Isilah 10 data nilai dalam range 0-100:" << endl;
	
	for (i=0; i<10; i++) {
		cin >> Tabint [i];
	}
	// menumlahkan nilai dan menghitung rata rata
	cout << "Data Input:" << endl;
	sum=0;
	for (i=0; i<10; i++) {
		cout << Tabint [i] << endl;
		sum = sum+Tabint[i];	
	}
	cout << "Rata-rata: ";
	cout << (float)sum/10.0 <<endl;
	return 0;
}

