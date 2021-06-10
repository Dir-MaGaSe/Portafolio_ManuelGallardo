//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(int argc, const char * argv[]){
	int numeros[10] = {24,6,10,55,43,-5,-35,18,1,-18};
	cout<<"Indice\tValor\n------\t-----\n";
	for(int i=0; i<10; i++){
		cout<<setw(6)<<right<<i<<"\t"<<setw(5)<<right<<numeros[i]<<endl;
	}
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
