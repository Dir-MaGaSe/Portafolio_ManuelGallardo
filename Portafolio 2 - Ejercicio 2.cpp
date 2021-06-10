//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(int argc, char** argv){
	cout<<"Tengo "<<argc<<" argumentos: "<<endl;
	for(int i=0; i<argc; i++){
		cout<<argv[i]<<endl;
	}
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
