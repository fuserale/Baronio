#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a,b,c;
	double delta;
	double x1,x2;
//mi faccio dare coefficienti
cout<<"dammi il valore di a "<<endl;
cin>>a;
cout<<"dammi il valore di b "<<endl;
cin>>b;
cout<<"dammi il valore di c "<<endl;
cin>>c;
//troverò il delta
delta=b*b-4*a*c;
cout<<"il delta \212 "<<delta<<endl;
//trovo se delta ha valore maggiore o uguale a zero
if(delta>=0){
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	cout<<"la prima soluzione \212 "<<x1<<endl;
	cout<<"la seconda soluzione \212 "<<x2<<endl;	
} else{
	cout<<"l'equazione \212 impossibile"<<endl;
}	
	
	
	
}
