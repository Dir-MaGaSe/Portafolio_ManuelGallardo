//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
float promedio(const float arr[], const int n){
	float suma=0.0;
	for(int i=0; i<n; i++){
		suma += arr[i];
	}
	return suma/n;
}
int main(int argc, const char * argv[]){
	//Promedio de 5 números
	const int N=5;
	float numeros[N];
	cout<<"Promedio de 5 némeros:\n";
	for(int i=0; i<N; i++){
		cout<<"Némero "<<(i+1)<<" : "; cin>>numeros[i];
	}
	cout<<"El promedio es: "<<fixed<<setprecision(1)<<promedio(numeros, N)<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
