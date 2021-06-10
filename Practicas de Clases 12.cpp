//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	int n;
	cout<<"Ingrese un némero [1, 2 o 3]: "; cin>>n;
	switch(n){
		case 1: cout<<"\nAl que madruga dios lo ayuda"<<endl; break;
		case 2: cout<<"\nA caballo regalado no se le miran los dientes"<<endl; break;
		case 3: cout<<"\nCamaràn que se duerme lo lleva la corriente"<<endl; break;
		default: cout<<"\nNémero Invalido"<<endl;
	}
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
