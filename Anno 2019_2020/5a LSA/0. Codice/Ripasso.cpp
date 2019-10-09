// librerie per aggiungere funzionalità
#include <iostream>

// da scrivere per poter usare cout e cin
using namespace std;

// funzione principale
int main(){
    //Esempi di stampa a video
    cout<<"Prova"<<endl;
    cout<<"NON salvato"<<endl;

    // //esempio di creazione di una variabile
    // int numero;
    // cout<<"Dammi un numero"<<endl;
    // //esempio di salvataggio di un dato che verrà inserito dall'utente in una variabile
    // cin>>numero;
    // //stampa di un testo predefito e del valore della variabile
    // cout<<"Hai inserito il numero: "<<numero<<endl;

    // int numero2;
    // cout<<"Dammi un numero"<<endl;
    // cin>>numero2;

    // //struttura condizionata per eseguire controlli usando algebra booleana
    // if (numero>3 && numero<7)
    // {
    //     cout<<"OK"<<endl;
    // } else
    // {
    //     /* code */
    // }

    // //struttura condizionata per eseguire controlli usando if annidati
    // if(numero>3){
    //     if(numero<7){
    //         cout<<"OK"<<endl;
    //     }
    // }
    
    //ciclo for, while, do..while
    // aumentare la variabile finché è minore di 50
    int numer;
    cout<<"Dammi un numero"<<endl;
    cin>>numer;
    // for (int i = 0; i < 50; i++)
    // {
    //     numer++;
    // }
    // cout<<"Il numero risultante diventa: "<<numer<<endl;
    
    // while (numer < 50)
    // {
    //     numer++;
    // }
    // cout<<"Il numero risultante diventa: "<<numer<<endl;

    // do
    // {
    //     numer++;
    // } while (numer < 50);
    // cout<<"Il numero risultante diventa: "<<numer<<endl;
    
    switch (numer)
    {
    case 1:
        cout<<"Gennaio"<<endl;
        break;

    case 2:
        cout<<"Febbraio"<<endl;
        break;

    case 3:
        cout<<"Marzo"<<endl;
        break;
    
    default: cout<<"Brutta pirla i mesi sono 12"<<endl;
        break;
    }

    
    
    
}