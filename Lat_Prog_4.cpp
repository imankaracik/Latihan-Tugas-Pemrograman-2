#include <iostream>
using namespace std;

int main () {

	// variable
	int a, b, temp;

	// proses membaca
	cout << "masukkan nila A : ";
	cin >> a;

	cout << "masukkan nila B : ";
	cin >> b;
	
	//proses tukar
	temp=b;
	b=a;
	a=temp;

	//proses tampil;
	cout << "-----------------------" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b << endl;

	return 0;
}

