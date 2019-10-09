#include <iostream>
using namespace std;

int leggiNumero(){
	int numero;
	cout<<"Scrivi un numero da sommare"<<endl;
	cin>>numero;
	return numero;
}

int calcolaSomma(int a, int b){
	int c;
	c = a+b;
	return c;
}

void stampaSomma(int somma){
	cout<<"La somma \212: "<<somma<<endl;
}

int main(){
	int num1, num2, somma;
	
	num1 = leggiNumero();
	num2 = leggiNumero();
	somma = calcolaSomma(num1, num2);
	stampaSomma(somma);
}
