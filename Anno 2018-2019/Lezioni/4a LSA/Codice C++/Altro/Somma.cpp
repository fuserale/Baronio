#include <iostream>
using namespace std;

int ingresso(){
	int num;
	cout<<"Dammi un numero"<<endl;
	cin>>num;
	return num;
}

int sommaDueNumeri(int num1, int num2){
	int somma = num1+num2;
	return somma;
}

int main(){
	int num1, num2;
	int somma=0;
	
	num1 = ingresso();
	num2 = ingresso();
	
	somma = sommaDueNumeri(num1,num2);
	cout<<"Somma: "<<somma<<endl;
}
