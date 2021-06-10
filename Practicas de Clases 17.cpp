//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	double nota = 0;
	string resultado;
	cout<<"Ingresa tu nota: "; cin>>nota;
	resultado = (nota == 0)? "Se ha anulado " : (nota >= 7)? "Has aprobado " : "Has reprobado ";
	cout<<resultado<<"tu examen."<<endl;
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
