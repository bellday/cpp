#ifndef date_h
#define date_h
#include <string>
#include <iostream>
using namespace std;
class Date{
    int year,month,day;
    public:
    Date(int a, int b, int c);
    Date(string s);
    int getYear();
    int getMonth();
    int getDay();
    void show();
    ~Date();

    
};
inline Date :: Date(int a, int b , int c){
        year =a;
        month =b;
        day =c;
    }
inline Date :: Date(string s){
    int index1 = s.find("/");
    string y =s.substr(0,index1);
    year = stoi(y);
    int index2 = s.find("/",index1+1);
    string m =s.substr(index1+1,index2-index1 -1);
    month = stoi(m);
    string d = s.substr(index2+1,s.length()-index2 -1);
    day = stoi(d);


}
inline void Date :: show(){
    cout << year <<"년" << month << "월" << day <<"일" << endl;
}
Date::~Date()
{
}

#endif
