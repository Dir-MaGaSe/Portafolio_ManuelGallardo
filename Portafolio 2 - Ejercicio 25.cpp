//Nombre: Manuel Sebastián Gallardo Vásquez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	int a=5, b=10;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	*p1 = 10;
	p1 = p2;
	*p1 = 20;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
