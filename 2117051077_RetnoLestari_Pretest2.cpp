#include <iostream>
#include <math.h>
using namespace std;

/*Nama : Retno Lestari
Kelas : D*/

int main(){
	cout<< "\t\t Body Mass Index (BMI)\n"<<endl;
	//Input
	float berat_bdn, tinggi_bdn, BMI, tinggi_bdn_kuadrat;
	cout<<"Berat Badan (Kg)\t: ";cin>>berat_bdn;
	cout<<"Tinggi badan (M)\t: ";cin>>tinggi_bdn; cout<<endl<<endl;
	
	tinggi_bdn_kuadrat = pow(tinggi_bdn,2);
	BMI = berat_bdn / tinggi_bdn_kuadrat ;
	
	//Output
	cout<<"\t HASIL  "<<endl<<endl;
	cout<<"BMI\t= "<<BMI<<endl;
	
	return 0;
}
