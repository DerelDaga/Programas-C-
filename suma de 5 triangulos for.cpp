//25 de agosto
//Eder JascielDavila Gallegos(Xasiel)
//area de 5 triangulos
//Datos:Base, Altura, 

#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	float a1;
	float b2;
	float c3;
	float f4;
	float g5=0;
	
	for(int i=1; i<=5;i++){
		cout<<"Favor de poner la base del triangulo:";
		cin>>a1;
		
		cout<<"Favorde poner la altura del triangulo:";
		cin>>b2;
		
		f4=a1*b2/2;
		
		cout<<"El area de los triangulos es"<<i
	<<"es--> " <<f4<<endl;

	}
		f4=f4+f4+f4+f4+f4;
  
  cout <<f4<< "Es el area de los triangulos"<<endl;
  
	system("pause");
		}
	
	
