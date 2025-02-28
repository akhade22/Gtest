/*
Author: Satish Akhade(satish.sva@gmail.com)
Gtest example in the c++ provide the unit testing for string datatype 
*/

#include "pch.h"
#include"gtest/gtest.h"
#include"string.h"

using namespace std;

class MyFixtureSTR : public ::testing::Test {
public:
	STRNG strng;

};

TEST_F(MyFixtureSTR, CheckSTRPostivetest) {

	EXPECT_STREQ(strng.s1.c_str(), "ABCXYZ");
	ASSERT_STREQ(strng.s2.c_str(), "abcxyz");

}

TEST_F(MyFixtureSTR, CheckSTRnegativetest) {
	string s3 = strng.s1 + strng.s2;
	EXPECT_STRNE(strng.s1.c_str(), "abcxyz"); // non fatal failure
	ASSERT_STRNE(strng.s2.c_str(), "ABCXYZ"); //Fatal failure
	EXPECT_STRCASENE(s3.c_str(), "abcxyzABCp");
	EXPECT_STRCASEEQ(s3.c_str(), "abcxyzABCXYZ");
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

//-------------------------------------------------OutPut-------------------------------
/*
[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from MyFixtureSTR
[ RUN      ] MyFixtureSTR.CheckSTRPostivetest
[       OK ] MyFixtureSTR.CheckSTRPostivetest (0 ms)
[ RUN      ] MyFixtureSTR.CheckSTRnegativetest
[       OK ] MyFixtureSTR.CheckSTRnegativetest (0 ms)
[----------] 2 tests from MyFixtureSTR (1 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (4 ms total)
[  PASSED  ] 2 tests.

*/
