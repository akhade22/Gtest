// pch.h
/*
Author: Satish Akhade(satish.sva@gmail.com)
Gtest example in the c++ provide the exception throw handle unit testing, also shared positive result of unit test
*/
#include "gtest/gtest.h"
#include<stdexcept>
#include<string>

class throwExcp {
	public :
		int var;

		void FunReturnExcp(int var) {
			std::cout << "hello how are you?" << std::endl;
			if (var < 0) {
				std::cout << "number is less than zero" << std::endl;
				throw std::logic_error("Erro less than zero");
			}
			else {
				std::cout << "number is greater than zero" << std::endl;
				//throw std::logic_error("Number greater than zero");
			}
		}

};



