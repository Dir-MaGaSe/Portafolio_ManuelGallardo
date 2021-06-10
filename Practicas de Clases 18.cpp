//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	int year;
	cout<<"Ingresa tu anio: "; cin>>year;
	if(year % 4 == 0){
		if(year % 100 == 0){
			if(year % 400 == 0){
				cout<<year<<" es anio biciesto"<<endl;
			} 
		} 
		cout<<year<<" es anio biciesto"<<endl;
	} else{
		cout<<"No es anio biciesto"<<endl;
	}
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
