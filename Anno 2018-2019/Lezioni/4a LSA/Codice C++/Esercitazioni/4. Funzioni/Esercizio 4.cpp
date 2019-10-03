#include <iostream>
using namespace std;

int leggiLato(){
	int lato;
	cout<<"Scrivi la misura del lato"<<endl;
	cin>>lato;
	return lato;
}

void tipoTriangolo(int lato1, int lato2, int lato3){
	if(lato1 == lato2 && lato2 == lato3){
		cout<<"Il triangolo \212 equilatero"<<endl;
	} else if((lato1 == lato2 && lato1 != lato3) || (lato1==lato3 && lato2!=lato3)||(lato1!=lato2 && lato2==lato3)){
		cout<<"Il triangolo \212 isoscele"<<endl;
	} else if(lato1 != lato2 && lato2 != lato3){
		cout<<"Il triangolo \212 scaleno"<<endl;
	} 
}

int main(){
	int lato1, lato2, lato3;
	
	for(int i=0; i<5; i++){
		lato1 = leggiLato();
		lato2 = leggiLato();
		lato3 = leggiLato();
		tipoTriangolo(lato1, lato2, lato3);
	}
}
