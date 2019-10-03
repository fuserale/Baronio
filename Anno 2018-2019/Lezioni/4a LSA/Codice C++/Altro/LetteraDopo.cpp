#include <iostream>
#include <string>

using namespace std;

int main(){
  string frase;
  string nuovaFrase = "";

  cout<<"Scrivi una frase"<<endl;
  getline(cin, frase);

  for(int i=0; i<frase.length()-1; i++){
    if((frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u')&&(frase[i+1]!=' ')){
      nuovaFrase=nuovaFrase + frase[i+1];
    } else if((frase[i]=='A'||frase[i]=='E'||frase[i]=='I'||frase[i]=='O'||frase[i]=='U')&&(frase[i+1]!=' ')){
      nuovaFrase+=frase[i+1];
    } else {
      nuovaFrase+=frase[i];
    }
  }
  nuovaFrase+=frase[frase.length()-1];

  cout<<"Vecchia frase: "<<frase<<endl;
  cout<<"Nuova frase: "<<nuovaFrase<<endl;
}
