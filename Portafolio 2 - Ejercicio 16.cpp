//Nombre: Manuel Sebastián Gallardo Vásquez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
void imprimirArreglo(int array[], int size){
	for(int i=0; i<size; ++i){
		cout<<" | "<<array[i];
	}
	cout<<" | \n";
}
void ordenamientoBurbuja(int array[], int size){
	for(int paso=0; paso<size-1; ++paso){
		for(int i=0; i<size-paso-1; ++i){
			if(array[i]> array[i+1]){
				int temporal = array[i];
				array[i] = array[i+1];
				array[i+1] = temporal;
			}
		}
	}
}

int main(){
	int data[] = {-3,41,0,15,-9,7,5,55};
	int size = sizeof(data)/sizeof(data[0]);
	cout<<"Arreglo inicial:\n";
	imprimirArreglo(data, size);
	ordenamientoBurbuja(data, size);
	cout<<"Arreglo ordenado de forma ascendente:\n";
	imprimirArreglo(data, size);
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
