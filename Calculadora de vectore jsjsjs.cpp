//prograna de una calculadorade vectores
//se utiliza  un menu para el acceso a las diferentes opciones
//9 de septiembre del 2021
//Eder Jasciel Davila Gallegos

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;

int main(){
	srand (time(0));

int opcion;
int v1[10];
int v2[10];
int v3[10];//Su ma, resta, multiplicacion
float v4 [10];//Division
string signo;
do{
	system("cls");
	cout<<"CALCULADORA DE VECTORAS XD"<<endl;
	cout<<"Suma<<<<<<<<<<<<<  1  >>>>>>"<<endl;
	cout<<"Resta<<<<<<<<<<<<  2  >>>>>>"<<endl;
	cout<<"Multiplicacion<<<  3  >>>>>>"<<endl;
	cout<<"Division<<<<<<<<<  4  >>>>>>"<<endl;
	
	cout<<"Salir<<<<<<<<<<<<  5  >>>>>>"<<endl;
	
	cout<<"adame la opcion";
	cin>>opcion;
    //llena los vectores de manera aleatoria
    for (int i=0; i<10;i++){
    	v1[i]=1+rand()%50;
    	v2[i]=1+rand()%50;
	}//fin del for
	switch(opcion){
          case 1: for(int i=0;i<10;i++){
		v3[i]=v1[i]+v2[i];	
		  }
		  signo="+";
		
		  break;
          case 2:for(int i=0;i<10;i++){
		v3[i]=v1[i]-v2[i];	
		  }
		  signo="-";
		 break;
          case 3:
          	for(int i=0;i<10;i++){
		v3[i]=v1[i]*v2[i];	
		  }
		  signo="X";
		break;
          
		
          case 4:for(int i=0;i<10;i++){
		v4[i]=float(v1[i])/float(v2[i]);	
		  }
		  signo="/";
		break;

         default: cout<<"\n ESO NO EXISTE COMPA Por Favor";
   
        system("pause");
   }   //Fin del switch
   if((opcion>=1) && (opcion <=4)){
   
   for (int i=0;i<10;i++){
   	cout<<setw(10)<<v1[i];
   	cout<<setw(10)<<v2[i];
   	cout<<setw(10)<<signo;
   	cout<<setw(10)<<"=";
   	cout<<setw(10)<<v3[i];
   	
  if (opcion ==4)
      cout<<setw(10)<<v4[i]<<endl;
  else
      cout<<setw(10)<<v3[i]<<endl;
   
}
   //imprimir los vectores
}while (opcion!=5);


}//fin de main
	



