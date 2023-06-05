#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
char a1;

	while(a1=5)
    {
cout<<"Pon el caracter(con minusculas)\n";
cin>>a1;
		
//Maestra el if sirve como una candicion de que si se cumple da sierta conclucio y si no es lo que se especifico da otra conclucion
if(a1=='a' || a1=='e' || a1=='i' || a1=='o' || a1=='u')

cout<<"Es una vocal \n";
else
cout<<"No es vocal \n";
cout<<"Si quieres salir del programa presiona tacha que esta en la izquierda\n";

	}	
	

	getch ();
	return (0);
}
