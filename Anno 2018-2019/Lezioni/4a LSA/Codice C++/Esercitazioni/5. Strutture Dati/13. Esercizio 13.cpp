#include <iostream>
#include <time.h>
#include <stdlib.h>
 using namespace std;
 
 int main(){
 	 //per i numeri casuali da mettere nella matrice
 	 srand(time(0));
 	 //mi faccio dire le dimensioni della matrice
 	 int dim1, dim2;
 	 
 	 cout<<"Dimmi il numero di righe della matrice"<<endl;
 	 cin>>dim1;
 	 
 	 cout<<"Dimmi il numero di colonne della matrice"<<endl;
 	 cin>>dim2;
 	 
 	 //creo la matrice con le dimensioni fornite
 	 int matrix[dim1][dim2];
 	 
 	 //faccio il ciclo for per riempire le celle della matrice
 	 for(int i=0; i<dim1;i++){
 	 	for(int j=0; j<dim2; j++){
 	 		//numeri casuali fino a 99
 	 		matrix[i][j]=rand()%100;
		  }
	  }
	  
	  //faccio il ciclo for per visualizzare le celle della matrice
	  for(int i=0; i<dim1;i++){
 	 	for(int j=0; j<dim2; j++){
 	 		cout<<matrix[i][j]<<"\t";
		  }
		  cout<<endl;
	  }
	  
	  //stampo la riga k (fornito dall'utente)
	  int k;
	  
	  cout<<"Dimmi la riga da stampare"<<endl;
	  cin>>k;
	  
	  for(int i=0;i<dim2;i++){
	  	cout<<matrix[k][i]<<"\t";
	  }
	 return 0;
 }

