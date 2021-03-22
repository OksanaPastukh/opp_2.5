#include "pch.h"
#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES
#include <cmath>
#include "CppUnitTest.h"
#include "../Project_opp_2.5/Number.cpp"
#include "../Project_opp_2.5/Real.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp25
{
	TEST_CLASS(UnitTestopp25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			Real r;
			c = r.Power(0);
			Assert::AreEqual(c, 1.0);
		}
	};
}
