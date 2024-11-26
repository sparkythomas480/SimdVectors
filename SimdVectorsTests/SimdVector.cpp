#include "pch.h"
TEST(SimdVector, AddWorksAsExpected)
{
	SimdVector v;
	const int result = v.Add(5, 3);
	ASSERT_EQ(result, 8);
}
