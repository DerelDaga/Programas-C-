#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int opcion;

cout<<"Elige la opcion deseada del 1 al 4"<<endl;
cin>>opcion;
switch(opcion)
{

case 1:
cout<<"Elegistes el 1"<<endl;
break;
case 2:
cout<<"Elegistes el 2"<<endl;
break;
case 3:
cout<<"Elegistes el 3"<<endl;
break;
case 4:
cout<<"Elegistes el 4"<<endl;
break;
default:
cout<<"No es un numero valido"<<endl;
break;
}
getch();
return(0);
}
