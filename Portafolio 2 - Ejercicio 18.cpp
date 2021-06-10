//Nombre: Manuel Sebastián Gallardo Vásquez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int busquedaBinaria(int arr[], int tamanio, int valor){
	int inf = 0, sup = tamanio -1, med, indice = -1;
	while(inf <= sup){
		med = inf + (sup - inf) / 2;
		if(valor < arr[med]){sup = med - 1;}
		else if(valor > arr[med]){inf = med + 1;}
			else{ indice = med; break; }
	}
	return indice;
}
int contarSumaTres(int arr[], int tamanio){
	int contar = 0;
	for(int i=0; i<tamanio; i++){
		for(int j=i+1; j<tamanio; j++){
			if(busquedaBinaria(arr, tamanio, -(arr[i]+arr[j]))>j){
				contar++;
			}
		}
	}
	return contar;
}

int main(){
	int arr[] = {1,3,4};
	int arr2[] = {-3,-2,5};
	int tamanio = sizeof(arr)/sizeof(arr[0]);
	int tamanio2 = sizeof(arr2)/sizeof(arr2[0]);
	cout<<contarSumaTres(arr, tamanio)<<endl;
	cout<<contarSumaTres(arr2, tamanio2)<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
