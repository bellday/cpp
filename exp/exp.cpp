#include "exp.h"

int Exp::getValue(){
     int result = 1;
        for (int i = 0; i < exper; i++) {
            result *= base;
        }
        return result;
}

int Exp::getBase(){

    return base;
}

int Exp::getExp(){
    
    return exper;
}

bool Exp::equals(int x){
    if (x== Exp(x))
    {
        return true;
    }
    else
    {
        return false;        
    }

}
