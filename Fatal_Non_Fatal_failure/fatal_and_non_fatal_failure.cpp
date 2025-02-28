#include "pch.h"
#include"gtest/gtest.h"
#define POSTIVE

using namespace std;

int add_test(int a, int b) {
	return(a + b);
}
TEST(proTest0, add_test) {
	int var1 = 6;
	int var2 = 10;
	ASSERT_EQ(add_test(var1, var2), 16);
	EXPECT_EQ(add_test(var1, var2), 16);
	EXPECT_NE(add_test(var1, var2), 15);
	ASSERT_NE(add_test(var1, var2), 15);
	ASSERT_TRUE(add_test(1, 1));
	ASSERT_FALSE(add_test(0, 0));
}

TEST(NewTestCase, item_price) {
	ASSERT_FALSE(false);
}

TEST(proTest1, input_num) {
	EXMP exmp;
	int var = exmp.get_number();
#ifdef POSTIVE
	ASSERT_LE(var, 100);
	EXPECT_NE(var, 10);
	EXPECT_NE(var, 50);
	EXPECT_LE(var, 1000);
#else
	ASSERT_GE(var, 50);
	ASSERT_LE(var, 100);
	EXPECT_NE(var, 50);
	EXPECT_NE(var, 100);
#endif

}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
