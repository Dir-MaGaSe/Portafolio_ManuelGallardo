//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<iomanip>
#include<array>
#include<conio.h>
using namespace std;
const int Elementos=5;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	array<int,Elementos> arr = {31,25,60,20,100};
	cout<<"Elemento"<<setw(13)<<"Valor"<<endl;
	for(size_t i = 0; i < arr.size(); i++){
		cout<<setw(8)<<i<<setw(13)<<arr[i]<<endl;
	}
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet; getch();
	return 0;
}
