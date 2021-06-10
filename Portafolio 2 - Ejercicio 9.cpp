//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
void imprimirArreglo(int arr[][3][2], int filas, int columnas, int profundidad){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			for(int k=0; k<profundidad; k++){
				cout<<"arr["<<i<<"]["<<j<<"]["<<k<<"]: "<<arr[i][j][k]<<endl;
			}
		}
	}
}
int main(int argc, char** argv){
	int DosArreglos1[2][3][2] = {
		{
			{1,2},
			{3,4},
			{5,6}
		},
		{
			{12,11},
			{10,9},
			{8,7}
		}
	};
	int DosArreglos2[2][3][2] = {{{12,11},{10,9},{8,7}},{{6,5},{4,3},{2,1}}};
	int DosArreglos3[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	cout<<"Los valores del arreglo 1 son: "<<endl;
	imprimirArreglo(DosArreglos1, 2, 3, 2);
	cout<<"Los valores del arreglo 2 son: "<<endl;
	imprimirArreglo(DosArreglos2, 2, 3, 2);
	cout<<"Los valores del arreglo 3 son: "<<endl;
	imprimirArreglo(DosArreglos3, 2, 3, 2);
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
