//Nombre: Manuel Sebastián Gallardo Vásquez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
void resolverTorres(int conteo, char origen, char destino, char libre){
	if(conteo == 1){
		cout<<"Moviendo el disco superior desde "<<origen<<" hacia "<<destino<<endl;
	} else{
		resolverTorres(conteo -1, origen, libre, destino);
		resolverTorres(1, origen, destino, libre);
		resolverTorres(conteo -1, libre, destino, origen);
	}
}

int main(){
	int valor;
	cout<<"Ingrese el némero de disco: "; cin>>valor;
	resolverTorres(valor, 'A', 'B', 'C');
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
