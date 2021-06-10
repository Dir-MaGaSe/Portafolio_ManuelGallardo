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

int CompuN(){
	srand(time(0));
	int CompuN = rand() % 3 + 1;
	return CompuN;
}

string ElegirMov(int x){
	string Mov;
		switch(x){
		case 1: Mov = "Piedra"; break;
		case 2: Mov = "Papel"; break;
		case 3: Mov = "Tijeras"; break;
		default: Mov = "Invalido";
	};
	return Mov;
};

void Juego(){
	int JugNum = 0, CompuNum;
	string JugMov, CompuMov;
	cin>>JugNum; 
	cout<<endl;
	
	CompuNum = CompuN();
	JugMov = ElegirMov(JugNum);
	CompuMov = ElegirMov(CompuNum);
		switch(CompuNum){
		case 1:
		if(CompuNum == JugNum){
			cout<<"Computadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
			cout<<"\nHa sido un empate\nGracias por jugar :)"<<endl;
		} else if(JugNum == 2){
				cout<<"\nComputadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
				cout<<"Has ganado :D \nGracias por jugar"<<endl;
			} else {
				cout<<"\nComputadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
				cout<<"Has perdido :( \nGracias por jugar"<<endl;
			}
		 break;
		case 2: 
		if(CompuNum == JugNum){
			cout<<"Computadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
			cout<<"\nHa sido un empate\nGracias por jugar :)"<<endl;
		} else if(JugNum == 3){
				cout<<"\nComputadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
				cout<<"Has ganado :D \nGracias por jugar"<<endl;
			} else {
				cout<<"\nComputadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
				cout<<"Has perdido :( \nGracias por jugar"<<endl;
			}
		 break;
		case 3: 
		if(CompuNum == JugNum){
			cout<<"Computadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
			cout<<"\nHa sido un empate\nGracias por jugar :)"<<endl;
		} else if(JugNum == 1){
				cout<<"\nComputadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
				cout<<"Has ganado :D \nGracias por jugar"<<endl;
			} else {
				cout<<"\nComputadora: "<<CompuMov<<"\tJugador: "<<JugMov<<endl;
				cout<<"Has perdido :( \nGracias por jugar"<<endl;
			}
		 break;
		default: cout<<"Algo malo a pasado, vuelve a intentar :/";
		};
}

int main(){
	cout<<"Bienvenido jugador\nJuega: Piedra, Papel o Tijeras"<<endl;
	cout<<"\nElige numero:\n 1.Piedra\t 2.Papel\t 3.Tijeras\t: "; 
	Juego();
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
