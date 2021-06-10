//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	int a,b;
	cout<<"Calculadora de operadores aritmeticos de 2 numero"<<endl;
	cout<<"\nIngresa el primer numero: "; cin>>a;
	cout<<"Ingresa el segundo numero: "; cin>>b;
	
	cout<<"\n"<<a<<" mas "<<b<<" = "<<a+b;
	cout<<"\n"<<a<<" menos "<<b<<" = "<<a-b;
	cout<<"\n"<<a<<" por "<<b<<" = "<<a*b;
	cout<<"\n"<<a<<" entre "<<b<<" = "<<a/b;
	cout<<"\n"<<a<<" mod "<<b<<" = "<<a%b<<endl;
	a++; b++;
	cout<<"\nAumento en 1: \n"<<a<<"\t"<<b;
	a--; a--; b--; b--;
	cout<<"\nDecremento en 1: \n"<<a<<"\t"<<b<<endl;
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
