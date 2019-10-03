#include <iostream>
using namespace std;

int fibonacci(int i)
{
  if (i < 0) return -1; /* F(i) non e' definito per interi i negativi! */

  if (i == 0) return 0;
  else if (i == 1) return 1;
  else return fibonacci(i-1) + fibonacci(i-2);
}

int main(){
	int numero;
	cout<<"inserisci numero"<<endl;
	cin>>numero;
	
	cout<<fibonacci(numero)<<" ";
}
