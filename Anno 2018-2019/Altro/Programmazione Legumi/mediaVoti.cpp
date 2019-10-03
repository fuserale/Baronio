#include <iostream>
using namespace std;
int main(){
  double voto;
  int numVoti;
  double sommaVoti;
  cout<<"dimmi quanti voti hai: "<<endl;
  cin>>numVoti;
  for(int i=0;numVoti>i;i++){
    cout<<"dammi il voto: "<<endl;
    cin>>voto;
    sommaVoti=voto+sommaVoti;
  }
  double media=sommaVoti/numVoti;
  cout<<"la tua media finale \212: "<<media<<endl;
}
