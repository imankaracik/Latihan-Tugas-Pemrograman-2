#include <iostream>
using namespace std;

typedef struct {
	string hari;
	string bulan;
	string tahun;
} tanggal;

int main () {
	tanggal A;
	cout << "Masukan Nama Hari: " <<endl;
	cin >> A.hari;
	cout << "Masukan Nama Bulan: " <<endl;
	cin >> A.bulan;
	cout << "Masukan Nama Tahun: " <<endl;
	cin >> A.tahun;
	cout << "=======================================" << endl;
	cout << A.hari << endl;
	cout << A.bulan << endl;
	cout << A.tahun << endl;
	cout << "=======================================" << endl;
	return 0;
}
