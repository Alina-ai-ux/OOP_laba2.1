#include <sstream>
#include "Money.h"
Money::Money() {
	par = 0;
	numberofbills = 0;
}
Money::Money(int r = 0, int i = 0) {
	par = r;
	numberofbills = i;
}
Money::Money(const Money& r) {
	par = r.par;
	numberofbills = r.numberofbills;
}
Money::~Money() {}
int Money::sum() const {
	return par * numberofbills;
}
void  Money::SetPar(int value) {
	if (value == 1 || value == 2 || value == 5 || value == 10 || value == 20 || value == 50 || value == 100 || value == 200 || value == 500)
		par = value;
	else
		par = 0;
}
Money::operator string () const
{
	stringstream ss;
	ss << "Par = " << par << endl;
	ss << "Numberofbills = " << numberofbills << endl;
	return ss.str();
}
Money Money::operator --(int)
{
	Money a(*this);
	numberofbills--;
	return a;
}
Money Money::operator ++(int)
{
	Money a(*this);
	numberofbills++;
	return a;
}
Money Money::operator--() {
	--par;
	return *this;
}
Money Money::operator ++() {
	++par;
	return *this;
}