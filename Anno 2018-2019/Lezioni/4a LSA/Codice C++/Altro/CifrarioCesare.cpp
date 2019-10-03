#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

char alfabeto[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char word[100]={0};
char word2[100]={0};

void codifica(string parola, int chiave){
	for(int i=0;i<parola.length();i++){
		word[i]=toupper(parola[i]);
	}
	cout<<"Parola da cifrare: ";
	for(int i=0;i<parola.length();i++){
		cout<<word[i];
	}
	cout<<" con chiave k="<<chiave<<endl;

	for(int i=0;i<strlen(word);i++){
		int j;
		if(word[i]==' '){
		    word2[i]=word[i];
		} else{
			for(int m=0;m<26;m++){

				if(word[i]==alfabeto[m]){
					j=m;
				}
			}
			int n=j+chiave;
			if(n<26){
				word2[i]=alfabeto[n];
			} else {
				int b=n-26;
				word2[i]=alfabeto[b];
			}
		}
	}

	for(int i=0;i<parola.length();i++){
		cout<<word2[i];
	}
}

void decodifica(string parola,int chiave){
	for(int i=0;i<parola.length();i++){
		word[i]=toupper(parola[i]);
	}
	cout<<"Parola da decifrare: ";
	for(int i=0;i<parola.length();i++){
		cout<<word[i];
	}
	cout<<" con chiave k="<<chiave<<endl;

	for(int i=0;i<strlen(word);i++){
		int j;
		if(word[i]==' '){
		    word2[i]=word[i];
		} else{
			for(int m=0;m<26;m++){
				if(word[i]==alfabeto[m]){
					j=m;
			 } else{

				}
			}
			int n=j-chiave;
			if(n>=0){
				word2[i]=alfabeto[n];
			} else {
				int b=26+n;
				word2[i]=alfabeto[b];
			}
		}
	}

	for(int i=0;i<parola.length();i++){
		cout<<word2[i];
	}
}

int main(){
	string parola;
	int chiave;
	int control;

	do{
		cout<<"Scegli se cifrare o decifrare un messaggio"<<endl;
		cout<<"0. Esci"<<endl;
		cout<<"1. Codifica"<<endl;
		cout<<"2. Decodifica"<<endl;
		cout<<endl;
		cin>>control;
		cin.ignore(256, '\n');

		switch(control){
			case 0: cout<<"FINE!"<<endl;
				 	break;

			case 1: cout<<"Dimmi la parola da cifrare: \t ";
				 	getline(cin,parola);
					cout<<endl;

 					cout<<"Dimmi la chiave da usare (compresa tra 1 e 26): \t";
					cin>>chiave;
					cout<<endl;

					codifica(parola, chiave);
					cout<<endl<<endl;
					break;

	        case 2: cout<<"Dimmi la parola da cifrare: \t ";
		 		 	getline(cin,parola);
					cout<<endl;

					cout<<"Dimmi la chiave da usare (compresa tra 1 e 26): \t";
					cin>>chiave;
					cout<<endl;
					decodifica(parola, chiave);
					cout<<endl<<endl;
					break;

	        default: cout<<"Hai sbagliato numero!"<<endl;
		}
	} while(control!=0);
}
