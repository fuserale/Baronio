#include <iostream>
#include <string>

using namespace std;

int main(){
  string frase;
  string nuovaFrase = "";

  cout<<"Scrivi una frase con qualche punto"<<endl;
  getline(cin, frase);

  for(int i=0; i<frase.length(); i++){
    if(frase[i]=='.'){
      nuovaFrase+='\n';
    } else {
      nuovaFrase+=frase[i];
    }
  }

  cout<<"Vecchia frase: "<<frase<<endl;
  cout<<"Nuova frase: "<<nuovaFrase<<endl;
}
