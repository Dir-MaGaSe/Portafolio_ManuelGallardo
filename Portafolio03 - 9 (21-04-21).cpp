/*Portafolio UN3 - --- Programa 9
  Nombre: Manuel Gallardo
  Carnet: GV100520
  "Lista Enteros"*/
#include"lista.h"
#include<iostream>
using namespace std;

int main(){
	ListaEnteros list1(10);
	
	list1.adjuntar(15);
	list1.adjuntar(6);
	list1.adjuntar(18);
	list1.imprimirLista();
	
	list1.adjuntar(32);
	list1.imprimirLista();
	
	list1.insertar(1,44);
	list1.imprimirLista();
	
	list1.remover(1);
	list1.imprimirLista();
	
	return 0;
}
