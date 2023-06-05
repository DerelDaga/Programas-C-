// programa que obtiene el costo de un terreno
// se calcula el promedio
// se cicla hasta que el usuario ya no quiera realizar calculos
// 31 de agosto
// Eder Jasciel Davila Gallegos

 

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

 

int main(){
    float promedio;
    float promedio1;
    float promedio3;
    float totalCalif;
    string otro;
    int cnt=0;
    float todo=0;
    int Frijoles=3;
    do{
        cnt=cnt+1;
        cout << "Dame la calificacion";
        cin >> promedio;
        cout <<"Dame la calificacion ";
        cin >> promedio1;
        cout << "Dame la calificacion ";
        cin >> promedio3;
        totalCalif = (promedio+promedio1+promedio3/ Frijoles);
          todo=todo+totalCalif;
        cout << "El promedio es:------ "<< totalCalif << endl;
        cout <<"Deseas procesar otro promedio?-------- s/n------ ";
        cin >> otro;
    } while(otro!="n");
  
    cout << "Calificaciones procesadas "<< cnt << endl;
    cout << "Total de todos las calificaciones "<< todo << endl;
    
} // fin de main
