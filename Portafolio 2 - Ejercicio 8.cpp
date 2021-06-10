//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
void imprimirArreglo(int[][3], int, int); //Prototipo de función para definirla posteriormente
int main(int argc, char** argv){
	int arreglo1[2][3] = {{2,3,4},{1,5,6}};
	int arreglo2[2][3] = {2,3,4,1,5,6};
	int arreglo3[2][3] = {{2,3},{1}};
	
	cout<<"Los valores del arreglo 1 son: "<<endl;
	imprimirArreglo(arreglo1, 2, 3);
	cout<<"Los valores del arreglo 2 son: "<<endl;
	imprimirArreglo(arreglo2, 2, 3);
	cout<<"Los valores del arreglo 3 son: "<<endl;
	imprimirArreglo(arreglo3, 2, 3);
	
	arreglo3[0][2] = 5;
	arreglo3[1][1] = 4;
	arreglo3[1][2] = 6;
	
	cout<<"\nLos nuevos valores del arreglo 3 son: "<<endl;
	imprimirArreglo(arreglo3, 2, 3);
	
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
void imprimirArreglo(int arr[][3], int filas, int columnas){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}

