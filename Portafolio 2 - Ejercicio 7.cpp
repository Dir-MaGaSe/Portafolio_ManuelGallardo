//Manuel Sebasti�n Gallardo V�squez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	int numeros[3][3];
	cout<<"Ingresar n�meros: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>numeros[i][j];
		}
	}
	cout<<"\nLos n�meros ingresados son:\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"N�meros["<<i<<"]["<<j<<"]: "<<numeros[i][j]<<"\n";
		}
	}
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
