#include <iostream>

using namespace std;

int main(){
	const double iva1 = 0.16;
	const double iva2 = 0.20;
	double num, numIvato;
	
	cout << "Scrivi un importo" << endl;
	cin >> num;
	
	if (num < 150){
		numIvato = num + num * iva1;
		cout << "L'importo ivato \212 di " << numIvato << " euro" << endl;
	} else {
		numIvato = num + num * iva2;
		cout << "L'importo ivato \212 di " << numIvato << " euro" << endl;
	}
}
