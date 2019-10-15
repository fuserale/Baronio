#include <iostream>

using namespace std;

int main(){
    //mi faccio dare due numero interi
    int numero1;
    int numero2;
    cout<<"Dammi un numero"<<endl;
    cin>>numero1;
    cout<<"Dammi un altro numero"<<endl;
    cin>>numero2;

    //ora voglio stampare schi è maggiore dei due, come faccio? Uso il costrutto IF, dove nella parentesi tonda dovrò scrivere il confronto della condizione, e nelle parentesi graffe scrivo quello che devo fare se la condizione di verifica; else invece funziona solo se la condizione è falsa
    if (numero1>numero2)
    {
        cout<<"Il numero maggiore è il primo"<<endl;
    } else
    {
        cout<<"Il numero maggiore è il secondo"<<endl;
    }

    //faccio la verifica della condizione al contrario
    if (numero2>numero1)
    {
        cout<<"Il numero maggiore è il secondo"<<endl;
    } else
    {
        cout<<"Il numero maggiore è il primo"<<endl;
    }

    //ora voglio verificare se entrambi i numeri sono maggiori di 5 e stampare "maggiori" in caso affermativo, "bugiardo" in caso contrario
    if(numero1>5 && numero2>5){
        cout<<"maggiori"<<endl;
    } else{
        cout<<"bugiardo"<<endl;
    }

    //usando l'algebra booleana posso combinare più condizioni assieme: && mi indica che entrambe le condizioni devono essere vere, || indica che mi basta che una delle due sia vera

    if(numero1>5 || numero2>5){
        cout<<"almeno uno dei due è maggiore"<<endl;
    } else{
        cout<<"nessuno è maggiore"<<endl;
    }
    
    //posso fare anche degli if annidati, ossia controllare una condizione dopo che ne ho controllato un'altra, come nel caso in cui io voglia confrontare tra solo tre numeri per determinare quale sia il più piccolo
    int numero3;
    cout<<"Dammi un terzo numero"<<endl;
    cin>>numero3;

    if(numero1<numero2){
        if(numero1<numero3){
            cout<<"Il numero più piccolo è il primo"<<endl;
        } else{
            cout<<"Il numero più piccolo è il terzo"<<endl;
        }
    } else{
        if(numero2<numero3){
            cout<<"Il più piccolo è il secondo"<<endl;
        } else {
            cout<<"Il numero più piccolo è il terzo"<<endl;
        }
    }

    //questo lo posso riscrivere anche con l'algebra booleana
    if(numero1<numero2 && numero1<numero3){
        cout<<"Il numero più piccolo è il primo"<<endl;
    } else if(numero2<numero1 && numero2<numero3){
        cout<<"Il numero più piccolo è il secondo"<<endl;
    } else if(numero3<numero1 && numero3<numero2){
        cout<<"Il numero più piccolo è il terzo"<<endl;
    }
    
}