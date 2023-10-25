#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB6.1/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61IT
{
	TEST_CLASS(UnitTest61IT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4, 5, 6 };
			int size = 6;

			double z = Sum(a, size);
			Assert::AreEqual(z, 8.0);
		}
	};
}
