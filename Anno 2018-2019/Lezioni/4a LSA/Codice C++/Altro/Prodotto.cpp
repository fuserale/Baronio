#include <iostream>
using namespace std;

int ingresso(){
	int num;
	cout<<"Dammi un numero"<<endl;
	cin>>num;
	return num;
}

int calcolo(int num1, int num2){
	int prodotto = num1*num2;
	return prodotto;
}

int main(){
	int num1, num2, prodotto;
	
	num1 = ingresso();
	num2 = ingresso();
	prodotto = calcolo(num1, num2);
	cout<<"Prodotto: "<<prodotto<<endl;
}
