#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int opcion;
int a1,b2,c3;
cout<<" Elige la operaciom deseada"<<endl;
cout<<" Escoge entre: & Escoge solamente el numero"<<endl;
cout<<" 1-Suma "<<endl;
cout<<" 2-Resta "<<endl;
cout<<" 3-Multiplicacion "<<endl;
cout<<" 4-Division "<<endl;
cin>>opcion;
cout<<"\n Pon el primer numero de la operacion \n"<<endl;
cin>>a1;
cout<<"\n Pon el segundo numero \n "<<endl;
cin>>b2;
switch(opcion)
{
case 1:
cout<<"\n Escogistes suma: Y el resultado es:\n"<<(a1+b2)<<endl;
break;
case 2:
cout<<"\n Escogistes Resta:  Y el resultado es:\n"<<(a1-b2)<<endl;
break ;
case 3:
cout<<"\n Escogistes Multiplicacion: Y el resultado es: \n "<<(a1*b2)<<endl;
break;
case 4:
cout<<"\n Escogistes Division: Y el resultado es: \n"<<(a1/b2)<<endl;
break ;
default:
cout<<"\n Escoge entre: Suma-Resta-Multiplicacion-Division Por Favor";
break;
}
cout<<"Gracias por usar este programa-Me equivoque muchas veces para poderlo hacer gracias";
getch();
return(0);
}
