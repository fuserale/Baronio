#include <iostream>
using namespace std;

void seiInForma(int altezza, int peso){
	if(altezza-100 > peso){
		cout<<"Sei sottopeso"<<endl;
	} else if(altezza-100 == peso){
		cout<<"Sei perfetto"<<endl;
	} else {
		cout<<"Sei sovrappeso"<<endl;
	}
}

int main(){
	int altezza, peso;
	
	cout<<"Dimmi la tua altezza"<<endl;
	cin>>altezza;
	cout<<"Dimmi il tuo peso"<<endl;
	cin>>peso;
	
	seiInForma(altezza, peso);
}
