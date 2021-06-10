//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<string>
#include<array>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	string nombres[5] = {"Jose", "Erick", "Diego", "Krista", "Manuel"};
	array<string,5>nombres2 = {"Gustavo", "Enmanuel", "Briam", "Alejandra", "Graham"};
	int tamanio = sizeof(nombres)/sizeof(nombres[0]);
	int tamanio2 = nombres2.size();
	for(int i=0; i<tamanio; i++){
		cout<<nombres[i]<<endl;
	}
	for(int i=0; i<tamanio2; i++){
		cout<<nombres2[i]<<endl;
	}
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet; getch();
	return 0;
}
