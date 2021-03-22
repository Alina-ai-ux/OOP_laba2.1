#include <iostream>
#include "Money.h"
using namespace std;
int main() {
	Money m();
	Money m1(50, 5);
	cout << "sum = " << m1.sum()<< endl;
	Money m2(m1);
	Money m3;
	int x, y;
	cout << "Par?";
	cin >> x;
	cout << "Numberofbills?";
	cin >> y;
	m3.SetPar(x);
	m3.SetNumberofbills(y);
	cout << "sum = " << m3.sum();
	return 0;
}