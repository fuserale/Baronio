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
	//stampo il vettore di indici pari
	cout<<"Vettore: ";
	for(int i=0;i<dim;i+=2){
		cout<<array[i]<<" ";
	}

}
