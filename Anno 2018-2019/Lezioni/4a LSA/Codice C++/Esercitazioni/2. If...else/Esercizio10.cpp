#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout << "Inserisci, in cifra, il numero del mese" << endl;
	cin >> num;
	
	switch (num){
		case 1:
		case 2:			
		case 3:
			cout << "Primo trimestre" << endl;
			break;
		
		case 4:		
		case 5:
		case 6:
			cout << "Secondo trimestre" << endl;
			break;
		
		case 7:
		case 8:
		case 9:
			cout << "Terzo trimestre" << endl;
			break;
		
		case 10:
		case 11:
		case 12:
			cout << "Quarto trimestre" << endl;
			break;
		
		default:
			cout << "Vorresti avere dei mesi in piu' eh?!?" << endl;	
	}
}
