#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	
   s1 = "oggi piove";
   s2 = "domani sara bel tempo";
   
   //s1 = toupper(s1);
   for(int i=0; i<s1.length(); i++){
      s1[i]=toupper(s1[i]);
   }
   string s3 = s1 + " " + s2;
   cout<<s3<<endl;
   cout<<"lunghezza: "<<s3.length()<<endl;
   
   int found;
   char vocali[] = {'A','E','O','U','a','e','o','u'};
   for(int i=0; i<8; i++){
      do{
        found = s3.find(vocali[i]);
         if(found!=string::npos){
            s3 = s3.replace(found, 1, "i");
         } 
      } while(found!=string::npos); 
   }
   cout<<s3<<endl;
}
