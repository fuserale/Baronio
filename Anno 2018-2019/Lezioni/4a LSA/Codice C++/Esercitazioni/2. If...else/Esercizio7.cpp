	#include <iostream>
	#include <Math.h>
	
	using namespace std;
	
	int main(){
		int a, b, c;
		double delta, ris1, ris2;
		
		cout << "Scrivi il coefficiente a" << endl;
		cin >> a;
		
		cout << "Scrivi il coefficiente b" << endl;
		cin >> b;
		
		cout << "Scrivi il coefficiente c" << endl;
		cin >> c;
		
		delta = b * b - 4 * a * c;
		if (delta < 0){
			cout << "L'equazione non ha soluzione" << endl;
		} else if (delta == 0){
			ris1 = (-b)/(2 * a);
			cout << "Le due soluzioni sono equivalenti e valgono " << ris1 << endl;
		} else {
			ris1 = (-b + sqrt(delta))/(2 * a);
			ris2 = (-b - sqrt(delta))/(2 * a);
			cout << "Le due soluzioni sono " << ris1 << " e " << ris2 << endl;
		}
	}
