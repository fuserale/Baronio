// librerie per aggiungere funzionalità
#include <iostream>
#include <stdlib.h>

// da scrivere per poter usare cout e cin
using namespace std;

void crea_matrice(int dim){
    //creo matrice
    int matrix[dim][dim];
    //scorro le righe
    for (int i = 0; i < dim; i++)
    {
        //scorro le colonne
        for (int j = 0; j < dim; j++)
        {
            //assegna un numero a caso
            matrix[i][j] = rand() % 100;
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

//funzione che moltiplica due numeri
int prodotto(int num1, int num2){
    return num1*num2;
}

// funzione principale
int main(){
    //creo array di dimensione dim
    cout<<"Quanti valori vuoi inserire?"<<endl;
    int dim;
    cin>>dim;
    int array[dim];
    //riempio array
    for (int i = 0; i < dim; i++)
    {
        /* code */
        cout<<"Dammi un numero intero"<<endl;
        cin>>array[i];
    }
    //stampo array
    for (int i = 0; i < dim; i++)
    {
        /* code */
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    int array2[dim];
    for (int i = 0; i < dim; i++)
    {
        /* code */
        array2[i]=array[i]+1;
        cout<<array2[i]<<"\t";
    }
    cout<<endl;

    //chiamo la funzione
    crea_matrice(dim);
    cout<<endl;
    crea_matrice(dim+1);

    int numero1;
    int numero2;

    cout<<"Dammi un numero"<<endl;
    cin>>numero1;
    cout<<"Dammi un numero"<<endl;
    cin>>numero2;

    //chiamo la funzione prodotto dando i numeri appena presi e salvo il risultato nella variabile risultato
    int risultato = prodotto(numero1, numero2);
    cout<<"Prodotto="<<risultato<<endl;
    

    
}