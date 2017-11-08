#include <iostream>

using namespace std;

int main (){
	double b,t;
	
	cout<<"Perhitungan Berat Badan Ideal"<<endl;
	cout<<"Masukkan Berat Badan Anda : ";
	cin>>b;
	cout<<"Masukkan Tinggi Badan Anda : ";
	cin>>t;
	
	cout<<"Hasil Perhitungan Anda"<<endl;
	cout<<"Berat Badan Anda Adalah : "<<b<<endl;
	cout<<"Tinggi Badan Anda Adalah : "<<t<<endl;
	
	if(b<t/2.5){
		cout<<"Anda Underweight";
	}
	else if(t/2.3<b){
		cout<<"Anda Overweight";
	}
	else if(t/2.5<=b<=t/2.3)
		cout<<"Anda Normal";
}
