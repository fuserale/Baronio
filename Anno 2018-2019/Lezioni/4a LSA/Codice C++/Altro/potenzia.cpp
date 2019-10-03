#include<iostream>
using namespace std;
int dammibase()
{
	int n;
	cout<<"inserisci la base: ";
	cin>>n;
	
	
								return n;
}
int esponente()
{
	int e;
	cout<<"inserisci esponente: ";
	cin>>e;
	return e;
}
int calcolapotenza(int base,int esponente)
{
	int potenza=1;
	for(int i=0; i<=esponente; i++)
	{
	potenza=potenza*base;
	
		
	}
	return potenza;
	
	
}
int main()
{
	cout<<"la potenza e:"<<calcolapotenza(dammibase(),esponente());
}






























