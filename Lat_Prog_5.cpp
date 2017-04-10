#include <iostream>
using namespace std;

//prototype
void prosesbaca();
void prosesTukar();
void prosestampil();

//variable global
	int a, b, temp;

	//program utama
	int main () {
		prosesbaca();
	 	prosesTukar();
	 	prosestampil();
		return 0;
}

		//proses baca
		void prosesbaca() {
			cout << "Masukkan nila A : ";
			cin >> a;
			cout << "Masukkan nila B : ";
			cin >> b;
}

		//proses tukar
		void prosesTukar() {
			temp = b;
			b=a;
			a=temp;
}

		//proses tampil 
		void prosestampil() {
			cout << "==================" << endl;
			cout << "Nilai A Sekarang : " << a << endl;
			cout << "Nilai B Sekarang : " << b;
}
