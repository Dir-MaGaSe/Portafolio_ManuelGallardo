//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	int x,y=5,z;
	
	cout<<"Ingrese un numero: "; cin>>x;
	z=x;
	x += y;
	cout<<"Tu numero mas cinco es: "<<x<<endl;
	x=z;
	x -= y;
	cout<<"Tu numero menos cinco es: "<<x<<endl;
	x=z;
	x *= y;
	cout<<"Tu numero por cinco es: "<<x<<endl;
	x=z;
	x /= y;
	cout<<"Tu numero entre cinco es: "<<x<<endl;
	x=z;
	x %= y;
	cout<<"Tu numero mod cinco es: "<<x<<endl;
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
