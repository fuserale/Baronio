#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


//funzione di caricamento dei valori


//funzione di visualizzazione della Matrice


//funzione del totale della riga e stampaColonna


//funzione della diagonale secondaria


//funzione della media della matrice




int main(){
  int scelta;
	cout<<"Menu' di scelta"<<endl<<endl;
	do{
		cout<<"1. Riempi Matrice"<<endl;
		cout<<"2. Visualizza Matrice"<<endl;
		cout<<"3. Visualizza totale colonna e riga"<<endl;
		cout<<"4. Visualizza anti-diagonale"<<endl;
		cout<<"5. Visualizza media matrice"<<endl;
		cout<<"6. Esci"<<endl;

		cin>>scelta;

		//per ogni caso, chiama la funzione corrispondente
		switch(scelta){
			case 1:
			break;

			case 2:
			break;

			case 3:
			break;

			case 4:
			break;

			case 5:
			break;

			case 6:
			break;

			default:
			cout<<"Hai sbagliato numero, ritenta!"<<endl;
		}
	} while(scelta != 6);
}
