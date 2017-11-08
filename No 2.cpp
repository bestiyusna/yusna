#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
	int pjg,lbr,l,pil,a,t;
	
	cout<<"1. Persegi Panjang\n";
	cout<<"2. Segitiga\n";
	cout<<"Masukkan Pilihan :";
	cin>>pil;
	
	switch(pil){
		case 1:
		cout<<"Masukkan Panjang = ";
		cin>>pjg;
		cout<<"Masukkan Lebar = ";
		cin>>l;
		l=pjg*lbr;
		cout <<"Luas Persegi Panjang = "<<l<<"\n";
		
		system("Pause");
		break;
		
		case 2:
		cout<<"Masukkan Alas Segitiga = ";
		cin>>a;
		cout<<"Masukkan Tinggi Segitiga = ";
		cin>>t;
		l=0.5*a*t;
		cout<<"Luas Segitiga Adalah : "<<l<<"\n";
		
		system("Pause");
	}
}
