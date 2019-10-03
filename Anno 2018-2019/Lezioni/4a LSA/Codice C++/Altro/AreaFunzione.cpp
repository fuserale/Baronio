#include <iostream>
using namespace std;

int ingressoBase(){
	int base;
	cout<<"Dammi la base"<<endl;
	cin>>base;
	return base;
}

int ingressoAltezza(){
	int altezza;
	cout<<"Dammi l'altezza"<<endl;
	cin>>altezza;
	return altezza;
}

int calcoloArea(int num1, int num2){
	int area = num1*num2;
	return area;
}

int main(){
	int b, h, a;
	
	b = ingressoBase();
	h = ingressoAltezza();
	a = calcoloArea(b,h);
	cout<<"Area: "<<a<<endl;
}
