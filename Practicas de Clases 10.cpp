//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>
#include<cstdlib>
#include<ctime>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	char VerNum = 'n';
	int n;
	srand(time(0));
	string CompuMov;
	int magico = rand() % 10 + 1;
	cout<<"N�mero Magico!\nAdivina un n�mero del 1 al 10\n\nIngresa tu n�mero: ";
	cin>>n;
	if(n == magico){
		cout<<"\nHAS ACERTADO!!!\nComo lo hicistes?";
	} if(n < magico){
		cout<<"\nFallastes\ntu n�mero es menor"<<endl;
		cout<<"Quieres saber cual es? [y/n]: "; cin>>VerNum;
	} if(n > magico){
		cout<<"\nFallastes\ntu n�mero es mayor"<<endl;
		cout<<"Quieres saber cual es? [y/n]: "; cin>>VerNum;
	}
	if(VerNum == 'y'){
		cout<<"\nEl n�meru era: "<<magico<<"\nGracias por jugar :)"<<endl;
	} else{
		cout<<"\nGracias por jugar :)"<<endl;
	}
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
