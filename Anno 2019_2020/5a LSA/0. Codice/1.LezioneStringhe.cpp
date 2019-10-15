#include <iostream>
#include <string>

using namespace std;

int main(){
    //creo una stringa
    string nome = "Alessandro";
    //creo una seconda stringa
    string cognome = "Fuser";

    //stampo la stringa nome come fosse un array di char, qui uso il metodo per calcolare la lunghezza della stringa .length()
    for (int i = 0; i < nome.length(); i++)
    {
        cout<<nome[i];
    }
    cout<<endl;

    //ora stampo come stringa normale
    cout<<nome<<endl;
    
    //mi faccio dare il soprannome della persona
    string soprannome;
    cout<<"Dammi il tuo soprannome"<<endl;
    cin>>soprannome;
    cout<<"Il soprannome di "<<nome<<" "<<cognome<<" è: "<<soprannome<<endl;

    //mi faccio dare una stringa di due parole
    string dueParole;
    cout<<"Dammi una frase di due parole almeno"<<endl;
    cin>>dueParole;
    cout<<"Hai inserito: "<<dueParole<<endl;
    //Vedete che in questo modo prende solo la prima parola

    cout<<"Dammi una frase di due parole almeno"<<endl;
    getline(cin,dueParole);
    cout<<"Hai inserito: "<<dueParole<<endl;
    //così invece prende il resto dell'inserimento

    cout<<"Dammi una frase di due parole almeno"<<endl;
    getline(cin,dueParole);
    cout<<"Hai inserito: "<<dueParole<<endl;
    //ora non aveva testo avanzato, per cui prende tutta la riga dall'inizio dell'inserimento

    //ora riuso il metodo della lunghezza per capire quanto sono lunghe le parole
    int lunghezzaNome = nome.length();
    int lunghezzaCognome = cognome.length();
    int lunghezzaDueParole = dueParole.length();
    cout<<"La lunghezza del nome è: "<<lunghezzaNome<<endl;
    cout<<"La lunghezza del cognome è: "<<lunghezzaCognome<<endl;
    cout<<"La lunghezza delle due parole che hai inserito è: "<<lunghezzaDueParole<<endl;

    //metto insieme due stringhe
    string identita = nome+cognome;
    cout<<"La tua identità è: "<<identita<<endl;
    
    //estraggo un pezzo di stringa
    string pezzoDiStringa = identita.substr(0,10);
    cout<<"Hai estratto: "<<pezzoDiStringa<<endl;
    //provo con altri numeri
    pezzoDiStringa = identita.substr(10,5);
    cout<<"Hai estratto: "<<pezzoDiStringa<<endl;

    //il metodo substr(posizione iniziale, quanti caratteri) mi permette di estrarre pezzi di stringhe

    //inserisco un nuovo pezzo nell'identità
    identita.insert(10, soprannome);
    cout<<"Ora la tua identita diventa: "<<identita<<endl;

    //il metodo insert(posizione iniziale, stringa da inserire) mi permette di inserire in una stringa un'altra stringa

    //rimpiazziamo un pezzo della stringa identità
    identita.replace(10, soprannome.length()-10, "Prof");
    cout<<"Ora la tua identita diventa: "<<identita<<endl;

    //il metodo replace(inizio, fine, stringa da inserire) mi permette di sostituire un pezzo di stringa con un'altra stringa

}
