#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;
int main()
{
	int matriz [50][50] ;
	int i,j,fil,col;
	cout<<"´Pon las filas de la maatriz";
	cin>>fil;
	cout<<"Pon las columnas de la matriz";
	cin>>col;
	
	
for(i=0;i<fil;i++)
{
	for (j=0;j<col;j++)
	{
	cout<<"Pon el numero pa wardar:" << i <<" , " <<j<<" ";
	cin>>matriz[i][j];
	}
	cout<<"\n";
	}
	for	(i=0;i<fil;i++);
	{
	for(j=0;j<col;j++)
	{
	cout<<matriz[i][j]<<" ";
	}
		cout<<"\n\n";
}
getch();
return(0);
	
}

