#include "Bureaucrat.hpp"

int main(void)
{
	
	{
		try
		{
			Bureaucrat mike("Musa", 0);
			std::cout << mike << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";

	
	{
		try
		{
			Bureaucrat jim("Ali", 151);
			std::cout << jim << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	
	{	
		try 
		{
			Bureaucrat dur("Emin", 3);
			std::cout << dur << std::endl;
			dur.gradeUp();
			std::cout << dur << std::endl;
			dur.gradeUp();
			std::cout << dur << std::endl;
			dur.gradeUp();
			std::cout << dur << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";

	
	{	
		try 
		{
			Bureaucrat alan("Mehmet", 149);
			std::cout << alan << std::endl;
			alan.gradeDown();
			std::cout << alan << std::endl;
			alan.gradeDown();
			std::cout << alan << std::endl;
			alan.gradeDown();
			std::cout << alan << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
