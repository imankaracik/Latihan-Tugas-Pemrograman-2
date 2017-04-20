#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//prototype
typedef struct {
	int tanggal;
	string bulan;
	string tahun;
} tanggal;

typedef struct{
	string berangkat;
}berangkat;

typedef struct{
	string tiba;
}tiba;

typedef struct{
	string nama;
	string nohp;
	string alamat;
	string noKereta;
	string namaKereta;
	string NoTiket;
	string KotaAsalKA;
	berangkat jamBerangkat;
	tanggal tanggalBerangkat;
	tiba jamTiba;			
	string KotaTujuanKA;
	string biaya;
}JadwalKA;

int main(){
	
string jamber, ktasal, kttujuan, nk, notiket, biaya;
	
	JadwalKA KeretaApi;
	
	cout << "		==============================================================================================" << endl;
	cout << "		||                              PROGRAM PEMESANAN TIKET KERETA API                          ||" << endl;
	cout << "		==============================================================================================" << endl;
	cout << endl;
	
		//identitas
	cout << "ISI DATA DIBAWAH INI DENGAN LENGKAP" << endl;
	cout << endl;
	cout << "Nama          : ";
	cin >> KeretaApi.nama;
	cout << "Nomor HP      : ";
	cin >> KeretaApi.nohp;
	cout << "Alamat        : ";
	cin >> KeretaApi.alamat;
	cout << endl;
	
	//nomor tiket
	{
	srand(time(0)); 
	for(int x=0;x<6;x++);
}
	//kota asal
	cout << "----------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "PILIH KOTA ASAL" << endl;
	cout << endl;
	cout << "1.Bandung" << endl;
	cout << "2.Jakarta" << endl;
	cout << "3.Malang" << endl;
	cout << "Masukkan Pilihan Anda 1/2/3 : ";
	cin >> ktasal;
	cout << endl;
	
		if (ktasal == "1") {
		KeretaApi.KotaAsalKA = "Bandung";
			
	} else if (ktasal == "2") {
		KeretaApi.KotaAsalKA = "Jakarta";

	} else if (ktasal == "3") {
		KeretaApi.KotaAsalKA = "Malang";
		
	} else {
		cout << "Pilihan Tidak Ada";
	}	
	
	//kota tujuan
	cout << "----------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "PILIH KOTA TUJUAN" << endl;
	cout << endl;
	cout << "1.Surabaya" << endl;
	cout << "2.Cirebon" << endl;
	cout << "3.Yogyakarta" << endl;
	cout << "Masukkan Pilihan Anda : ";
	cin >> kttujuan;
	cout << endl;
	
		if (kttujuan == "1") {
		KeretaApi.KotaTujuanKA = "Surabaya";
			
	} else if (kttujuan == "2") {
		KeretaApi.KotaTujuanKA = "Cirebon";

	} else if (kttujuan == "3") {
		KeretaApi.KotaTujuanKA = "Yogyakarta";
		
	} else {
		cout << "Pilihan Tidak Ada";
	}	
	
	//Biaya
		if (ktasal=="1", kttujuan == "1") {
		biaya="Rp.450.000-,";
			
	} else if (ktasal=="1", kttujuan == "2") {
		biaya="Rp.120.000-,";

	} else if (ktasal=="1", kttujuan == "3") {
		biaya="Rp.400.000-,";

	} else if (ktasal=="2", kttujuan == "1") {
		biaya="Rp.120.000-,";

	} else if (ktasal=="2", kttujuan == "2") {
		biaya="Rp.145.000-,";		

	} else if (ktasal=="2", kttujuan == "3") {
		biaya="Rp.440.000-,";
		
	} else if (ktasal=="3", kttujuan == "1") {
		biaya="Rp.170.000-,";

	} else if (ktasal=="3", kttujuan == "2") {
		biaya="Rp.390.000-,";

	} else if (ktasal=="3", kttujuan == "3") {
		biaya="Rp.240.000-,";
				
	} else {
		cout << "Pilihan Tidak Ada";
	}
	
	//nomor kereta
		if (ktasal == "1") {
		KeretaApi.noKereta = "001BDG";
	} else if (ktasal == "2"){
		KeretaApi.noKereta = "002JKT";
	} else if (ktasal=="3"){
		KeretaApi.noKereta = "003MLG";
	}

	//tanggal berangkat	
	cout << "----------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "PILIH TANGGAL, BULAN & TAHUN KEBERANGKATAN" << endl;
	cout << endl;
	cout << "Masukkan tanggal    : ";
	cin >> KeretaApi.tanggalBerangkat.tanggal;
	cout << "Masukkan bulan      : ";
	cin >> KeretaApi.tanggalBerangkat.bulan;
	cout << "Masukkan Tahun      : ";
	cin >> KeretaApi.tanggalBerangkat.tahun;
	cout << endl;
	
	//jam berangkat	
	cout << "----------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "PILIH WAKTU KEBERANGKATAN" <<endl;
	cout << endl;
	cout << " 1. 07.00  ||  2. 09.00  ||  3. 12.45  ||  4. 15.30  ||  5. 19.30  ||  6. 22.00  ||  7. 03.15" <<endl;
	cout << "Masukkan Pilihan Anda 1/2/3/4/5/6/7 : ";
	cin >> jamber;
	cout << endl;

	if (jamber == "1") {
		KeretaApi.jamBerangkat.berangkat = "Pukul 07.00 WIB";
			
	} else if (jamber == "2") {
		KeretaApi.jamBerangkat.berangkat = "Pukul 09.00 WIB";

	} else if (jamber == "3") {
		KeretaApi.jamBerangkat.berangkat = "Pukul 12.45 WIB";	
	
	} else if (jamber == "4") {
		KeretaApi.jamBerangkat.berangkat = "Pukul 15.30 WIB";
			
	} else if (jamber == "5") {
		KeretaApi.jamBerangkat.berangkat = "Pukul 19.30 WIB";

	} else if (jamber == "6") {
		KeretaApi.jamBerangkat.berangkat = "Pukul 22.00 WIB";

	} else if (jamber == "7") {
		KeretaApi.jamBerangkat.berangkat = "Pukul 03.15 WIB";
	
	}  else {
		cout << "Pilihan tidak ada";
	}
	
   //jam tiba
	if (jamber == "1") {
		KeretaApi.jamTiba.tiba = "Pukul 01.00 WIB";
			
	} else if (jamber == "2") {
		KeretaApi.jamTiba.tiba = "Pukul 02.00 WIB";

	} else if (jamber == "3") {
		KeretaApi.jamTiba.tiba = "Pukul 17.30 WIB";	
	
	} else if (jamber == "4") {
		KeretaApi.jamTiba.tiba = "Pukul 20.20 WIB";
			
	} else if (jamber == "5") {
		KeretaApi.jamTiba.tiba = "Pukul 23.30 WIB";

	} else if (jamber == "6") {
		KeretaApi.jamTiba.tiba = "Pukul 05.00 WIB";

	} else if (jamber == "7") {
		KeretaApi.jamTiba.tiba = "Pukul 08.15 WIB";
	
	}

	//detail pemesanan
	cout << "==============================================================================================" << endl;
	cout << "                                       DETAIL PEMESANAN                                       " << endl;
	cout << "==============================================================================================" << endl;
	cout << endl;

	cout << "Nomor Tiket        : " <<cout<<1+(rand()%9) << endl;
	cout << "Nama               : " << KeretaApi.nama << endl;
	cout << "Alamat             : " << KeretaApi.alamat <<endl;
	cout << "Nomor HP           : " << KeretaApi.nohp << endl;
	cout << "Kota Asal          : " << KeretaApi.KotaAsalKA << endl;
	cout << "Kota Tujuan        : " << KeretaApi.KotaTujuanKA << endl;
	cout << "Nama Kereta        : " << "KA" << KeretaApi.KotaAsalKA <<KeretaApi.KotaTujuanKA << endl;
	cout << "Nomor Kereta       : " << KeretaApi.noKereta << endl;
	cout << "Tanggal Berangkat  : " << KeretaApi.tanggalBerangkat.tanggal << " - " << KeretaApi.tanggalBerangkat.bulan << " - " << KeretaApi.tanggalBerangkat.tahun <<  endl;
	cout << "Jam Berangkat      : " << KeretaApi.jamBerangkat.berangkat << endl;
	cout << "Tanggal Tiba       : " << KeretaApi.tanggalBerangkat.tanggal+1 << " - " << KeretaApi.tanggalBerangkat.bulan << " - " << KeretaApi.tanggalBerangkat.tahun << endl;
	cout << "Jam Tiba           : " << KeretaApi.jamTiba.tiba << endl;
	cout << "Total Biaya        : " << biaya <<endl;

}

