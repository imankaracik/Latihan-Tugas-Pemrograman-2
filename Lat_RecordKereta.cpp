#include <iostream>
using namespace std;

typedef struct {
	string hari;
	string bulan;
	string tahun;
} tanggal;

typedef struct {
	int jam;
	int menit;
	int detik;
} jam;

typedef struct {
	int noKA;
	string kotaAsalKA;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotaTujuanKA;
	jam jamTiba;
	tanggal tanggalTiba;
} jadwalKA;


int main(){
	jadwalKA jadwalKeretaApi;
	
	jadwalKeretaApi.noKA = 3;
	jadwalKeretaApi.kotaAsalKA = "Surabaya";
	jadwalKeretaApi.jamBerangkat.jam = 12;
	jadwalKeretaApi.jamBerangkat.menit = 30;
	jadwalKeretaApi.jamBerangkat.detik = 40;
	jadwalKeretaApi.tanggalBerangkat.hari = "Minggu";
	jadwalKeretaApi.tanggalBerangkat.bulan = "April";
	jadwalKeretaApi.tanggalBerangkat.tahun = "2017";
	jadwalKeretaApi.kotaTujuanKA = "Bandung";
	jadwalKeretaApi.jamTiba.jam = 10;
	jadwalKeretaApi.jamTiba.menit = 20;
	jadwalKeretaApi.jamTiba.detik = 15;
	jadwalKeretaApi.tanggalTiba.hari = "Senin";
	jadwalKeretaApi.tanggalTiba.bulan = "April";
	jadwalKeretaApi.tanggalTiba.tahun = "2017";
	
	
	
	
	
	
	
	
	cout << "No Kereta              : " << jadwalKeretaApi.noKA << endl;
	cout << "Kota Asal              : " << jadwalKeretaApi.kotaAsalKA << endl;
	cout << "Jam Pemberangkatan     : " << jadwalKeretaApi.jamBerangkat.jam << " : " << jadwalKeretaApi.jamBerangkat.menit << " : " << jadwalKeretaApi.jamBerangkat.detik <<  endl;
	cout << "Tanggal Pemberangkatan : " << jadwalKeretaApi.tanggalBerangkat.hari << " - " << jadwalKeretaApi.tanggalBerangkat.bulan << " - " << jadwalKeretaApi.tanggalBerangkat.tahun <<  endl;
	cout << "Kota Tujuan            : " << jadwalKeretaApi.kotaTujuanKA << endl;
	cout << "Jam Tiba               : " << jadwalKeretaApi.jamTiba.jam << " : " << jadwalKeretaApi.jamTiba.menit << " : " << jadwalKeretaApi.jamTiba.detik <<  endl;
	cout << "Tanggal Tiba           : " << jadwalKeretaApi.tanggalTiba.hari << " - " << jadwalKeretaApi.tanggalTiba.bulan << " - " << jadwalKeretaApi.tanggalTiba.tahun <<  endl;
	
	
}
	
