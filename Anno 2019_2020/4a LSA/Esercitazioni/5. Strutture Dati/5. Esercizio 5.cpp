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
	//stampo la media
	double media=somma/dim;
	cout<<"La media risulta: "<<media<<endl;
}
