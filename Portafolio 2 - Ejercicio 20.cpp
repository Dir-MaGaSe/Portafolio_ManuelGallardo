//Nombre: Manuel Sebasti�n Gallardo V�squez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int conejos(int n){
	if (n<=2){return(1);}
	else{return conejos(n-1) + conejos(n-2);}
}

int main(){
	int num, valor;
	cout<<"Ingrese el n�mero de conejos inicial: "; cin>>valor;
	num = conejos(valor);
	cout<<"El n�mero de parejas de conejitos resultante es: "<<num<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
