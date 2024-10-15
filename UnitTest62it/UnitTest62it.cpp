#include "pch.h"
#include "CppUnitTest.h"
#include "../lab62it/lab62it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			int expected[] = { 5, 4, 3, 2, 1 };

			reverseArray(arr, 5);

			for (int i = 0; i < 5; ++i) {
				Assert::AreEqual(expected[i], arr[i]);  
			}
		}
	};
}