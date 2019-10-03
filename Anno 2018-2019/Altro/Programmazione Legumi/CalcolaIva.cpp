#include<iostream>
using namespace std;
int main(){
	double importo;
	double iva1=0.16;
	double iva2=0.2;
	//mi faccio dare dall'utente l'importo
	cout<<"inserisci il tuo importo: "<<endl;
	cin>>importo;
	//il programma mi dice quale iva applicare 
	if(importo<150.00){
		double totiva1=importo*iva1;
		cout<<"il tuo totale \212 di: "<<totiva1+importo<<endl;
	}else{
		double totiva2=importo*iva2;
		cout<<"il tuo importo \212 di: "<<totiva2+importo<<endl;
	}
}
