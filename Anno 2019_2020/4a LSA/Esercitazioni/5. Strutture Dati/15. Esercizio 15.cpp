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
	  
	  //calcolo la somma di ogni colonna
	  int somma=0;
	  
	  //rispetto a prima, devo cambiare il ruolo degli indici i e j
	  for(int i=0; i<dim1;i++){
 	 	for(int j=0; j<dim2; j++){
 	 		somma=somma+matrix[j][i];
		  }
		  cout<<"Somma colonna "<<i<<": "<<somma<<endl;
		  somma=0;
	  }
	 return 0;
 }

