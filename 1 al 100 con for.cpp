//25 de agosto
//Eder JascielDavila Gallegos
//genera una secuencia de numero y cuando el numero sea multiplo de 4 lo imprime
#include <iostream>
#include <stdlib.h>
using namespace std;

 


int main(){
    for(int i=1; i<=100; i=i+1){
        if ( i % 4 ==0)
            cout << "weno, ";
        else
           cout << i  <<", ";
      }
    cout << endl;
    system("pause");
} // fin de main
