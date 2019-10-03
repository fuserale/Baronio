#include <iostream>
#include <string>

using namespace std;

string sostituisci(string s1, string s2, string s3){
	do{
		//posizione di partenza se ho un match
		int found;
		//cerca s2 in s1
		found = s1.find(s2);
		//se ho trovato s2 in s1
		if(found!=string::npos){
			s1 = s1.replace(found, s2.length(), s3);
		} else {
			cout<<"Occorrenza non trovata!"<<endl;
		}
	} while (found!=string::npos)
	
	return s1;
}

int main(){
	string strtext, strold, strnew;
	
	cout<<"Dammi una frase base"<<endl;
	cin>>strtext;
	
	cout<<"Dammi un'occorrenza da trovare"<<endl;
	cin>>strold;
	
	cout<<"Dammi con cosa sostituire"<<endl;
	cin>>strnew;
	
	string finale = sostituisci(strtext, strold, strnew);
	cout<<finale<<endl;
}
