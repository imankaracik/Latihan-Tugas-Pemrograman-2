#include <iostream>
using namespace std;

//PROGRAM NILAI IP MAHASISWA

bool isWithinRange(float ip, int max, int min);
void proses();

// Prototype
int  jmldata=0, jls=0, jtls=0;
float  rata=0, ip=0;
bool valid;

// program utama
int main()
{
        cout << "\nPROGRAM NILAI IP TEKNIK INFORMATIKA";
        cout << "\n===================================";
        cout << "\n";

	    cout << "\n";
	    
	    do{
	    cout << "Masukkan IP = ";
	    cin  >> ip;

		valid = isWithinRange (ip,4,0);
		
		if (valid){
			if (ip >= 2.75){
				jls++;
		}
		else {
				jtls++;
		}
			rata = rata+ip;
			jmldata++;
		} else {
			cout << "Tidak Ada Data" ;
			cout << "\n";
			}
		}
		while (ip != -999);
		proses();
		}
		bool isWithinRange(float ip, int max, int min){
		
		if (ip > max || ip <= 0){
			return false;
			
		}	
		return true;
		}
		void proses(){
		
		cout << "\n";
        cout << "\nBanyak Mahasiswa adalah "	<<jmldata;
	    cout << "\nBanyak Mahasiswa yang lulus adalah " <<jls;
	    cout << "\nBanyak Mahasiswa yang Tidak lulus adalah " <<jtls;
	    cout << "\nRata-ratanya adalah " << rata/jmldata;
}	
	
