#include <iostream>
#include <string>

using namespace std;

int main(){
  string frase;
  string nuovaFrase ="";

  cout<<"Dimmi una frase da modificare"<<endl;
  getline(cin, frase);

  for(int i=0; i<frase.length(); i++){
    if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'){
      nuovaFrase=nuovaFrase + frase[i] + "f";
    } else if(frase[i]=='A'||frase[i]=='E'||frase[i]=='I'||frase[i]=='O'||frase[i]=='U'){
      nuovaFrase+=frase[i]+"F";
    } else {
      nuovaFrase+=frase[i];
    }
  }

  cout<<"Vecchia frase: "<<frase<<endl;
  cout<<"Nuova frase: "<<nuovaFrase<<endl;

}
