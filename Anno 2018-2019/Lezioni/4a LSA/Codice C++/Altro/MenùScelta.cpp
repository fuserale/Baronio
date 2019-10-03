#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int dim;
int mat[100][100];

void caricaMatrice(){
	cout<<"Dimmi la dimensione della matrice"<<endl;
	cin>>dim;
	srand(time(0));
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			mat[i][j] = rand() % 100;
		}
	}
	cout<<endl<<endl;
}

void visualizzaMatrice(){
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			cout<< mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

void diagonale(){
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			if(i==j){
				cout<< mat[i][j]<<"\t";
			} else {
				cout<< "*" <<"\t";
			}	
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

void antiDiagonale(){
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			if(i+j==dim-1){
				cout<< mat[i][j]<<"\t";
			} else {
				cout<< "*" <<"\t";
			}	
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

void stampaRiga(){
	int riga;
	cout<<"Che numero di riga vuoi stampare? Da 0 a "<<dim-1<<endl;
	cin>>riga;
	
	for(int j=0; j<dim; j++){
		cout<<mat[riga][j]<<"\t";
	}
	cout<<endl<<endl;
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
		cout<<"6. Esci"<<endl;
		
		cin>>scelta;
		switch(scelta){
            case 1:
				 caricaMatrice();
				 break;
				 
	        case 2:
	 		 	  visualizzaMatrice();
	 		 	  break;
	 		 	  
	 	    case 3:
	 	  	   diagonale();
	 	  	   break;
	 	  	   
	  	    case 4:
	 	  	   	antiDiagonale();
	 	  	   	break;
	 	  	   	
	  	   	case 5:
	  	   		stampaRiga();
	  	   		break;
	 	  	   	
	  	   	case 6:
	 	  	   		break;
		}
	} while(scelta != 6);
}
