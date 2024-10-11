#include "pch.h"
#include "CppUnitTest.h"
extern "C" int getPerimeter(int* Length, int* Width);
extern "C" int getArea(int* Length, int* Width);
extern "C" void setLength(int, int* Length);
extern "C" void setWidth(int, int* Width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnittestforBCSRec
{
	TEST_CLASS(Func_getPerimeter_test)
	{
	public:

		TEST_METHOD(Test1)
		{
			int Result = 0;
			int Length = 2;
			int Width = 2;
			Result = getPerimeter(&Length, &Width);
			Assert::AreEqual(8, Result);
		}
	};
	TEST_CLASS(Func_getArea_test)
	{
	public:

		TEST_METHOD(Test1)
		{
			int Result = 0;
			int Length = 2;
			int Width = 2;
			Result = getArea(&Length, &Width);
			Assert::AreEqual(4, Result);
		}
	};

	TEST_CLASS(Func_setLength_test)
	{
	public:
		TEST_METHOD(Test1)
		{
			int Length = 1;
			int Input = 2;
			setLength(Input, &Length);
			Assert::AreEqual(2, Length);
		}
		TEST_METHOD(Test2)
		{
			int Length = 3;
			int Input = 0;
			setLength(Input, &Length);
			Assert::AreEqual(3, Length);
		}
		TEST_METHOD(Test3)
		{
			int Length = 5;
			int Input = 100;
			setLength(Input, &Length);
			Assert::AreEqual(5, Length);
		}
	};
	TEST_CLASS(Func_setWidth_test)
	{
	public:
		TEST_METHOD(Test1)
		{
			int Width = 1;
			int Input = 4;
			setWidth(Input, &Width);
			Assert::AreEqual(4, Width);
		}
		TEST_METHOD(Test2)
		{
			int Width = 3;
			int Input = 0;
			setWidth(Input, &Width);
			Assert::AreEqual(3, Width);
		}
		TEST_METHOD(Test3)
		{
			int Width = 5;
			int Input = 100;
			setWidth(Input, &Width);
			Assert::AreEqual(5, Width);
		}
	};


}

