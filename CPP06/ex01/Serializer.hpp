
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>

class Serializer
{
private:
	//Private Orthodox Canonical Form
	Serializer(void);
	Serializer(const Serializer& copy);
	~Serializer(void);
	Serializer&	operator=(const Serializer& other);

public:
	//Static Member Functions
	static uintptr_t	serialize(Data *ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif

