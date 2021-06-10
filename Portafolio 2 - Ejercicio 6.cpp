//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
int main(){
	int numeros[3][3] = {{3,6,-7},
				 		 {-4,8,9},
				 		 {0,-1,2}};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Test["<<i<<"]["<<j<<"]: "<<numeros[i][j]<<"\n";
		}
	}
	cout<<"\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
