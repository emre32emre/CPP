#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Bad number of args" << std::endl;
		return (0);
	}
	
	std::string str = (std::string)av[1];
	ScalarConverter::convert(str);
}
