//Ciclo anidado
//tablas de multiplicar
//Eder Jasciel Davil Gallegos
//26 de agosto del 2021
#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{

for(int i=1;i<=10;i++){
	cout<<"Tabla del:"<<i<<endl;
	for (int j=1;j<=10;j++){
		cout<<setw(5)<<i;
		cout<<setw(5)<<"x";
		cout<<setw(5)<<"=";
		cout<<setw(5)<<i*j<<endl;
		}
		cout<<"--..--..--..--..--..--..--..--"<<endl;
	}
return 0;
	system("pause");
}

