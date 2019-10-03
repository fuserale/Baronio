#include <iostream>
#include <math.h>
using namespace std;
int main(){
int num;
int somma = 0;
int media;
int numMax=0;
int numMin=65636;
int contabile = 0;
cout<<"dammi un numero"<<endl;
cin>>num;
while(num!=0){
  somma=somma+num;
  numMax = max(numMax, num);
  numMin = min(numMin, num);
  contabile++;
  cout<<"dammi un altro numero"<<endl;
  cin>>num;
}
media = somma/contabile;
cout<<"il valore della somma \212: "<<somma<<endl;
cout<<"il valore piu' grande \212: "<<numMax<<endl;
cout<<"ilvalore piu' piccolo \212: "<<numMin<<endl;
cout<<"la media dei tuoi valori \212: "<<media<<endl;
cout<<"hai inserito "<<contabile<<" valori"<<endl;
}
