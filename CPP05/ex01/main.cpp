#include "Form.hpp"
#include "Bureaucrat.hpp"
int main(void)
{

	{
		try
		{
			Form form0("A99", 0, 5);
			std::cout << form0 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}

	std::cout << "\n --------------------- \n\n";


	{
		try
		{
			Bureaucrat mike("Mike", 15);
			Form form("B58", 20, 45);
			std::cout << mike << std::endl;
			std::cout << form << std::endl;
			mike.signForm(form);
			std::cout << form << std::endl;
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
			Bureaucrat jon("Jon", 35);
			Form form2("C_303", 20, 45);
			std::cout << jon << std::endl;
			std::cout << form2 << std::endl;
			jon.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
