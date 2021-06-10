//Nombre: Manuel Sebastián Gallardo Vásquez
//Canet: GV100520
#include<iostream>
#include<string>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
unsigned long long int factorial(int n){
	if(n<0) return(-1);
	if(n==0) return(1);
	else{cout<<" n = "<<n<<endl;}
	return(n*factorial(n-1));
}

int main(){
	int value;
	cout<<"Encuentre el factorial de un némero: "; cin>>value;
	cout<<"El factorial del numero dado es: "<<factorial(value)<<endl;
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	return 0;
}
