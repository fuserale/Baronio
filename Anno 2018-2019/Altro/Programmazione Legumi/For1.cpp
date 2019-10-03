#include <iostream>
#include <string.h>
#include <time.h>
#include <math.h>

using namespace std;

int main(){

    double num;
    cout<<"Dammi un numero"<<endl;
    cin>>num;
    
    for(int cont=0;cont<10;cont++){
       num = num + 5;
       cout<<"Il numero \212: "<<num<<endl;
    }
    
    double somma=0;
    int quanti;
    cout<<"Quanti numeri vuoi sommare?"<<endl;
    cin>>quanti;
    for(int i=0;i<quanti;i++){
       cout<<"Dammi un numero da sommare"<<endl;
       cin>>num;
       somma=somma+num;
    }
    cout<<"La somma \212: "<<somma<<endl;
    
	return 0;
}

