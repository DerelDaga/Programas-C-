#include <iostream>
#include <conio.h>
float base;
float altura;
float resultado;
using namespace std;
//este programa permite calcular el area de un triangulo y deducir si es mayor o menor a 100
int main(){
cout << "Ingrese la base del triangulo: ";
cin >> base;
cout << "Ingrese la altura del triangulo: ";
cin >> altura;
resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.
cout << "El area de su triangulo es: " << resultado ;
if(resultado>=0)
{
cout<<"Numero positivo";
}
else
cout<<"	Numero negativo";
getch();
return (0);
}
