#include<iostream>
#include<conio.h>
using namespace std;
int suma (int x, int y);
int main()
{
int n1,n2;
cout<<"\n Pon los valoresw num1 e num2";
cin>>n1;
cin>>n2;
suma(n1,n2);
cout<<"\n el numero mayor es"<<suma(n1,n2)<<endl;
getch();
return(0);
}
int suma(int x,int y)
{	
int resultado;

if(x>y)
resultado=x;
else
resultado=y;
return (resultado);
}
