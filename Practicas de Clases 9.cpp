//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>
#include<bitset>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	int x,y;
	cout<<"Ingrese el valor de x: "; cin>>x;
	cout<<"Ingrese el valor de y: "; cin>>y;
	cout<<"\n\tDecimal"<<"\t\tBinario\n"<<endl;
	cout<<"x:\t"<<x<<"\t:\t"<<bitset<8>(x)<<endl;
	cout<<"y:\t"<<y<<"\t:\t"<<bitset<8>(y)<<endl;
	//AND Binario
	int z = x&y;
	cout<<"x & y:\t"<<z<<"\t:\t"<<bitset<8>(z)<<endl;
	//OR Binario
	z = x|y;
	cout<<"x | y:\t"<<z<<"\t:\t"<<bitset<8>(z)<<endl;
	//XOR Binario
	z = x^y;
	cout<<"x ^ y:\t"<<z<<"\t:\t"<<bitset<8>(z)<<endl;
	//Desplazamiento Binario
	z = x<<y;
	cout<<"x << y:\t"<<z<<"\t:\t"<<bitset<8>(z)<<endl;
	//Desplazamiento Binario
	z = x>>y;
	cout<<"x >> y:\t"<<z<<"\t:\t"<<bitset<8>(z)<<endl;
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
