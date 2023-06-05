#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int opcion;
int a1;
cout<<"Gracias por usar este programa-Este programa esta incompleto ya que no esta tomando los datos de una base de datos"<<endl;
cout<<"Este programa de es de Eder Xasiel Davila Gallegos"<<endl;


cout<<" Elige la operacion que desea realizar"<<endl;
cout<<" Escoge entre: & Escoge solamente el numero"<<endl;
cout<<" 1-Aumentar su saldo "<<endl;
cout<<" 2-Hacer un retiro "<<endl;
cout<<" 3-Mostrar su sueldo(imprimir) "<<endl;
cout<<" 4-Salir "<<endl;
cin>>opcion;
cout<<"\n Ponga la numeracion \n"<<endl;
cin>>a1;

switch(opcion)
{
case 1:
cout<<"\n Se Saldo aumento:\n"<<a1<<endl;
break;
case 2:
cout<<"\n Se retiro:\n"<<a1<<endl;
break ;
case 3:
cout<<"\n Su sueldo es: \n "<<a1<<endl;
break;
case 4:
cout<<"\n Escogistes Salir \n"<<endl;
break ;
default:
cout<<"\n Escoge entre los diferentes numeros Por Favor";
break;
}
cout<<"Los datos tomados son de los que se piden por que no estoy agarrando datos de una base de datos"<<endl;
getch();
return(0);
}
