//26 de agosto
//Eder JascielDavila Gallegos
//3 calif con su ciclo con su calificacion y promedio
#include <iostream>
#include <stdlib.h>
using namespace std;
#include <iostream>
#include <stdlib.h>
using namespace std;

 

int main(){
    string nombre;
    int suma;
    float prom;
    int cal;
    float promG=0;
    int cntAp=0;
    int cntRep=0;
    
    
    for(int i=1; i<=5; i++){ // controla los alumnos
       suma =0;
       cout << "Proceso Alumno "<< i<<endl;
       cout << "Dame el nombre ";
       cin >> nombre;
        
       for(int j=1; j<=3; j++){ // controla las calificaciones
              cout << "Dame la calificacion "<< j << " --> ";
              cin >> cal;
              suma = suma + cal;
       } // fin de la j
       prom = suma / 3.0;
       if (prom>=6)
          cntAp=cntAp + 1;
       else
          cntRep= cntRep +1;   
          
       
       
       promG = promG + prom;
        
       cout << "El alumno "<< nombre << endl;
       cout << "Su promedio es "<< prom << endl;
       cout << "------------------------------" << endl;
        
    } // fin de la i
    
    promG = promG /5;
    cout << "El promedio del grupo es "<< promG << endl;
    cout << "El numero de aprobados : " << cntAp << endl;
    cout << "El numero de reprobados : "<< cntRep << endl;
    system("pause");	}
	//XASIEL
