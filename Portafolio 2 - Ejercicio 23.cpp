//Nombre: Manuel Sebastián Gallardo Vásquez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	int paul = 21;
	int* melissa = &paul;
	int dave = *melissa;
	int *tom = &dave;
	int **ramon = &tom;
	cout<<"Paul\t: "<<paul<<endl;
	cout<<"&Paul\t: "<<&paul<<endl;
	cout<<"Melissa\t: "<<melissa<<endl;
	cout<<"&Melissa: "<<&melissa<<endl;
	cout<<"Dave\t: "<<dave<<endl;
	cout<<"&Dave\t: "<<&dave<<endl;
	cout<<"Tom\t: "<<tom<<endl;
	cout<<"&Tom\t: "<<&tom<<endl;
	cout<<"Ramon\t: "<<ramon<<endl;
	cout<<"*Ramon\t: "<<*ramon<<endl;
	cout<<"**Ramon\t: "<<**ramon<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
