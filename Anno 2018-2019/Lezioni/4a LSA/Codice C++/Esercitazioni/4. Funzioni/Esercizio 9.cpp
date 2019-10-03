#include <iostream>
using namespace std;

int leggiAltezza(){
	int altezza;
	cout<<"Scrivi l'altezza"<<endl;
	cin>>altezza;
	return altezza;
}

int aumentaSomma(int somma, int altezza){
	somma+=altezza;
	return somma;
}

double calcolaMedia(int somma, int numero){
	double media;
	media = (double)somma/numero;
	return media;
}

int main(){
	int numero, altezza;
	int somma = 0;
	double media;
	
	cout<<"Quante persone devi misurare?"<<endl;
	cin>>numero;
	
	for(int i=0;i<numero;i++){
		altezza = leggiAltezza();
		somma = aumentaSomma(somma, altezza);
	}
	media = calcolaMedia(somma, numero);
	cout<<"Media delle altezze: "<<media<<endl;
}
