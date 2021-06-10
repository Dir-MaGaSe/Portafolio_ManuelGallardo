//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	cout<<"Tamanio de char: "<<sizeof(char)<<" byte"<<endl;
	cout<<"Tamanio de int: "<<sizeof(int)<<" byte"<<endl;
	cout<<"Tamanio de int corto: "<<sizeof(int short)<<" byte"<<endl;
	cout<<"Tamanio de int largo: "<<sizeof(int long)<<" byte"<<endl;
	cout<<"Tamanio de int largo firmado: "<<sizeof(int long signed)<<" byte"<<endl;
	cout<<"Tamanio de unsigned long int: "<<sizeof(unsigned long int)<<" byte"<<endl;
	cout<<"Tamanio de float: "<<sizeof(float)<<" byte"<<endl;
	cout<<"Tamanio de double: "<<sizeof(double)<<" byte"<<endl;
	cout<<"Tamanio de wchar_t: "<<sizeof(wchar_t)<<" byte"<<endl;
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
