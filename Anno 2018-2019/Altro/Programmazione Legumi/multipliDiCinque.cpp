#include<iostream>
using namespace std;
int main(){
int somma = 0;
for (int i = 10; i<101;i++){
  if(i%5==0){
    somma=i+somma;
    cout<<"Numero: "<<i<<" e somma: "<<somma<<endl;
  }else{

  }
}
cout<<"la somma di tutti i numeri multipli di 5 \212: "<<somma<<endl;
}
