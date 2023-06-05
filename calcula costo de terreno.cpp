// programa que obtiene el costo de un terreno
// se captura la base, altura y costo por metro
// se calcula el costo del terreno
// se cicla hasta que el usuario ya no quiera realizar calculos
// 31 de agosto
// Eder Jasciel Davila Gallegos

 

#include <iostream>
#include <stdlib.h>
using namespace std;

 

int main(){
    float largo;
    float ancho;
    float costoMetro;
    float totalTerreno;
    string otro;
    int cnt=0;
    float total=0;
    
    
    do{
        cnt=cnt+1;
        cout << "Dame el largo del terreno ";
        cin >> largo;
        cout <<"Dame el ancho del terreno ";
        cin >> ancho;
        cout << "Dame el costo por metro ";
        cin >> costoMetro;
        totalTerreno = largo * ancho * costoMetro;
        total = total + totalTerreno;
        cout << "El costo del terreno es "<< totalTerreno << endl;
        cout <<"Deseas procesar otro terreno s/n ";
        cin >> otro;
    } while(otro!="n");
    cout << "Terrenos procesados "<< cnt << endl;
    cout << "Total de todos los terrenos "<< total << endl;
    
} // fin de main
