/*Portafolio UN3 - --- Programa 4
  Nombre: Manuel Gallardo
  Carnet: GV100520*/
#include<iostream>
#include<conio.h>

#include"rectangulo.h"
#include"circulo.h"
using namespace std;

int main(int arg, char** argv){
	Rectangulo r1(3,2);
	Rectangulo r2(2.0, 4.0);
	Circulo c1(6);
	Circulo c2(1.5);
	
	cout<<"Area de r1 = "<<r1.calcularArea()<<endl;
	cout<<"Area de r2 = "<<r2.calcularArea()<<endl;
	cout<<"Perimetro de r1 ="<<r1.calcularPerimetro()<<endl;
	cout<<"Perimetro de r2 ="<<r2.calcularPerimetro()<<endl;
	
	cout<<"\nCirculo c1\nRadio = "<<c1.getRadio()<<endl;
	cout<<"Diametro = "<<c1.calcularDiametro()<<endl;
	cout<<"Circunferencia = "<<c1.calcularCircunferencia()<<endl;
	cout<<"Area = "<<c1.calcularArea()<<endl;
	
	getch();
	return 0;
}
