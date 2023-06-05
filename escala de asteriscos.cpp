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
cout<<"deseas otra piramide y/n";
cin>>otro; 

}while(otro!="n");
}
