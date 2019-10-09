#include <iostream>
using namespace std;

int numero, altezza;
int massimo;
int minimo;
string nome, nomeAlto, nomeBasso;

string leggiNome(){
	string nome;
	cout<<"Scrivi il nome"<<endl;
	cin>>nome;
	return nome;
}

int leggiAltezza(){
	int altezza;
	cout<<"Scrivi l'altezza"<<endl;
	cin>>altezza;
	return altezza;
}

void controllaBasso(){
	if(altezza<minimo){
		minimo = altezza;
		nomeBasso = nome;
	}
}

void controllaAlto(){
	if(altezza>massimo){
		massimo = altezza;
		nomeAlto = nome;
	}
}

int main(){
	minimo = 1000;
	massimo = 0;
	
	cout<<"Quante persone devi misurare?"<<endl;
	cin>>numero;
	
	for(int i=0;i<numero;i++){
		nome = leggiNome();
		altezza = leggiAltezza();
		controllaBasso();
		controllaAlto();
	}
	
	cout<<"Il piu' alto \212: "<<nomeAlto<<" con "<<massimo<<" cm"<<endl;
	cout<<"Il piu' basso \212: "<<nomeBasso<<" con "<<minimo<<" cm"<<endl;

}
