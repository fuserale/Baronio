#include<iostream>
using namespace std;
int main(){
	double num;
//mi faccio dare il numero dall'utente
	cout<<"inserisci il tuo valore (se con la virgola metti il punto)"<<endl;
	cin>>num;
	//il programma dice se il numero maggiore di 50
	if(num>=50){
		cout<<"il tuo numero \212 positivo"<<endl;
	}
	if(num<50){
		cout<<"il tuo numero \212 negativo"<<endl;
	}
}
