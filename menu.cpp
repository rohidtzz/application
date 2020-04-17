#include <iostream>
#include <cstdlib>
using namespace std;

void br(){
	cout << "\n";
}

void tittle(){
	cout << "---------------------------------------- selamat datang di restauran cepat saji ---------------------------------------";
}

void menu(){
	cout << "paket 1: \n-------- 1. nasi \n--------- 2. ayam goreng \n---------- 3. cumi \n----------- 4. kentang \n------------------------- harga: 100000 ";
}

void menu1(){
	cout << "paket 2: \n-------- 1. gandum \n--------- 2. ikan \n---------- 3. bakso \n----------- 4. kentang \n------------------------- harga: 200000 ";
}

void menu2(){
	cout << "paket 3: \n-------- 1. nasi \n--------- 2. lobster \n---------- 3. cumi \n----------- 4. kentang \n------------------------- harga: 300000 ";
}

void menu3(){
	cout << "paket 4: \n-------- 1. nasi \n--------- 2. ayam bakar \n---------- 3. cumi \n----------- 4. kentang \n------------------------- harga: 400000 ";
}

string nama;
int meja;
int paket;
int uang;
int u;
string x;
string z;

int main(){
	
	tittle();
	
	br();
	br();
	
	cout << "masukan nama anda: ";
	cin >>  nama;
	
	cout << "meja hanya tersedia 1 - 30 \n";
	
	cout <<"nomer meja: ";
	cin >> meja;
	
	if(meja > 30){
		cout << "tidak ada meja no ";
		cout << meja;
		cout << " silahkan ulang";
		exit(0);
	}
	
	br();
	br();
	
	cout << "menu: \n \n";
	
	menu();
	br();
	br();
	
	menu1();
	br();
	br();
	
	menu2();
	br();
	br();
	
	menu3();
	br();
	br();
	
	
	cout << "nomer paket: ";
	cin >> paket;
	
	switch(paket){
		case 1:
				cout << "masukan uang anda: ";
				cin >> uang;
				
				if(uang < 100000){
					cout << "uang anda kurang";
				}else{
					cout << "uang kembali anda adalah: ";
					cout << uang - 100000;
					br();
					cout << " \npesanan dengan nama " << nama << " meja " << meja << " paket " << paket << " sedang di proses";
				}
			break;
		
		case 2:
				cout << "masukan uang anda: ";
				cin >> uang;
				
				if(uang < 200000){
					cout << "uang anda kurang";
				}else{
					cout << "uang kembali anda adalah: ";
					cout << uang - 200000;
					br();
					cout << " \npesanan dengan nama " << nama << " meja " << meja << " paket " << paket << " sedang di proses";
				}	
			break;
			
		case 3:
				cout << "masukan uang anda: ";
				cin >> uang;
				
				if(uang < 300000){
					cout << "uang anda kurang";
				}else{
				cout << "uang kembali anda adalah: ";
				cout << uang - 300000;
				br();
				cout << " \npesanan dengan nama " << nama << " meja " << meja << " paket " << paket << " sedang di proses";
				}
			break;
		
		case 4:
				cout << "masukan uang anda: ";
				cin >> uang;
				
				if(uang < 400000){
					cout << "uang anda kurang";
				}else{
				cout << "uang kembali anda adalah: ";
				cout << uang - 400000;
				br();
				cout << " \npesanan dengan nama " << nama << " meja " << meja << " paket " << paket << " sedang di proses";
				}
			break;
		default:
				cout << "paket tidak tersedia";
			break;
	}
	
	return 0;
}
