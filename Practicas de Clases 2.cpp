//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	int numero;
	cout<<"Ingrese un numero: "; cin>>numero;
	
	cout<<"\nTu numero mas 2 es: "<<numero+2;
	cout<<"\nTu numero menos 2 es: "<<numero-2;
	cout<<"\nTu numero por 2 es: "<<numero*2;
	cout<<"\nTu numero entre 2 es: "<<numero/2<<endl;

	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
