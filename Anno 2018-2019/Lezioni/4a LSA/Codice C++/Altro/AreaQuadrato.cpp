#include <iostream>
using namespace std;


int lato;

void leggiLato(){
	cout<<"Dammi il lato"<<endl;
	cin>>lato;
}

int calcolaArea(int lato){
	int area;
	area = lato*lato;
	return area;
}

int main(){
	int  area;
	
	leggiLato();
	
	area = calcolaArea(lato);
	
	cout<<"Area: "<<area<<endl;
}
