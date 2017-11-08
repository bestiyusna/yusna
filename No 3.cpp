#include <iostream>

using namespace std;

int main (){
	int gp,jk;
	int lembur,gs,pjk,gk;
	
	cout <<"Penghitungan gaji Karyawan"<<endl;
	cout<<"Masukkan Gaji Pokok Anda : Rp.";
	cin>>gp;
	cout<<"Masukkan Jam Kerja Anda : ";
	cin>>jk;
	
	lembur=jk-40;
	gs=(lembur*1.5+40)*gp;
	pjk=gs*0.15;
	gk=gs-pjk;
	
	cout<<endl;
	cout<<"Gaji Pokok 	: Rp."<<gp<<endl;
	cout<<"Jam Kerja  	: Rp."<<jk<<endl;
	cout<<"Lembur		: Rp."<<lembur<<endl;
	cout<<"Gaji Sebelum Dipotong Pajak  : Rp."<<gs<<endl;
	cout<<"Total Gaji Anda Adalah		: Rp."<<gk<<endl;
}
