//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<array>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	array<int,5> numeros = {3,5,1,4,2};
	int valor_buscado = 4;
	int indice = -1;
	for(int i=0; i<=numeros.size(); i++){
		if(numeros[i] == valor_buscado){
			indice = i;
			break;
		}
	}
	cout<<"Indice del valor "<<valor_buscado<<" : "<<indice<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet; getch();
	return 0;
}
