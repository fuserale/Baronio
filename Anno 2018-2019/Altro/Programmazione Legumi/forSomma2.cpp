#include <iostream>
#include <string.h>
#include <time.h>
#include <math.h>

using namespace std;

int main(){
   int num;
   cout<<"dammi un numero "<<endl;
   cin>>num;
   
   int somma=0;
   for(int i=0;i<=num;i++){
      cout<<"il numero che sto sommando \212: "<<i<<endl;
      somma=somma+i;
   }
   
   cout<<"La somma \212: "<<somma<<endl;
   double fattore=1;
   for(int i=1;i<=num;i++){
      cout<<"il numero che sto moltiplicando: "<<i<<endl;
      fattore=fattore*i;
   }
   cout<<"il fattoriale del numero \212: "<<fattore<<endl;
	return 0;
}

