#include <iostream>
using namespace std;

int main(){
	int dim;
	cout<<"Quanto \212 grande il vettore?"<<endl;
	cin>>dim;
	
	int array[dim];
	
	int somma = 0;
	
	for(int i=0; i<dim; i++){
		 cout<<"Dammi un numero"<<endl;
		 cin>>array[i];
	}
	
	for(int i=0; i<dim; i++){
		cout<<array[i];
	}
	
	for(int i=0; i<dim; i++){
		somma=somma+array[i];
	}
	
	cout<<"La somma \212: "<<somma<<endl;
}
