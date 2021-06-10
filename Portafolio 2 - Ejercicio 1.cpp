//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
void ImprimirArreglo(int numeros[]){
	for(int i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int numeros[5] = {2,5,9,14,17};
	ImprimirArreglo(numeros);
	numeros[2] = 20;
	ImprimirArreglo(numeros);
	cout<<"Cambiar el valor de numeros[3]: "; cin>>numeros[3];
	ImprimirArreglo(numeros);
	for(int n : numeros){
		cout<<n<<" "<<endl;
	}
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
