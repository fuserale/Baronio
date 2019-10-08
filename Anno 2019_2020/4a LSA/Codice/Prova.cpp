#include <iostream>
using namespace std;

int main(){
    //qua scriverò il codice
    cout<<"Questo è un messaggio"<<endl;

    //creo una variabile intera
    int numero = 8;
    //creo una variabile decimale
    double numero2 = 8.8;
    float numero3 = 9.4;
    //creo una variabile carattere
    char carattere = 'A';
    //creo una variabile parola
    string parola = "Bella";
    //creo un valore di verità
    bool falso = false;
    bool vero = true;

    numero = 10;
    cout<<"La variabile numero vale: "<<numero<<endl;

    //farci dare dei valori
    cout<<"Inserisci un numero"<<endl;
    cin>>numero;
    cout<<"La variabile numero vale: "<<numero<<endl;
}