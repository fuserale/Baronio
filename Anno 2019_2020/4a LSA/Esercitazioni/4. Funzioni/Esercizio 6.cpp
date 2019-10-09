#include <iostream>
using namespace std;

int calcolaPotenza(int base, int esponente){
	int potenza = 1;
	for(int i=1;i<=esponente;i++){
		potenza*=base;
	}
	return potenza;
}

int main(){
	int base, esponente, potenza;
	
	cout<<"Scrivi la base del numero"<<endl;
	cin>>base;
	cout<<"Scrivi l'esponente del numero"<<endl;
	cin>>esponente;
	
	potenza=calcolaPotenza(base, esponente);
	cout<<"Potenza calcolata: "<<potenza<<endl;
}
