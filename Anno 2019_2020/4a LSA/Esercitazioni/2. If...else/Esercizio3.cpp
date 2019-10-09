#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout << "Scrivi un numero" << endl;
	cin >> num;
	
	if (num > 10 && num < 100){
		cout << "Il numero \212 compreso tra 10 e 100" << endl;
	} else {
		cout << "Il numero non \212 compreso tra 10 e 100" << endl;
	}
}
