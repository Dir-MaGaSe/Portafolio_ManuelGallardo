/*Portafolio UN3 - --- Programa 1
  Nombre: Manuel Gallardo
  Carnet: GV100520*/
#include<iostream>
#include<conio.h>
using namespace std;

class Automovil{
	public://Operaciones, funciones de uso público
		Automovil();
		void set_detalles();
		void set_numPuertas(int);
		void get_detalles() const;
		void get_numPuertas() const;
	private://Atributos
		string fabricante;
		int numPuertas;
		int numCilindros;
		int tamanioMotor;
};

Automovil::Automovil(){
	numPuertas = 0;//La clase se llama a si mismo
	numCilindros = 0;//para ser el constructor por
	tamanioMotor = 0;//defecto
}

void Automovil::set_detalles(){
	cout<<"Introduce el fabricante: "; cin>>fabricante;
	cout<<"Cuantas puertas tiene?: "; cin>>numPuertas;
	cout<<"Cuantos cilindros tiene?: "; cin>>numCilindros;
	cout<<"Tamanio del motor?: "; cin>>tamanioMotor;
}

void Automovil::set_numPuertas(int puertas){
	this->numPuertas = puertas;
}

void Automovil::get_detalles() const{
	cout<<"Fabricante:\t"<<fabricante<<endl;
	cout<<"Puertas:   \t"<<numPuertas<<endl;
	cout<<"Cilindros: \t"<<numCilindros<<endl;
	cout<<"Motor:     \t"<<tamanioMotor<<endl;
}

int Automovil::get_numPuertas() const{
	cout<<"Puertas:   \t"<<numPuertas<<endl;
}


int main(){
	Automovil miCarro;
	miCarro.set_detalles();
	Automovil CarroDeErick;
	CarroDeErick.set_detalles();
	Automovil CarroDeManuel;
	CarroDeManuel.set_detalles();/*Uso de la palabra 'set' para introducir contenido 
	en una clase*/
	miCarro.get_detalles();
	CarroDeErick.get_detalles();
	CarroDeManuel.get_detalles();/*Uso de la palabra 'get' para imprimir o retornar 
	contenido de una clase*/
	getch();
	return 0;
}
