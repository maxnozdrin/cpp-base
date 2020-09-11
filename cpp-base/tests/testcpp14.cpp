#include <gtest\gtest.h>
#include "../src/standards/cpp14.h"

TEST(TestCpp14, test)
{
	int s = cpp14::sum(10);
	EXPECT_EQ(s, 100);
}