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

void convert_to_char(std::string &str) {
	if (is_default(str)) {
		std::cout << "impossible" << std::endl;
		return ;
	}
    int num = std::atoi(str.c_str());
    char c = static_cast<char>(num);
    if (!isprint(c) || (std::stoi(str) > 125)){
        std::cout << "Non Displayable" << std::endl;
        return;
    }
	std::cout << "'" << c << "'" <<  std::endl;
}

void	convert_to_float(std::string &str)
{
	float number = std::strtof(str.c_str(), nullptr); // second params is for error handling (first invalid char adress)
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0f" << std::endl;
		return ;
	}
	std::cout << number << "f" << std::endl;
}


void	convert_to_double(std::string &str)
{
	double number = std::strtod(str.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0" << std::endl;
		return ;
	}
	std::cout << number << std::endl;
}


void	convert_to_int(std::string &str)
{
	if (is_default(str)) {
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << std::atoi(str.c_str()) << std::endl;
}

void	conversion_of_scalar_types(std::string str) {
	std::cout << "Char   : ", convert_to_char(str);
	std::cout << "Int    : ", convert_to_int(str);
	std::cout << "Float  : ", convert_to_float(str);
	std::cout << "Double : ", convert_to_double(str);
}


void ScalarConverter::convert(std::string &literal){

	bool is_okey = is_valid(literal);

	if (is_okey) conversion_of_scalar_types(literal);

	else std::cout << "Invalid" << std::endl; 

}