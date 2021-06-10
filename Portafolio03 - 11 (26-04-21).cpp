/*Portafolio UN3 - --- Programa 11
  Nombre: Manuel Gallardo
  Carnet: GV100520
  "Colas"*/
#include<iostream>
#include<queue>
using namespace std;

void imprimirQueue(queue<double> myqueue){
	queue<double> segundaCola = myqueue;
	cout<<"_INICIO_";
	while(!segundaCola.empty()){
		cout<<"|"<<segundaCola.front()<<"|";
		segundaCola.pop();
	}
	cout<<"_FIN_"<<endl<<endl;
}

int main(){
	queue<double> miCola;
	
	miCola.push(2.1);
	imprimirQueue(miCola);
	miCola.push(52);
	imprimirQueue(miCola);
	miCola.push(87);
	imprimirQueue(miCola);
	miCola.push(45.1);
	imprimirQueue(miCola);
	miCola.push(5.89);
	imprimirQueue(miCola);
	miCola.push(58);
	imprimirQueue(miCola);
	miCola.push(3.1);
	imprimirQueue(miCola);
	miCola.push(42);
	imprimirQueue(miCola);
	miCola.push(32.5);
	imprimirQueue(miCola);
	
	cout<<"Tamanio de la cola: "<<miCola.size()<<endl;
	cout<<"\n| ";
	while(!miCola.empty()){
		imprimirQueue(miCola);
		miCola.pop();
	}
	cout<<endl;
	return 0;
}
