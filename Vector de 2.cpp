#include <iostream>
using namespace std;
 
int main() 
     
   {
    int Vector[14] ,positivo,negativo,cero,i;
    positivo=0;
    negativo=0;
    cero=0;
	
  
    for(i=0;i<14;i++)
    {
        cout<<"pon los numeros";
        cin>> Vector[i];
        if (Vector[i]>0)
        {
            positivo+=+1;
        }
        else
        if(Vector[i]<0)
        {
            negativo+=+1;
        }
        else
        cero+=+1;
    }

    cout<<"\nLa Cantidad de Positivos Son:"<<positivo<<endl;
    cout<<"\nLa Cantidad de Negativos Son:"<<negativo<<endl;
    cout<<"\nLa Cantidad de Ceros Son:"<<cero<<endl;
    return (0);
}

	


