//Manuel Sebastian Gallardo Vasquez
//GV100520
#include "calculadora.h"
#include<conio.h>
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	double num1, num2, resultado = 0;
	char operador, usar = 'y';
	cout<<"Calculadora de dos némeros:\n";
	do{		
	num1 = PedirNumero("Primer Némero: ");
	num2 = PedirNumero("Segundo Némero: ");
	operador = PedirOperador();
	switch(operador){
		case '+': resultado = sumar(num1,num2); 
			cout<<"\nEl resultado es: "<<resultado<<endl;
			break;
		case '-': resultado = restar(num1,num2); 
			cout<<"\nEl resultado es: "<<resultado<<endl;
			break;
		case '*': resultado = multiplicar(num1,num2); 
			cout<<"\nEl resultado es: "<<resultado<<endl;
			break;
		case '/': resultado = dividir(num1,num2); 
			cout<<"\nEl resultado es: "<<resultado<<endl;
			break;
		default: cout<<"Operador insostenible"; 
	}
		cout<<"\nUsar calculadora de nuevo?[y/n]: "; cin>>usar; cout<<"\n";
	}while(usar == 'y');
	cout<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
