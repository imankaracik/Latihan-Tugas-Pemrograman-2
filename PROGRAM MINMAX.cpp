#include <iostream>
using namespace std;

//prototype
void input();
void pilihanA();
void pilihanB();

//variable global
	char pilihan;
	int  n, jumlah, min, max;

//program utama
int main(){
	
	selection:
	system("cls");
	
	cout << "\nPROGRAM MENCARI NILAI MINIMUM & MAKSIMUM";
   	cout << "\n========================================";	
   	cout << "\nA.Cari Nilai Minimum ";
   	cout << "\nB.Cari Nilai Maksimum ";	
   	cout << "\n========================================";
   	cout << "\n";
   	cout << "\nTentukan Pilhian: "; 
	cin  >> pilihan;
	
	if (pilihan == 'a' || pilihan == 'A'){
		pilihanA();
	}else if (pilihan == 'b' || pilihan == 'B'){
		pilihanB();
	}else{
		goto selection;
	}
}

		
      //pilihan A
    void pilihanA (){
    	
	int n, jumlah, max, min;
	
		cout << "\n----------------------------------------";
		cout << "\nMencari Nilai Minimum";	
	    cout << "\n----------------------------------------";
	    cout << "\n";
		cout << "Masukkan Banyaknya Angka : ";
		cin >> jumlah;
		
		for (int i=1; i<=jumlah; i++){
			
		cout << "Masukan Angka : ";
		cin >> n; 

       if ( i == 1 ) {
		   jumlah;
             min = n;
             max = n;
            }
            else if ( min > n ) {
               min = n;
            }
        }
       cout << endl;
       cout << "\nNilai Minimum : " << min;
	   cout << "\njumlah : " << min;
	   cout << "\n";
	   cout << "----------------------------------------";
	   cout << "\n";
	}
    		

	//pilihan B
	void pilihanB(){
		
	int n, jumlah, max, min;

		cout << "\n----------------------------------------";
		cout << "\nMencari Nilai Maksimum";	
	    cout << "\n----------------------------------------";
	    cout << "\n";
		cout << "\nMasukkan Banyaknya Angka : ";
		cin >> jumlah;
		
		for (int i=1; i<=jumlah; i++){
			
		cout << "Masukan Angka : ";
		cin >> n; 

       if ( i == 1 ) {
		   jumlah;
             min = n;
             max = n;
            }
            else if ( max < n ) {
               max = n;
            }
        }
       cout << endl;
       cout << "\nNilai Maksimum : " << max;
	   cout << "\njumlah : " << jumlah;
	   cout << "\n";
	   cout << "----------------------------------------";
	   cout << "\n";
	}
    		

