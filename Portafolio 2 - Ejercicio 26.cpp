//Nombre: Manuel Sebastián Gallardo Vásquez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

	int paul = 21;
	int maria = 90;
	int carlos = 22;
	int* melissa = &paul;
	int* dave = melissa;
	int tom = paul;
void imprimir(){
	cout<<"Paul\t: "<<paul<<endl;
	cout<<"&Paul\t: "<<&paul<<endl;
	cout<<"&Mar¡a\t: "<<&maria<<endl;
	cout<<"&Carlos\t: "<<&carlos<<endl;
	cout<<"Melissa\t: "<<melissa<<endl;
	cout<<"&Melissa: "<<&melissa<<endl;
	cout<<"*Melissa: "<<*melissa<<endl;
	cout<<"Tom\t: "<<tom<<endl;
	cout<<"&Tom\t: "<<&tom<<endl;
	cout<<"Dave\t: "<<dave<<endl;
	cout<<"&Dave\t: "<<&dave<<endl;
	cout<<"*Dave\t: "<<*dave<<endl;
	cout<<"---------------------"<<*dave<<endl;
}
int main(){
	imprimir();
	*melissa = 30;
	imprimir();
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
