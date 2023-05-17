#ifndef tower_h
#define tower_h

class Tower{
    int h;

    public:

    Tower(int height)
    {
        h= height;
    };
    Tower(){
        h=1;
    };
    int getHeight();

};



#endif
