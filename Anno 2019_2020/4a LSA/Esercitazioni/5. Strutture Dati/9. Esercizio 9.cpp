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
	//creo il nuovo vettore
	int array2[dim+1];
	//copio il vecchio vettore nel nuovo
	for(int i=0;i<dim;i++){
		array2[i]=array[i];
	}
	cout<<"Dammi un nuovo numero: ";
	cin>>array2[dim];
	//stampo il vecchio vettore
	cout<<"Vecchio vettore: ";
	for(int i=0;i<dim;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	//stampo il nuovo vettore
	cout<<"Nuovo vettore: ";
	for(int i=0;i<dim+1;i++){
		cout<<array2[i]<<" ";
	}
}
