#include <iostream>
#include <time.h>
using namespace std;
int main (){
  srand(time(0));
 int nascosto = rand()%1001;
 int tentativo=0;
 cout<<"dammi il tuo tentativo"<<endl;
 cin>>tentativo;
 while(nascosto!=tentativo){
   if(nascosto>tentativo){
     cout<<"il tuo tentativo \212 troppo basso"<<endl;
   }else{
     cout<<"il tuo tentativo \212 troppo alto"<<endl;
   }
   cout<<"ritenta sarai piu' fortunato"<<endl;
   cin>>tentativo;
 }
 cout<<"bravo te si un mona"<<endl;
}
