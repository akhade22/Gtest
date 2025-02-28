/*
Author: Satish Akhade(satish.sva@gmail.com)
Gtest example in the c++ provide the unit testing for string datatype 
*/

#include"gtest/gtest.h"
#include<stdexcept>
#include<string>

class STRNG {
public:
	std::string s1;
	std::string s2;

	STRNG() {
		s1 = "ABCXYZ";
		s2 = "abcxyz";
	}
	~STRNG() {}
};
