#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int dim;
int mat[100][100];

void caricaMatrice(){
	srand(time(0));
	cout<<"Dammi la dimensione della matrice"<<endl;
	cin>>dim;
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			mat[i][j] = rand() % 100;
		}
	}
}

void visualizzaMatrice(){
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void diagonale(){
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			if(i==j){
				cout<<mat[i][j]<<"\t";
			} else {
				cout<<"*"<<"\t";
			}
		}
		cout<<endl;
	}
}

void antiDiagonale(){
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			if(i+j==dim-1){
				cout<<mat[i][j]<<"\t";
			} else {
				cout<<"*"<<"\t";
			}
		}
		cout<<endl;
	}
}

void stampaRiga(){
	int riga;
	cout<<"Che riga vuoi stampare?"<<endl;
	cin>>riga;
	for(int i=0;i<dim;i++){
		cout<<mat[riga][i]<<"\t";
	}
	cout<<endl;
}

void stampaColonna(){
	int colonna;
	cout<<"Che colonna vuoi stampare?"<<endl;
	cin>>colonna;
	for(int i=0;i<dim;i++){
		cout<<mat[i][colonna]<<"\t";
	}
	cout<<endl;
}

void fine(){
	cout<<"Hai finito!"<<endl;
}

int main(){
	int scelta;
	cout<<"Menu' di scelta"<<endl<<endl;
	do{
		cout<<"1. Riempi Matrice"<<endl;
		cout<<"2. Visualizza Matrice"<<endl;
		cout<<"3. Visualizza diagonale"<<endl;
		cout<<"4. Visualizza anti-diagonale"<<endl;
		cout<<"5. Visualizza una riga"<<endl;
		cout<<"6. Visualizza una colonna"<<endl;
		cout<<"7. Esci"<<endl;

		cin>>scelta;

		//per ogni caso, chiama la funzione corrispondente
		switch(scelta){
			case 1: caricaMatrice();
			break;

			case 2: visualizzaMatrice();
			break;

			case 3: diagonale();
			break;

			case 4: antiDiagonale();
			break;

			case 5: stampaRiga();
			break;

			case 6: stampaColonna();
			break;

			case 7: fine();
			break;

			default:
			cout<<"Hai sbagliato numero, ritenta!"<<endl;
		}
	} while(scelta != 7);
}
