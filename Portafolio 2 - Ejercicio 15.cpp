//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
void escribirArchivo(string archivo, int lineas){
	ofstream miArchivo(archivo);
	string texto;
	if(miArchivo.is_open()){
		cout<<"Ingrese el contenido del documento: \n";
		for(int i=0; i<lineas; i++){
			getline(cin,texto);
			miArchivo<<texto<<endl;
		}
		miArchivo.close();
	}
	else cout<<"No se pudo abrir el archivo.";
}
void leerArchivo(string archivo){
	string linea;
	ifstream miArchivo(archivo);
	if(miArchivo.is_open()){
		while(getline(miArchivo,linea)){
			cout<<linea<<"\n";
		}
		miArchivo.close();
	}
	else cout<<"No se pudo abrir el archivo.";
}
int main(int argc, const char * argv[]){
	int lineas = 5;
	string nombreArchivo = "documento.txt";
	escribirArchivo(nombreArchivo, lineas);
	leerArchivo(nombreArchivo);
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet; getch();
	return 0;
}
