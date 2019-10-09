#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout << "Scrivi un numero" << endl;
	cin >> num;
	
	if (num < 5 || num > 10){
		cout << "Il numero \212 esterno all'intervallo [5;10]" << endl;
	} else {
 	    cout << "Il numero \212 interno all'intervallo [5;10]" << endl;
	}
}
