#include <iostream>

using namespace std;

int main(){
	int num1, num2;
	bool magg;
	
	cout << "Scrivi un numero" << endl;
	cin >> num1;
	
	cout << "Scrivi un numero" << endl;
	cin >> num2;
	
	magg = (num1 > num2);
	cout << "Il primo numero e'maggiore del secondo? Se 1 allora si,se 0 allora no: " << magg << endl;
}
