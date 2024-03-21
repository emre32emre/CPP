

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>

typedef struct Data
{
private:
	uintptr_t	_raw;
public:
	//Orthodox Canonical Form
	Data(void);
	Data(uintptr_t raw);
	Data(const Data& copy);
	~Data(void);
	Data&	operator=(const Data& other);

	//Setters and Getters
	void				setRaw(uintptr_t raw);
	const uintptr_t&	getRaw(void) const;
}				Data;

#endif
