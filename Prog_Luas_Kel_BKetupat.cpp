#include <iostream>
using namespace std;

//prototype
void input();
float luas();
float keliling();
void hasil();

//variable
	int a, b, c;

	//program utama
	int main () 
{
		cout << "\nPROGRAM MENGHITUNG LUAS & KELILING BELAH KETUPAT";
    	cout << "\n================================================";
    	cout << "\n";	
    	cout << "\n";

		input();
		hasil();
		return 0;
}

		//input
		void input ()
		{
			cout << "Masukkan Nilai Diagonal 1 : ";
			cin >> a;
			cout << "Masukkan Nilai Diagonal 2 : ";
			cin >> b;
			cout << "Masukkan Nilai Panjang Sisi : ";
			cin >> c;			
		}

		//luas
		float luas()
		{
			return a*b/2;
		}
	
		//keliling belah ketupat
		float keliling ()
		{
			float hasil;
			hasil=4*c;
			return hasil;	
		}

		// hasil
		void hasil ()
		{	
    		cout << "\n";
			cout << "================================================";
			cout << "\nLuasnya Adalah : " << luas () << endl;
			cout << "Kelilingnya Adalah : " << keliling () << endl;
		}

