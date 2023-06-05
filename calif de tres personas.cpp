//26 de agosto
//Eder JascielDavila Gallegos
//3 calif con su ciclo con su calificacion y promedio
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
string nombre;
int suma;
float promedio;
int calif;
float promglobal=0;
	
	for(int i=1; i<=5;i++)
	{//alumnos
	suma=0;
	cout<<"proceso del alumno"<<i<<endl;
	
	cout<<"Cual es tu nombre?----"<<endl;
		cin>>nombre;
		
			for(int j=1; j<=3;j++){//calificaciones
		cout<<"pon la calificacion---"<<j<<endl;
		cin>>calif;
		
	suma=suma+calif;
		
	promedio=suma/3.0;
	promglobal=promglobal+promedio;
	cout<<"El alumno"<<nombre<<endl;
	cout<<"Su promedio es "<<promglobal<<endl;
	       }
	}
		
		promglobal=promglobal/5;
		cout<<"El promedio de todos es:-----"<<promglobal<<endl;
		
			system("pause");
			}
	//XASIEL
