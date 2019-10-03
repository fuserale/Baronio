#include<iostream>
using namespace std;
int main(){
int num=10;
int numPari=0;
int numDispari=0;
int sommaPari=0;
int sommaDispari=0;
for(int i=0;i<10;i++){
  cout<<"dammi un numero: "<<endl;
  cin>>num;
  if(num%2==0){
    numPari++;
    sommaPari=sommaPari+num;
  }else{
    numDispari++;
    sommaDispari=sommaDispari+num;
  }
}

cout<<"i numeri pari in totale sono: "<<numPari<<endl;
cout<<"i numeri dispari sono: "<<numDispari<<endl;
cout<<"la somma dei tuoi numeri pari \212: "<<sommaPari<<endl;
cout<<"la somma dei tuoi numeri dispari \212: "<<sommaDispari<<endl;
}
