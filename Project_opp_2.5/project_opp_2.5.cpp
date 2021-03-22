#include "Number.h"
#include <iostream>
#include "Real.h"
using namespace std;

int main()
{
	Number a(1);
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	Number b;
	cin >> b;
	cout << b << endl;
	Number c;
	cin >> c;
	cout << c << endl;
	Number d = b - c;
	Number f = b * c;
	cout << " Remove " << d << endl;
	cout << " Multiplication  " << f << endl;
	Real r;
	cin >> r;
	cout << r << endl;
	double value;
	double power;
	cout << " Enter the power for the roots = "; cin >> value;
	double g = r ^ value;
	cout << "The root of a given power = " << g << endl;
	cout << " Enter the power  = "; cin >> power;
	cout << "Pi to the power equals  =  " << r.Power(power) << endl;
	cin.get();
	return 0;
}