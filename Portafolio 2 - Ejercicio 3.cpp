//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(int argc, const char * argv[]){
	int numeros[10];
	for(int i=0; i<10; i++){
		numeros[i] = 10*(i+1);
	}
	cout<<"Indice\tValor\n------\t-----\n";
	for(int i=0; i<10; i++){
		cout<<setw(6)<<i<<"\t"<<setw(5)<<numeros[i]<<endl;
	}
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
