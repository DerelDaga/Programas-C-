#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main (){
	srand(time(0));

int num;
string otro;

do{

for(int i=0; i<100;i++){
	num=1+rand()%50;
cout<<num<<",";
}

cout<<"vas a poner otra serie? s/n";
cin>>otro;
}while (otro!="n");


return 0;


system("pause");
}
