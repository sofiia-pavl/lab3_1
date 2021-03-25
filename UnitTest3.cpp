#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3-1/Triad.h"
#include "C:\Users\Софія\source\repos\lab3-1\lab3-1\Triad.cpp"
#include "../lab3-1/Vector3d.h"
#include "C:\Users\Софія\source\repos\lab3-1\lab3-1\Vector3d.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad o(2, 3, 1), c(2, 2, 2);
			Vector3d a(o), b(c);
			Assert::AreEqual(a * b, 12);
		}
	};
}
