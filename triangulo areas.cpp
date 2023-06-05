#include <iostream>
using namespace std;
int main()

{ 
cout <<"Eder Jasciel Davila Gallegos \n";//saca el area de un triangulo 2D

  int numero1;//variable 1
  
  int numero2;//variable 2
  
  int resultado;//La respuesta
  
  cout << "Pon la base del triangulo \n";
  
  cin >> numero1;
  
  cout << "Pon la altura del triangulo \n";
  
  cin >> numero2;
  
  resultado = numero1 * numero2 / 2;//La operacion de la formula base por altura entre dos
  
  cout << resultado << "Es el area del triangulo";//La respuesta es esta
  
  return 0;
}
