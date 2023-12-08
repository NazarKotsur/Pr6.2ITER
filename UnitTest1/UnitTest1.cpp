#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr6.2ITER/Pr6.2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestSumOddIndexedElements)
		{
			// Arrange
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };

			// Act
			int result = sumOddIndexedElements(arr, size);

			// Assert
			Assert::AreEqual(6, result);
		}

	
	};
}
