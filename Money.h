#pragma once
#include <string>
#include <iostream>
using namespace std;
class Money {
private:
	int par;
	int numberofbills;
public:
	Money();
	Money(int, int);
	Money(const Money&);
	~Money();
	int sum() const;
	void SetPar(int value);
	void SetNumberofbills(int value) { numberofbills = value; }
	int GetPar() { return par; }
	int GetNumberofbills() { return numberofbills; }
	Money& operator = (const Money&);
	operator string() const;
	Money operator --(int);
	Money operator ++(int);
	Money operator --();
	Money operator ++();
};