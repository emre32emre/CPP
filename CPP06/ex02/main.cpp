
#include "Base.hpp"

int main(void)
{
	try
	{
		Base* p = generate();

		identify(p);
		identify(*p);

		delete p;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
