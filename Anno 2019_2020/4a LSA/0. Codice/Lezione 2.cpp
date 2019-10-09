//Questo è un commento, si fa tramite l'uso della doppia barra verso destra e serve al programmatore che legge il codice per capire quello che sta succedendo

//Questa è una libreria, permette di inserire all'interno del programma delle funzioni che permettono di fare cose, nel nostro caso si fare input ed output
#include <iostream>

//Qui indichiamo che useremo la standard dei nomi della libreria introdotta prima, altrimenti prima di ogni cout dovremmo scrivere std::
using namespace std;

//Questo è il programma principale ed il punto di accesso del compilatore, tutto il codice per il momento andrà scritto dentro alle sue parentesi graffe
int main(){
    //Questo è un esempio di stampa a schermo di un messaggio predefinito, racchiuso dai doppi apici; endl significa 'vai a capo', cioè dopo aver stampato va alla riga successiva; le doppie frecce << permettono di concatenare i comandi uno dopo l'altro
    cout<<"Questo è un messaggio"<<endl;

    //Una variabile è un contenitore di dati e può cambiare il suo valore nel corso del programma; per crearla, prima indico il tipo e poi il nome che voglio darle; per assegnarle un valore, metti l'uguale dopo il suo nome
    //creao una variabile intera
    int num;
    //creo una variabile intera e le assegno il valore 8
    int numero = 8;
    //creo una variabile decimale e assegno dei valori
    double numero2 = 8.8;
    float numero3 = 9.4;
    //creo una variabile carattere e le assegno il valore A
    char carattere = 'A';
    //creo una variabile parola e le assegno il valore Bella
    string parola = "Bella";
    //creo un valore di verità e assegno dei valori
    bool falso = false;
    bool vero = true;

    //Ho già creato la variabile numero, per cui non serve più che indico il suo tipo (anche perché darebbe errore); qui assegno alla variabile numero il valore 10, per cui cambio il suo valore (che era 8)
    numero = 10;
    //Stampo a schermo un messaggio predefinito assieme al valore della variabile numero (che è 10)
    cout<<"La variabile numero vale: "<<numero<<endl;

    //Per farsi dare un dato dall'utente, devo usare il costrutto cin; prima di farlo, però, devo dire all'utente cosa deve fare, per cui uso sempre un cout specificando l'azione che si dovrà compiere; quello che l'utente inserisce dovrò poi metterlo in una variabile, per cui le frecce dovranno girarsi verso il nome della variabile
    cout<<"Inserisci un numero"<<endl;
    cin>>numero;
    cout<<"La variabile numero vale: "<<numero<<endl;
}