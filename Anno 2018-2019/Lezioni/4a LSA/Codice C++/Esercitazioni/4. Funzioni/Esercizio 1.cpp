#include <iostream>
using namespace std;

int leggiLato(){
	int lato;
	cout<<"Scrivi il lato del quadrato"<<endl;
	cin>>lato;
	return lato;
}

int calcolaArea(int lato){
	int area;
	area = lato*lato;
	return area;
}

void stampaArea(int area){
	cout<<"L'area del quadrato \212: "<<area<<endl;
}

int main(){
	int lato, area;
	//metodo classico
	cout<<"Scrivi il lato del quadrato"<<endl;
	cin>>lato;
	
	area = lato*lato;
	cout<<"L'area del quadrato \212: "<<area<<endl;
	
	//metodo funzione
	lato= leggiLato();
	area= calcolaArea(lato);
	stampaArea(area);
}
