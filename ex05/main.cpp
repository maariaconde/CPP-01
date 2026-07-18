#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "---- TEST 1: DEBUG ----" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n---- TEST 2: INFO ----" << std::endl;
	harl.complain("INFO");

	std::cout << "\n---- TEST 3: WARNING ----" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n---- TEST 4: ERROR ----" << std::endl;
	harl.complain("ERROR");

	return (0);
}