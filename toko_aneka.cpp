#include <iostream>
#include <string>
using namespace std;

int main(){

string namaBarang, kodeBarang;
int jumlah,kode,harga,bayar;
float totbay,total,totPPn,kembalian;

cout << "=====================================";
cout << endl;
cout << "==== \t Toko Aneka Complete \t ====";
cout << endl;
cout << "=====================================";
cout << endl;

cout << "Pilih Kode (1/2/3) : "; cin >> kode;
cout << endl;
system("cls");
	
	switch(kode){
		case 1:
			cout << "=====================================" << endl;
			cout << "==== \t Toko Aneka Complete \t ====" << endl;
			cout << "=====================================" << endl;
			cout << "Masukkan Kode Barang (S/U/T/E) : "; cin >> kodeBarang;
			
			if(kodeBarang == "S" || kodeBarang == "s"){
				namaBarang = "Saos Sambal Pedas";
				harga = 8000;
			}else if(kodeBarang == "U" || kodeBarang == "u"){
				namaBarang = "Susu Ultra Milk";
				harga = 5000;				
			}else if(kodeBarang == "T" || kodeBarang == "t"){
				namaBarang = "Taro";
				harga = 6500;				
			}else if(kodeBarang == "E" || kodeBarang == "e"){
				namaBarang = "Es Krim";
				harga = 3000;
			}else{
				namaBarang = "";
				harga = 0;
			}
			cout << "Jumlah Beli : "; cin >> jumlah;
		break;
		
		case 2:
			cout << "=====================================" << endl;
			cout << "==== \t Toko Aneka Complete \t ====" << endl;
			cout << "=====================================" << endl;
			cout << "Masukkan Kode Barang (R/H/B/C) : "; cin >> kodeBarang;
			
			if(kodeBarang == "R" || kodeBarang == "r"){
				namaBarang = "Rexona";
				harga = 10000;
			}else if(kodeBarang == "H" || kodeBarang == "h"){
				namaBarang = "Handuk";
				harga = 25000;				
			}else if(kodeBarang == "B" || kodeBarang == "b"){
				namaBarang = "Baju Polos";
				harga = 10000;				
			}else if(kodeBarang == "C" || kodeBarang == "c"){
				namaBarang = "Celana Panjang";
				harga = 35000;
			}else{
				namaBarang = "";
				harga = 0;
			}
			cout << "Jumlah Beli : "; cin >> jumlah;				
		break;
		
		case 3:
			cout << "=====================================" << endl;
			cout << "==== \t Toko Aneka Complete \t ====" << endl;
			cout << "=====================================" << endl;
			cout << "Masukkan Kode Barang (C/K/P/N) : "; cin >> kodeBarang;
			
			if(kodeBarang == "C" || kodeBarang == "c"){
				namaBarang = "";
				harga = 0;
			}else if(kodeBarang == "K" || kodeBarang == "k"){
				namaBarang = "";
				harga = 0;				
			}else if(kodeBarang == "P" || kodeBarang == "p"){
				namaBarang = "";
				harga = 0;				
			}else if(kodeBarang == "N" || kodeBarang == "n"){
				namaBarang = "";
				harga = 0;
			}else{
				namaBarang = "";
				harga = 0;
			}
			cout << "Jumlah Beli : "; cin >> jumlah;
		break;
		
	default :
		cout << "Kode Yang anda pilih tidak tersedia";
		system("exit");
		
		return 0;		
}

if(jumlah > 5){
	total = harga * jumlah;
	totPPn = total * 10 / 100;
}else{
	total = harga * jumlah;
}	
						
totbay = total + totPPn;

cout << endl;
cout << "=====================================" << endl;
cout << "==== \t Toko Aneka Complete \t ====" << endl;
cout << "=====================================" << endl;
cout << "Nama Barang\t\t: " << namaBarang << endl;
cout << "Harga Satuan\t\t: " << harga << endl;
cout << "Jumlah Beli\t\t: " << jumlah << endl;
cout << "Total Keseluruhan\t: " << totbay << endl;
cout << "Pembayaran\t\t: "; cin >> bayar;
kembalian = bayar - totbay;
cout << "Uang Kembalian\t\t: " << kembalian << endl;
cout << "=====================================" << endl;
return 0;

}
