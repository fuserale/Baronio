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
		if(array[i]<media){
			conta++;
		}
	}
	//creo il nuovo vettore
	int array2[conta];
	//riempio il vettore
	int posizione = 0;
	for(int i=0;i<dim;i++){
		if(array[i]<media){
			array2[posizione]=array[i];
			posizione++;
		}
	}
	//stampo il nuovo vettore
	for(int i=0;i<conta;i++){
		cout<<array2[i]<<" ";
	}
}
