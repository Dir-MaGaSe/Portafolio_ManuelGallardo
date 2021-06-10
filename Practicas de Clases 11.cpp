//Manuel Sebastian Gallardo Vasquez
//GV100520
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";

int main(){
	int x,y;
	bool b1 = true, b2 = false;
	cout<<"Valor de x: "; cin>>x; cout<<"Valor de y: "; cin>>y;
	cout<<endl;
	if(x<y){cout<<"x < y\n";}
	if(x<=y){cout<<"x <= y\n";}
	if(x==y){cout<<"x == y\n";}
	if(x!=y){cout<<"x != y\n";}
	if(x>y){cout<<"x > y\n";}
	if(x>=y){cout<<"x >= y\n"<<endl;}
	if(b1&&b2){cout<<"b1 AND b2\n";}
	if(!(b1&&b2)){cout<<"NOT (b1 AND b2)\n";}
	if(b1||b2){cout<<"b1 OR b2\n";}
	if(!(b1||b2)){cout<<"NOT (b1 OR b2)\n";}
	cout<<"\n"<<Autor<<"\t"<<Carnet<<endl;
	getch();
	return 0;
}
