#include <iostream>
using namespace std;

int main(){
    int quadrato;
    cout<<"Dammi un quadrato perfetto: ";
    cin>>quadrato;

    int i=1;
    while(i*i!=quadrato){
       i++;
    }
    cout<<"La tua radice \212: "<<i<<endl;
}
