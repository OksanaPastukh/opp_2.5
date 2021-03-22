#define _USE_MATH_DEFINES
#include "Real.h"
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;

Real::Real(double x)
	: number(x)
{}
Real::Real(const Real& r)
{
	number = r.number;
}
Real::~Real()
{}
Real& Real::operator = (const Real& r)
{
	number = r.number;
	return *this;
}
Real::operator string () const 
{
	stringstream ss;
	return string(number);
}
ostream& operator << (ostream& out, const Real& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Real& r)
{
	cout << endl;
	in >> r.number;
	return in;
}
double operator ^(const Real& r,double value)
{
	double result;
	if (r.GetNumber().GetX() < 0)
	{
		return 0;
	}
	else if (value == 0)
	{
		result = 1;
	}
	else
	{
		result = pow(r.GetNumber().GetX(), 1 / value);
	}
	return result;
}
double Real::Power(double value)
{
	return pow(M_PI, value);
}
