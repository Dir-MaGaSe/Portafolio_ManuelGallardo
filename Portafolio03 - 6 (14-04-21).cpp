/*Portafolio UN3 - --- Programa 6
  Nombre: Manuel Gallardo
  Carnet: GV100520
  Ejemplo de "Herencia o Clase Derivada"*/
#include<iostream>
#include<conio.h>
using namespace std;

class Poligono{
	protected:
		double ancho, alto;
	public:
		void setValores(double a, double b)
		{ ancho = a; alto = b; }
};

class Rectangulo: public Poligono {
	public:
		double area(){ return ancho * alto; }
};

class Triangulo: public Poligono {
	public:
		double area(){ return (ancho * alto) / 2; }
};

int main(){
	Rectangulo miRectangulo;
	Triangulo miTriangulo;
	
	miRectangulo.setValores(4.3,8.1);//Método de herencia desde 'Poligono'
	miTriangulo.setValores(4.3,8.1);
	
	cout<<"Rectangulo:\t"<<miRectangulo.area()<<endl;
	cout<<"Triangulo: \t"<<miTriangulo.area()<<endl;
	getch();
	return 0;
}
