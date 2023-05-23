#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>
using namespace std;

class Histogram {
	int count[26];
	string str;
	void makeHisto();
public:
	Histogram(string s="");
	bool operator !(); // 연산자 함수
	Histogram& operator << (string s); // 연산자 함수. 리턴 타입 주목
	Histogram& operator << (char c); // 연산자 함수. 리턴 타입 주목
};

#endif
