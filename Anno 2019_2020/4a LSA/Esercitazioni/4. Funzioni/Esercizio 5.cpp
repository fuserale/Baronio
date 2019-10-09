#include <iostream>
using namespace std;

int calcolaPari(int numero){
	int somma = 0;
	for(int i=1; i<=numero; i++){
		if(i%2 == 0){
			somma = somma + i;
		}
	}
	cout<<"La somma dei pari fino a "<<numero<<" \212: "<<somma<<endl;
	return somma;
}

int calcolaDispari(int numero){
	int somma = 0;
	for(int i=1; i<=numero; i++){
		if(i%2 == 1){
			somma = somma + i;
		}
	}
	cout<<"La somma dei dispari fino a "<<numero<<" \212: "<<somma<<endl;
	return somma;
}

int main(){
	int N, sommaPari, sommaDispari;
	
	cout<<"Scrivi un numero"<<endl;
	cin>>N;
	
	sommaPari = calcolaPari(N);
	sommaDispari = calcolaDispari(N);
}
