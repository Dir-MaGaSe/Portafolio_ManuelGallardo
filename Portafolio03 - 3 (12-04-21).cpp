/*Portafolio UN3 - --- Programa 2
  Nombre: Manuel Gallardo
  Carnet: GV100520*/
#include<iostream>
#include<conio.h>
using namespace std;

class Circulo{
	int radio;
	public:
		Circulo(double r) : radio(r) {}
		double area() { return radio*radio*3.14159265; } 
};

class Cilindro{
	Circulo base;
	double altura;
	public:
		Cilindro(double r, double h) : base(r), altura(h) {}
		double volumen() { return base.area()*altura; }
};

int main(){
	Cilindro foo(5,10);
	
	cout<<"Volumen del cilindro foo: "<<foo.volumen()<<endl;
	
	getch();
	return 0;
}
