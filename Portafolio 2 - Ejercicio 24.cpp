//Nombre: Manuel Sebastián Gallardo Vásquez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	int c[5] = {17,24,38,15,99};
	int *p3;
	int *p4;
	p4 = c;
	p3 = &c[0];
	int sam;
	sam = *(p3+3);
	cout<<"**p3 = "<<*p3<<endl;
	cout<<"sam = "<<sam<<endl;
	cout<<"p4 = "<<p4<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
