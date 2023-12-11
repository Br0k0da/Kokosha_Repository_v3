#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Kokosha_Main/Kokosha_Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Kokosha_MainTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Check_UserInput_Empty)
		{
			string str = "";
			bool expected = false;

			bool actual = UserInput(str);

			Assert::AreEqual(expected, actual, L"Entered empty value");
		}

		TEST_METHOD(Check_UserInput_Letter)
		{
			string str = "a";

			bool expected = false;

			bool actual = UserInput(str);

			Assert::AreEqual(expected, actual, L"Entered empty value");
		}

		TEST_METHOD(Check_UserInput_NegativeValue)
		{
			string str = "-5";

			bool expected = false;

			bool actual = UserInput(str);

			Assert::AreEqual(expected, actual, L"Entered empty value");
		}

		TEST_METHOD(Checkresulton1_20and1and2_1returned)
		{
			int A = 20;
			int B = 1;
			int C = 5;

			int expected = 4;

			int actual = delenie1(A,B,C);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}

		TEST_METHOD(Checkresulton1_10and1and5_1returned)
		{
			int A = 10;
			int B = 1;
			int C = 5;

			int expected = 4;

			int actual = delenie1(A, B, C);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}

		TEST_METHOD(Checkresulton2_10and1and5_6returned)
		{
			int A = 10;
			int B = 1;
			int C = 5;

			int expected = 1;

			int actual = delenie2(A, B, C);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}

		TEST_METHOD(Checkresulton2_10and5and5_6returned)
		{
			int A = 10;
			int B = 5;
			int C = 5;

			int expected = 1;

			int actual = delenie2(A, B, C);

			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}
	};
}