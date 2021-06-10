/*Portafolio UN3 - --- Programa 10.5
  Nombre: Manuel Gallardo
  Carnet: GV100520
  "Pilas"*/
#include<iostream>
#include<stack>
using namespace std;

void imprimirStack(stack<double> mystack){
	stack<double> segundaPila = mystack;
	cout<<"_TOP_"<<endl;
	while(!segundaPila.empty()){
		cout<<"|"<<segundaPila.top()<<"|"<<endl;
		segundaPila.pop();
	}
	cout<<"_BOT_"<<endl<<endl;
}

int main(){
	stack<double> miPila;
	
	miPila.push(2.1);
	imprimirStack(miPila);
	miPila.push(52);
	imprimirStack(miPila);
	miPila.push(87);
	imprimirStack(miPila);
	miPila.push(45.1);
	imprimirStack(miPila);
	miPila.push(5.89);
	imprimirStack(miPila);
	miPila.push(58);
	imprimirStack(miPila);
	miPila.push(3.1);
	imprimirStack(miPila);
	miPila.push(42);
	imprimirStack(miPila);
	miPila.push(32.5);
	imprimirStack(miPila);
	
	cout<<"Tamanio de la Pila: "<<miPila.size()<<endl;
	while(!miPila.empty()){
		imprimirStack(miPila);;
		miPila.pop();
	}
	cout<<endl;
	return 0;
}
