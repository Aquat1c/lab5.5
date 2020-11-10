#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double test;
			const double b1 = 1;
			const double q = 2;
			const double n = 3;
			test = q * (b1, q, n - 1);
		Assert::AreEqual(test, 4.);
		}
	};
}
