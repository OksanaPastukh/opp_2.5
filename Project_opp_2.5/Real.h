#pragma once
#include "Number.h"
#include <cmath>

class Real
{
	Number number;
public:
	Real(double x = 0);
	Real(const Real&);
	~Real();
	Number GetNumber() const { return number; }
	void SetNumber(Number value) { number = value; }

	Real& operator = (const Real& r);
	friend ostream& operator << (ostream& out, const Real& r);
	friend istream& operator >> (istream& in, Real& r);
	operator string () const;

	friend double operator ^ (const Real&, double value);
	static double Power(double value);

};

