/*Portafolio UN3 - --- Programa 7
  Nombre: Manuel Gallardo
  Carnet: GV100520*/
#include<iostream>
#include<array>
using namespace std;

int main(int argc, char*argv[]){
	array<int,3> a = {8, 9, 10};
	
	cout<<a.size()<<endl;
	cout<<a.front()<<endl;
	cout<<a.back()<<endl;
	
	cout<<a[0]<<a[1]<<a[2]<<endl;
	return 0;
}
