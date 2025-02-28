#include"gtest/gtest.h"
#include<stdexcept>

int add_test(int a, int b);

class EXMP
{
	int req;
public:
	EXMP() :req(100) {
		std::cout << "Constructors got called" << std::endl;
		std::cout << "Init value of req :" << req << std::endl;
	}
	~EXMP() {
		std::cout << "Destructors got called" << std::endl;
	}
	int get_number(void) {
		try {
			std::cout << "get the new number" << std::endl;
			std::cin >> req;
			std::cout << "New number" << req << std::endl;
			if (req < 100) {
				throw ("ERROR number less than 100");
			}
			else if (req == 100) {
				throw ("Number is equal to 100");
			}
			else
			{
				throw ("Error Number is greater than 100 ");
			}
		}
		catch (const char* msg) {
			std::cout << "Exception:" << msg << std::endl;
		}
		return req;
	}

};


