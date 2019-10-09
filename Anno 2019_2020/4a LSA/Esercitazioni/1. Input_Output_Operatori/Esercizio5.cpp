#include <iostream>

using namespace std;

int main(){
	int num1, num2, rest;
	
	cout << "Scrivi un numero" << endl;
	cin >> num1;
	
	cout << "Scrivi un altro numero" << endl;
	cin >> num2;
	
	rest = num1 % num2;
	cout << "Il resto della divisione e': " << rest << endl;
}
