#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Dell\source\repos\7.1\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
        {
            int mass[45] = { -28,  36,  34,  49,   7, -16,  15, -24, -21, -21, -15, -18, -20,  23,  2, -6, -8,   9, -2,  33, 17, -6, -11,  34,   6, 20,  20,  25,   1,  37,  40,  46,  35,  16,  33,  48, -3, -23, -11,  19,  50, -1,  38,  17,  22, },
                k = 0,
                S = 0;
            (mass, 23, k, S);
            Assert::AreEqual(k, 0);
            Assert::AreEqual(S, 0);
            Assert::AreEqual(mass[0], -28);
            Assert::AreEqual(mass[44], 22);
        }
	};
}
