//Nombre: Manuel Sebastián Gallardo Vásquez
//Carnet: GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	int rango = 0,x = 0, y = 0, z = 0, a = 1;
	cout<<"Calcule el némero con mas divisores exactos en el rango de 1 a [n]:\n";
	cout<<"Ingrese el valor de [n]: "; cin>>rango;
	for(int i=1,n=1; i<=rango; i++){
		//cout<<i<<" es divisible con: ";
		while(n <= rango){
			if(i % n == 0){
				//cout<<n<<" ";
				x++;
			}
			n++;
		}
		if(x > y){
			y = x;
			z = i;
		};
		n = 1;
		x = 0;
		//cout<<endl;
	};
	cout<<endl<<z<< " tiene: "<<y<<" divisores que son:"<<endl;
	while(a <= rango){
			if(z % a == 0){
				cout<<a<<" ";
			}
			a++;
		}
	cout<<endl; 
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
