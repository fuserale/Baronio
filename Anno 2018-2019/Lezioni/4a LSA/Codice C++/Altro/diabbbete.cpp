#include<iostream>
using namespace std;
void diabbete()
{
			  int peso, altezza;
			  int calcolo;
			  cout<<"inserisci peso:";
			  cin>>peso;
			  cout<<endl;
			   cout<<"inserisci altezza:";
			  cin>>altezza;
			  cout<<endl;
			  calcolo=altezza-100;
			  if(calcolo>peso)
			  {
			  	cout<<"sovrappeso";
			  }
			  else if(calcolo<peso)
			  {
			  	cout<<"sottopeso"                ;
			  }
								 else
								 cout<<"normale";
								 
								 

	
	
}
int main()
{
	diabbete();
}
