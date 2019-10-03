#include<iostream>
using namespace std;
 int main(){
 	
 	int numbigliettim;
 	int numbigliettif;
 	int prezzomaschi=15;
 	int prezzodonne=10;
 	int prezzodj=100;
 	int tassa=2;
 	//vi fate comunicare i biglietti venduti ai maschi
 	cout<<"dimmi il numero di biglietti venduti ai maschi"<<endl;
 	cin>>numbigliettim;
 	//vi fate comunicare i biglietti venduti alle femmine
 	cout<<"dimmi il numero di biglietti venduti alle femmine"<<endl;
 	cin>>numbigliettif;            
 	//calcolo il prezzo totale dei maschi
 	int totaleM=numbigliettim*15;
 	cout<<"il ricavo dei biglietti venduti ai maschi "<<totaleM<<endl;
 	
	//calcolo il prezzo totale delle femmine
 	int totaleF=numbigliettif*10;
 	cout<<"il ricavo dei biglietti venduti alle femmine "<<totaleF<<endl;
 	
 	//sottraggo la tassa al totale dei maschi
 	int guadagnoM=totaleM-(2*numbigliettim);
 	cout<<"il guadagno sui maschi \212 "<<guadagnoM<<endl;
 	//sottraggo la tassa al totale delle femmine
 	int guadagnoF=totaleF-(2*numbigliettif);
 	cout<<"il guadagno sulle femmine \212 "<<guadagnoF<<endl;
 	//calcolo guadagno totale e sottraggo prezzo dj
 	int guadagnotot=(guadagnoM+guadagnoF)-100;
 	cout<<"il guadagno totale \212 "<<guadagnotot<<"$"<<endl;
 	
 	//se i maschi sono più delle femmine, 5euro in più per ogni maschio in sovrannumero
 	if(numbigliettim > numbigliettif){
 		int aggiuntaDJ = (numbigliettim-numbigliettif)*5;
 		guadagnotot = guadagnotot - aggiuntaDJ;
 		cout<<"il guadagno totale \212 "<<guadagnotot<<"$"<<endl;
	 } else {
	 	int aggiuntaBibita = (numbigliettif*2);
	 	guadagnotot = guadagnotot - aggiuntaBibita;
	 	cout<<"il guadagno totale \212 "<<guadagnotot<<"$"<<endl;
	 }
	 
 } 
