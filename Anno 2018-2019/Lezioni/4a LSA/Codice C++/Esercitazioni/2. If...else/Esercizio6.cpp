	#include <iostream>
	
	using namespace std;
	
	int main(){
		int num1, num2, num3;
		
		cout << "Scrivi un numero" << endl;
		cin >> num1;
		
		cout << "Scrivi un numero" << endl;
		cin >> num2;
		
		cout << "Scrivi un numero" << endl;
		cin >> num3;
		
		if (num1 > num2){
		   if (num1 > num3){
		   	cout << "Il primo numero \212 il maggiore dei tre" << endl;
		   } else {
	   	    cout << "Il terzo numero \212 il maggiore dei tre" << endl;
		   }
		} else {
	 	  if (num2 > num3){
		 	cout << "Il primo numero \212 il maggiore dei tre" << endl;
			} else {
			cout << "Il terzo numero \212 il maggiore dei tre" << endl;
			}
		}
	}
