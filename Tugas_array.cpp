#include <iostream>
using namespace std;

int main () {

//variabel
char huruf[10];
int  i, hasil=0;

// Meng-Input Char
	cout << "=====================================" << endl;
	cout << "Isilah 10 data huruf dalam range a-z:" << endl;
	cout << "=====================================" << endl;
	cout << endl;
	
	for (i=0; i<10; i++) {
	    cout << "Masukkan Karakter Ke-["<<i+1<<"] = "; 
		cin >> huruf [i];
		
		if (huruf [i] == 'a' || huruf [i] == 'A'){
		hasil++;
	}
}
	// Menampilkan Banyaknya char yang diinput
	cout << "------------------------------------" << endl;
	cout << endl;
	cout << "Karakter Yang Di-inputkan Adalah:" << endl;
	cout << endl;
	
	for (int i=0; i< 10; i++) {
	
	cout << "Ke-["<<i+1<<"] : " << huruf [i] << endl;
	}
	
	//Menampilkan Jumlah Huruf A
	cout << endl;
	cout << "=====================================" << endl;		
	cout << "Jumlah Huruf A = ";
	cout << hasil <<endl;
	cout << "=====================================" << endl;
	return 0;
}
