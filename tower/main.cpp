#include <iostream>
#include "tower.h"
#include "tower.cpp"
using namespace std;
int main() {
	Tower myTower; // 1 미터
	Tower seoulTower(100); // 100 미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}
