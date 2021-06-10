//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<iomanip>
#include<array>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	array<int,5> numeros = {1,2,3,4,5};
	int inferior = 0;
	int superior = (int)numeros.size() -1;
	int medio;
	int valor_buscado = 2;
	int indice = -1;
	while(inferior <= superior){
		medio = inferior+(superior-inferior)/2;
		if(valor_buscado < numeros[medio]){
			superior = medio-1;
		} else if(valor_buscado > numeros[medio]){
			inferior = medio+1;
		} else{
			indice = medio;
			break;
		}
	}
	cout<<"Indice del valor "<<valor_buscado<<" : "<<indice<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet; getch();
	return 0;
}
