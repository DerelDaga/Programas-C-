// programa que genera 100 numeros aleatorios
// 30 de agosto
// Eder Jasciel Davila Gallegos

 

#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

 

int main(){
    srand(time(0)); // generar semilla
    int numero;
    int i;
    //string otro;
    
        cout << "100 numeros utilizando un for"<< endl;
        for(i=0; i<100; i++){
            numero = 1 + rand()%500;
            cout << numero << ", ";
        } // fin del for
        
        cout << endl;
        
        cout << "100 numeros usando un while "<< endl;
        i=0;
        while(i<100){
            numero = 1 + rand()%500;
            cout << numero << ", ";
            i++;
           }
}

