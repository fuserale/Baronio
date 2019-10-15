#include <iostream>

using namespace std;

int main(){
    //creo una variabile intera e faccio in modo che l'utente le assegni un valore
    int numeroIntero;
    cout<<"Dammi un numero intero"<<endl;
    cin>>numeroIntero;
    cout<<"Hai inserito: "<<numeroIntero<<endl;

    //creo una variabile double e faccio in modo che l'utente le assegni un valore (mi raccomando usare il punto come separatore)
    double numeroDouble;
    cout<<"Dammi un numero con la virgola"<<endl;
    cin>>numeroDouble;
    cout<<"Hai inserito: "<<numeroDouble<<endl;

    //trasformo il mio numero double in un numero intero
    double interoDaDouble = (int) numeroDouble;
    cout<<"Il numero double è diventato: "<<interoDaDouble<<endl;

    //mi faccio dare un altro numero intero
    int numeroIntero2;
    cout<<"Dammi un altro numero intero"<<endl;
    cin>>numeroIntero2;

    //faccio la divisione tra i due numeri interi
    double divisione = numeroIntero/numeroIntero2;
    cout<<"Il risultato della divisione è: "<<divisione<<endl;

    //vedete che non vi dà la parte decimale, ossia con la virgola. Per fare questo bisogna fare un cast da intero a double
    divisione = (double) numeroIntero/numeroIntero2;
    cout<<"Il risultato della divisione è: "<<divisione<<endl;

    //per fare il cast, mi basta usare questa sintassi:
    // nome_var = (tipo) nome_var_da_trasformare;

    //per creare una variabile costante, uso la keyword const, in modo che poi quel valore non potrà essere modificato
    const double pigreco = 3.14;
    //pigreco = 2;
    cout<<"Il valore di pigreco è: "<<pigreco<<endl;

    //se voglio migliorare la visualizzazione della mia stampa, posso usare la formattazione dell'output: \t mi permette di inserire una tabulazione, \n di andare a capo
    cout<<"Ora farò una tabulazione: \t mentre il testo dopo questo \n sarà in una nuova riga"<<endl;
}