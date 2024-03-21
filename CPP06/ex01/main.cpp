

#include "Serializer.hpp"

int main(void)
{
	{
		Data	*ptr  = 0;
		Data	*ptr2 = 0;
		uintptr_t raw = 0;

		try
		{
			ptr = new Data(65);
			raw = Serializer::serialize(ptr);
			ptr2 = Serializer::deserialize(raw);

			std::cout << "************************" << std::endl;
			std::cout << ptr->getRaw() << std::endl;
			std::cout << ptr2->getRaw() << std::endl;
			std::cout << raw << std::endl;
			std::cout << Serializer::serialize(ptr2) << std::endl;
			std::cout << "************************" << std::endl;
			delete ptr;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Data	*ptr = 0;
		uintptr_t raw = 0;
		uintptr_t raw2 = 0;

		raw = reinterpret_cast<uintptr_t>((Data [1]){30});
		ptr = Serializer::deserialize(raw);
		raw2 = Serializer::serialize(ptr);

		std::cout << "************************" << std::endl;
		std::cout << ptr->getRaw() << std::endl;
		std::cout << Serializer::deserialize(raw2)->getRaw() << std::endl;
		std::cout << raw << std::endl;
		std::cout << raw2 << std::endl;
		std::cout << "************************" << std::endl;
	}
	return (0);
}

