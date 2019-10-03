#include <iostream>

using namespace std;

class ValoreAssoluto(){
    public:
        int abs(int intero){
            if(intero < 0){
                intero = -intero;
            }
            return intero;
        }

        double abs(double doppio){
            if(doppio < 0){
                doppio = -doppio;
            }
            return doppio;
        }

        long abs(long lungo){
            if(lungo < 0){
                lungo = -lungo;
            }
            return lungo;
        }
};

class nome_classe_derivata : nome_classe_base{
    //corpo della classe
}


