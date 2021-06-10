/*Portafolio UN3 - --- Programa 2
  Nombre: Manuel Gallardo
  Carnet: GV100520*/
#include<iostream>
#include<conio.h>
using namespace std;

class Rectangulo{
	int ancho, alto;
	public:
		Rectangulo(); //Constructor sin valores
		Rectangulo(int, int);//Pedir datos como constructor
		//void set_valores(int, int); Pedir datos como función
		int area() {return ancho * alto;}
};

Rectangulo::Rectangulo(){
	ancho = 2;
	alto = 5;
}

Rectangulo::Rectangulo(int x, int y){
	ancho = x;
	alto = y;
}

/*void Rectangulo::set_valores(int x, int y){
	ancho = x;
	alto = y;
}*/


class Circulo{
	int radio;
	public:
		Circulo(double r) { radio = r; }
		double circunferencia() { return 2*radio*3.14159265; } 
};


int main(){
	Rectangulo rect1{5,7}, rect2(7,9), rect3;
	
	cout<<"Area rect1: "<<rect1.area()<<endl;
	cout<<"Area rect2: "<<rect2.area()<<endl;
	cout<<"Area rect3(por defecto): "<<rect3.area()<<endl;
	
	Circulo cir1(5), cir2{7}, cir3 = 9, cir4 = {11};
	/*Diferente formas de inicialización de variables de objetos
funcional del objeto---por asignación---uniforme---'Plain Old Data {POD-like}'*/
	cout<<"Circunferencia: "<<cir1.circunferencia()<<endl;
	cout<<"Circunferencia: "<<cir2.circunferencia()<<endl;
	cout<<"Circunferencia: "<<cir3.circunferencia()<<endl;
	cout<<"Circunferencia: "<<cir4.circunferencia()<<endl;
	
	Rectangulo *dir_rect1, *p1_rect, *p2_rect;
	dir_rect1 = &rect1;
	p1_rect = new Rectangulo(4,9);
	p2_rect = new Rectangulo[2]{{11,3},{6,5}};
	cout<<"Area *dir_rect1: "<<dir_rect1->area()<<endl;
	cout<<"Area *p1_rect: "<<p1_rect->area()<<endl;
	cout<<"Area p2_rect[0]: "<<p2_rect[0].area()<<endl;
	cout<<"Area p2_rect[1]: "<<p2_rect[1].area()<<endl;
	getch();
	return 0;
}
