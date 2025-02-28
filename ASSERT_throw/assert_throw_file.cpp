/*
Author: Satish Akhade(satish.sva@gmail.com)
Gtest example in the c++ provide the exception throw handle unit testing, also shared positive result of unit test
*/

#include "pch.h"
#include"gtest/gtest.h"
using namespace std;

class MyFixtureNumber : public ::testing::Test {
public:
	throwExcp ExcpThrw;

};

TEST_F(MyFixtureNumber, CheckExcpThrow) {

	ASSERT_ANY_THROW(ExcpThrw.FunReturnExcp(-100));
	EXPECT_THROW(ExcpThrw.FunReturnExcp(-100), std::logic_error);
	ASSERT_NO_THROW(ExcpThrw.FunReturnExcp(100));
	EXPECT_NO_THROW(ExcpThrw.FunReturnExcp(100));

}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

//-------------------------------OutPut -----------------------------------
/*

[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from MyFixtureNumber
[ RUN      ] MyFixtureNumber.CheckExcpThrow
hello how are you?
number is less than zero
hello how are you?
number is less than zero
hello how are you?
number is greater than zero
hello how are you?
number is greater than zero
[       OK ] MyFixtureNumber.CheckExcpThrow (1 ms)
[----------] 1 test from MyFixtureNumber (2 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (4 ms total)
[  PASSED  ] 1 test.

*/
