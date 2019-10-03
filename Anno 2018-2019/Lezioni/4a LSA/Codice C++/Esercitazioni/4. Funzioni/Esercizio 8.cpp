#include <iostream>
#include <cmath>
using namespace std;

double calcolaDistanza(int x, int y){
	double distanza;
	distanza = sqrt(pow(x,2) + pow(y,2));
	return distanza;
}

int main(){
	int x, y;
	double distanza;
	
	cout<<"Scrivi la coordinata x"<<endl;
	cin>>x;
	cout<<"Scrivi la coordinata y"<<endl;
	cin>>y;
	
	distanza = calcolaDistanza(x,y);
	cout<<"Distanza: "<<distanza<<endl;
}
