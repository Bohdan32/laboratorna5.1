#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p, q;
			cout << "p = "; cin >> p;
			cout << "q = "; cin >> q;
			double t;
			t = (k(1 + p, q * q) * k(1 + p, q * q) - k(q * p, 1)) / (1 + k(p * p, q));
			Assert::AreEqual(t, -0.122202);

		}
	};
}