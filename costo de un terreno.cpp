//25 de agosto
//Eder JascielDavila Gallegos
//programa que calcula el precio de 5 terrenos 
//Datos:Base, Altura, y el costo
//al final del reporte imprima el total por los 5 terrenos
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	float base;
	float altura;
	float costo;
	float PrecioTerreno;
	float total=0;
	
	for(int i=1; i<=5;i++){
		cout<<"Favor de poner la base:";
		cin>>base;
		
		cout<<"Favorde poner la altura:";
		cin>>altura;
		
		cout<<"Favor de poner el costo por terreno:";
		cin>>costo;
		
		PrecioTerreno=base*altura*costo;
		cout<<"El precio del terreno"<<i
	<<"es--> " <<PrecioTerreno<<endl;
	total=total+PrecioTerreno;
	}
	
cout<<"El total a pagar por los 5 terrenos-->"
<<total<<endl;
	system("pause");
		}
	//XASIEL
