#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double actualResult;
			actualResult = f(5.0);
			double expectedResult = -0.417363;
			Assert::AreEqual(to_string(actualResult), to_string(expectedResult));

		}
	};
}
