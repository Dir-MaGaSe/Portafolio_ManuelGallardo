//Manuel Sebastián Gallardo Vásquez
//GV100520
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
const string Autor = "Manuel Sebastian Gallardo Vasquez";
const string Carnet = "GV100520";
const int Estudiantes = 3;
const int Evaluaciones = 4;
//Declarar prototipos de funciones
double minima(double[][Evaluaciones], int, int);
double maxima(double[][Evaluaciones], int, int);
double promedio(double[], int);
void imprimirArreglo(double[][Evaluaciones], int, int);
int main(int argc, const char * argv[]){
	double Notas[Estudiantes][Evaluaciones] = {{9.8, 8.9, 7.8, 7.6},
											{9.1, 8.8, 10.0, 7.8},
											{6.9, 8.4, 7.9, 7.7}};
	
	cout<<"Las calificaciones son: \n"<<endl;
	imprimirArreglo(Notas, Estudiantes, Evaluaciones);
	
	cout<<setprecision(1);
	cout<<"\n\nNota maxima: "<<maxima(Notas, Estudiantes, Evaluaciones);
	cout<<"\nNota m¡nima: "<<minima(Notas, Estudiantes, Evaluaciones)<<endl;
	
	for(int i=0; i<Estudiantes; i++){
		cout<<"\nPromedio Estudiante ["<<i+1<<"]: ";
		cout<<promedio(Notas[i], Evaluaciones);
	}
	
	cout<<"\n\nAutor: "<<Autor<<"\tCarnet: "<<Carnet<<endl;
	getch();
	return 0;
}
double minima(double notas[][Evaluaciones], int alumnos, int examenes){
	double notaMinima = 10.0;
	for(int i=0; i<alumnos; i++){
		for(int j=0; j<examenes; j++){
			if(notas[i][j] < notaMinima){
				notaMinima = notas[i][j];
			}
		}
	}
	return notaMinima;
}
double maxima(double notas[][Evaluaciones], int alumnos, int examenes){
	double notaMaxima = 0.0;
	for(int i=0; i<alumnos; i++){
		for(int j=0; j<examenes; j++){
			if(notas[i][j] > notaMaxima){
				notaMaxima = notas[i][j];
			}
		}
	}
	return notaMaxima;
}
double promedio(double ConjuntoDeNotas[], int examenes){
	double total = 0.0;
	for(int i=0; i<examenes; i++){
		total += ConjuntoDeNotas[i];
	}
	return total/examenes;
}
void imprimirArreglo(double notas[][Evaluaciones], int alumnos, int examenes){
	cout<<"\t\t       [1]  [2]  [3]  [4]";
	for(int i=0; i<alumnos; i++){
		cout<<"\nNotas Estudiante["<<i+1<<"]: ";
		for(int j=0; j<examenes; j++){
			cout<<setw(5)<<fixed<<setprecision(1)<<notas[i][j];
		}
	}
}
