#ifndef exp.h
#define exp.h

class Exp {
    int base, exper;
public:
    Exp(int base, int exper);
    Exp(int base);
    Exp();
    int getValue();
    int getBase();
    int getExp();
    bool equals(int base);

};

#endif