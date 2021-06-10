//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

void HolaMundo(){
	int rango, i = 1;
	cout<<"\nCuantas veces lo quieres imprimir?: "; cin>>rango;
	while(i <= rango){
		cout<<i<<". Hola mundo :)"<<endl;
		i++;
	}
}
void ImprimirAbecedario(){
	char letra = 'a';
	while(letra <= 'z'){
		cout<<letra<<" ";
		letra++;
	}
	cout<<endl;
}

int main(){
	int n;
	cout<<"Bucles:\n1. Imprimir 'Hola Mundo'\n2. Imprimir abecedario\nElegir funciàn: "; cin>>n;
	switch(n){
		case 1: HolaMundo(); break; 
		case 2: ImprimirAbecedario(); break;
		default: cout<<"Opciàn no valida"<<endl;
	}
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
