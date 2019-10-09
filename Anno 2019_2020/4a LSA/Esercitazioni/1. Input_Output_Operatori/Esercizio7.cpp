#include <iostream>

using namespace std;

int main(){
	int num1, num2;
	bool confr;
	
	cout << "Scrivi un numero" << endl;
	cin >> num1;
	
	cout << "Scrivi un numero" << endl;
	cin >> num2;
	
	confr = (num1 == num2);
	cout << "I due numeri sono uguali? Se 1 allora si, se 0 allora no: " << confr << endl;
}
