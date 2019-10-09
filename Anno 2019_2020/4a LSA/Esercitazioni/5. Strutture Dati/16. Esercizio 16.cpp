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
	  
	  //serve solo per distanziare un pò nella stampa
	  cout<<endl;
	  
	  //stampo solo se gli indici sono identici
	  for(int i=0; i<dim1;i++){
 	 	for(int j=0; j<dim2; j++){
 	 		if(i==j){
 	 			cout<<matrix[i][j]<<"\t";
			  } else {
			  	cout<<"/"<<"\t";
			  }
 	 		
		  }
		  cout<<endl;
	  }
	 return 0;
 }

