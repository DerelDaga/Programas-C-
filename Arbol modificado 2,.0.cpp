//Eder asciel Davila Gallegos
//escala de asteriscos
//1 de septiembre
#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{

	int numero;
	string otro;
	int largo;
	int ancho;
	int centro;
	do{
	
	cout<<"Dame el tamaño de la piramide";
	cin>>numero;

for (int i=1;i<=numero;i++){
	for(int j=1;j<=numero-i;j++){
		cout<<" ";
	}
for(int j=1;j<=i;j++){
	cout<<"* ";
}
	cout<<endl;
 } 
 //vamos a poner el trompo del del arbol
 ancho = numero / 3;
 largo = numero / 2;
 centro = numero - (ancho/2);
 
 for (int i=1; i<=largo; i++){
 	for(int j=1; j<=centro;j++){
 		
 		
 		cout<<" ";
	 }
	 for(int j=1;j<=ancho;j++){
	 	cout<<"H";
	 }
	 cout<<endl;
 }
cout<<"deseas otra piramide y/n";
cin>>otro; 

}while(otro!="n");
}
