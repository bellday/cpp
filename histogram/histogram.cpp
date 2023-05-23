#include "Histogram.h"
#include <iostream>
using namespace std;

void Histogram::makeHisto()
{
     int len=str.size();
     for (size_t i = 0; i < len; i++)
     {
        if(isalpha(str[i])){
            char c= tolower(str[i]);
            count[c-'a']++;
        }
     }
}
bool Histogram::operator!()
{
    makeHisto();
    for (size_t i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        cout<< c << ':';
        for (size_t j = 0; j < count[i]; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    return true;
}
Histogram::Histogram(string s)
{
    str=s;
    
}

Histogram &Histogram::operator<<(string s)
{
    str=str+s;
    return *this;
}

Histogram &Histogram::operator<<(char c)
{
    str=str+c;
    return *this;
}
