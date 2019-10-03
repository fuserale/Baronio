#include <iostream>
#include <stdlib.h>
using namespace std;

const int dim = 6;
int mat[dim][dim];

void riempiMatrice(){
	//riempio la matrice
	for(int j=0; j< dim; j++){
		for(int i=0;i<dim;i++){
			mat[i][j] = dim - i;
		}
	}
	return;
}

void stampaMatrice(){
	//visualizzo la matrice
	for(int j=0; j< dim; j++){
		for(int i=0;i<dim;i++){
			cout<<mat[i][j]<< "\t";
		}
		cout<<endl;
	}
}

int main(){
	
	//i sta per righe, j sta per colonne
	riempiMatrice();
	
	stampaMatrice();
}


