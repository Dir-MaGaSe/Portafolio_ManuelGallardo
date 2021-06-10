//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	int x=4,y=6;
	cout<<"(x < y): "<<(x < y)<<"\n";
	cout<<"(x > y): "<<(x > y)<<"\n";
	cout<<"(x <= y): "<<(x <= y)<<"\n";
	cout<<"(x >= y): "<<(x >= y)<<"\n";
	cout<<"(x == y): "<<(x == y)<<"\n";
	cout<<"(x != y): "<<(x != y)<<"\n";
	cout<<"TRUE = 1\tFALSE = 0"<<endl;
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
