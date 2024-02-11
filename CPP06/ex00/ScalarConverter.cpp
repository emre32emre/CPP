#include "ScalarConverter.hpp"


static int check_all_item(std::string str)
{
    char tmp2;
    size_t i = 0, moref = 0, moreinc = 0, moredec = 0, morepoint = 0;
    for (i = 0; i < str.size(); i++) {
        char tmp = str[i];
		if (tmp == 'f') moref += 1;
		else if (tmp == '+') moreinc += 1;
		else if (tmp == '-') moredec += 1;
		else if (tmp == '.') morepoint += 1;
    }
    tmp2 = str[i-1];
    if(moref > 1 || moreinc > 1 || moredec > 1 || morepoint > 1 || (moref == 1 && tmp2 != 'f'))
        return(-1);
    return(1);
}


bool	is_default(std::string &s) {return (s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf" || s == "+inff" || s == "inff" || s == "-inff");}


bool is_valid(std::string &str)
{
	size_t	i;
	char	c;

	if (is_default(str))
		return (true);
	if (str.length() == 1 && isascii(str[0]) && !isdigit(str[0])) {
		str = std::to_string(static_cast<int>(str[0])); // ascii to int
		return (true);
	}
	if(check_all_item(str) != 1)
        return (false);
	for (i = 0; i < str.size(); i++)
	{
		c = str[i];
		if (!isdigit(c) && c != '-' && c != '+' && c != 'f'&& c != '.')
			return (false);
	}
	return (true);
}


void ScalarConverter::convert(std::string &literal){

	bool is_okey = is_valid(literal);
	std::cout << "literal:" << literal << "  | is valid:"  << is_okey << std::endl;
}