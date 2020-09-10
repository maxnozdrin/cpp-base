#include <gtest/gtest.h>
#include "../src/patterns/singleton.h"

TEST(TestSingleton, testNull) {
	EXPECT_NE(Singleton::getInstance(), nullptr);
}

TEST(TestSingleton, testEQ) {
	EXPECT_EQ(Singleton::getInstance(), Singleton::getInstance());
}