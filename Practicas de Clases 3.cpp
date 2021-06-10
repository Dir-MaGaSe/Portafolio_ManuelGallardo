//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
const double VelLuz = 299792458;
const double pi = 3.14159265359;

int main(){
	cout<<"La velocidad de la luz es: "<<VelLuz<<endl;
	float radio, diametro = 0;
	cout<<"\nDiametro de un circulo\nIngrese el valor del radio: "; cin>>radio;
	
	diametro = 2 * pi * radio;
	
	cout<<"\nEl diametro es: "<<diametro<<endl;

	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
