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
	//azzero il primo elemento del vettore
	array[dim-1]=0;
	//stampo i valori del vettore
	for(int i=0;i<dim;i++){
		cout<<array[i]<<" ";
	}
}
