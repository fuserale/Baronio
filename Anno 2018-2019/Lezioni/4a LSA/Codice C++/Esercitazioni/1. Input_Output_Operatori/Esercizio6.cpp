#include <iostream>

using namespace std;

int main(){
	const double iva = 0.20;
	int prezzoIniziale;
	double prezzoIvato;
	
	cout << "Scrivi un numero" << endl;
	cin >> prezzoIniziale;
	
	prezzoIvato = prezzoIniziale + prezzoIniziale * iva;
	
	cout << "Il prezzo finale e': " << prezzoIvato << endl;
}
