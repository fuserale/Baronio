#include <iostream>

using namespace std;

int main(){
	int dim;
	cout<<"Dimmi la dimensione del vettore: ";
	cin>>dim;
	//creo il vettore di dimensione dim
	int array[dim];
	//inserisco i valori nel vettore
	for(int i=0;i<dim;i++){
		cout<<"Scrivi un numero intero: ";
		cin>>array[i];
	}
	//faccio la somma dei valori del vettore
	double somma=0;
	for(int i=0;i<dim;i++){
		somma = somma + array[i];
	}
	//calcolo la media
	double media=somma/dim;
	int conta=0;
	for(int i=0;i<dim;i++){
		if(array[i]>media){
			conta++;
		}
	}
	//stampo quanti valori sono maggiori della media
	cout<<"I numero maggiori della media sono: "<<conta<<endl;
}
