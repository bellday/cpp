#include <iostream>
using namespace std;

#include "Histogram.h"

int main() {
	Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
	song << "falling" << " in love with you." << "- by "; // 히스토그램에 문자열 추가
	song << 'k' << 'i' << 't';  // 히스토그램에 문자 추가
	!song;  // 히스토그램 그리기
}
