// librerie per aggiungere funzionalità
#include <iostream>

// da scrivere per poter usare cout e cin
using namespace std;

// funzione principale
int main(){
    int x;
    cout<<"Dammi un numero positivo"<<endl;
    cin>>x;

    while(x>0){
        x--;
        cout<<"Numero: "<<x<<endl;
    }
}