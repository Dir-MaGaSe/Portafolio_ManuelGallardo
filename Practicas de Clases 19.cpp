//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

void SinRango(int x){
	for(int i = 1; i <= 12; i++){
		cout<<x<<" * "<<i<<" = "<<x*i<<endl;
	}
}
void ConRango(int y){
	int rango;
	cout<<"Cual es el rango?: "; cin>>rango;
	for(int i = 1; i <= rango; i++){
		cout<<y<<" * "<<i<<" = "<<y*i<<endl;
	}
}
int main(){
	int n;
	char DarRango = 'n';
	cout<<"Tablas de multiplicar\nIngrese un némero: "; cin>>n;
	cout<<"\nQuieres establecer un rango[y/n]?: "; cin>>DarRango;
	if(DarRango == 'y'){
		ConRango(n);
	} else{
		SinRango(n);
	}
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
