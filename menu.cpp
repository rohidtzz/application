#include <iostream>
using namespace std;

void br(){
	cout << "\n";
}


void tittle(){
	cout << "---------------------------------------- selamat datang di restauran cepat saji ---------------------------------------";
}

void menu(){
	cout << "paket 1: \n-------- 1. nasi \n--------- 2. ayam goreng \n---------- 3. cumi \n----------- 4. kentang ";
}

void menu1(){
	cout << "paket 2: \n-------- 1. gandum \n--------- 2. ikan \n---------- 3. bakso \n----------- 4. kentang ";
}

void menu2(){
	cout << "paket 3: \n-------- 1. nasi \n--------- 2. lobster \n---------- 3. cumi \n----------- 4. kentang ";
}

void menu3(){
	cout << "paket 4: \n-------- 1. nasi \n--------- 2. ayam bakar \n---------- 3. cumi \n----------- 4. kentang ";
}

string nama;
int meja;
int paket;

int main(){
	
	tittle();
	
	br();
	br();
	
	cout << "nama pelanggan: ";
	cin >>  nama;
	
	cout <<"nomer meja: ";
	cin >> meja;
	
	br();
	br();
	
	
	
	cout << "menu: \n \n";
	
	menu();
	br();
	
	menu1();
	br();
	
	menu2();
	br();
	
	menu3();
	br();
	br();
	
	
	cout << "nomer paket: ";
	cin >> paket;
	
	if(paket > 4){
		cout << "paket tidak ada. tolong ulang dari awal";
	}else{
		cout << " \npesanan dengan nama " << nama << " meja " << meja << " paket " << paket << " sedang di proses"; 
	}
	
	
	
	
	
	return 0;
}
