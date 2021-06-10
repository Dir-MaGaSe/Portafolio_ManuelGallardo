/*Portafolio UN3 - --- Programa 10
  Nombre: Manuel Gallardo
  Carnet: GV100520
  "Pilas"*/
#include<iostream>
#include<stack>
using namespace std;

int main(){
	/*char continuar= ´s´;
	double valor*/
	stack<double> miPila;
	
	miPila.push(2.1);
	miPila.push(52);
	miPila.push(87);
	miPila.push(45.1);
	miPila.push(5.89);
	miPila.push(58);
	miPila.push(3.1);
	miPila.push(42);
	miPila.push(32.5);
	
	cout<<"Tamanio de la pila: "<<miPila.size()<<endl;
	cout<<"\n| ";
	while(!miPila.empty()){
		cout<<miPila.top()<<" | ";
		miPila.pop();
	}
	cout<<endl;
	return 0;
}
