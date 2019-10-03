#include<iostream>
using namespace std;
int main(){
  string vettura;
  int cilindrata;
  cout<<"Porti un'auto o un camion?"<<endl;
  cin>>vettura;
  if(vettura=="auto"){
    cout<<"Che cilindrata?"<<endl;
    cin>>cilindrata;
    if(cilindrata<=1000){
      cout<<"Devi pagare 20 euro"<<endl;
    } else if(cilindrata<=2000 && cilindrata>1000){
      cout<<"Devi pagare 30 euro"<<endl;
    } else {
      cout<<"Devi pagare 46 euro"<<endl;
    }
  } else if (vettura=="camion"){
    cout<<"Che cilindrata?"<<endl;
    cin>>cilindrata;
    if(cilindrata<=2000){
      cout<<"Devi pagare 40 euro"<<endl;
    } else if(cilindrata<=3000 && cilindrata>2000){
      cout<<"Devi pagare 50 euro"<<endl;
    } else {
      cout<<"Devi pagare 100 euro"<<endl;
    }
  }

}
