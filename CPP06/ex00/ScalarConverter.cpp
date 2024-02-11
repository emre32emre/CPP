#include "ScalarConverter.hpp"

bool	is_default(std::string &s) {return (s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf" || s == "+inff" || s == "inff" || s == "-inff");}

static int check_all_item(std::string str) {
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




bool is_valid(std::string &str) {
	size_t	i;
	char	c;

	if (is_default(str))
		return (true);
	if (str.length() == 1 && isascii(str[0]) && !isdigit(str[0])) {
		//str = std::to_string(static_cast<int>(str[0])); // ascii to int
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

int ft_stoi(std::string s) {
  int multiplier = 1, result = 0;
  for (int i = s.length() - 1; i >= 0; i--) {
    result += multiplier * (s[i] - '0');
    multiplier *= 10;
  }
  return result;
}

void convertChar(std::string literal){
	if (is_default(literal)){
		std::cout << "impossible" << std::endl;
		return;
	}
	char c;
	if (literal.length() == 1){
		c = static_cast<char>(literal[0]);	
		if (literal[0] >= ' ' && literal[0] <= '~' && !isdigit(literal[0]))
		{
			std::cout <<  "'" << c << "'" << std::endl;
		}
		else
		{
			std::cout << "Non displayable" << std::endl;
			return;
		}
	}

	else{
		c = static_cast<char>(ft_stoi(literal));
		std::cout <<  "'" << c << "'" << std::endl;
	}
}

void convertInt(std::string literal){
	if (is_default(literal)){
		std::cout << "impossible" << std::endl;
		return;
	}
	int d = 0;
	if (literal.length() == 1 && isascii(literal[0]) && !isdigit(literal[0])){

		d = static_cast<int>(literal[0]);
		std::cout << d << std::endl;
	}
	else{
		d = static_cast<int>(ft_stoi(literal));
		std::cout << d << std::endl;
	}
}

void print_data(std::string literal){
	std::cout << "char : " ; convertChar(literal) ; 
	std::cout << "int : " ; convertInt(literal) ;
	std::cout << "float : " << std::endl;
	std::cout << "double : " << std::endl;

}


void ScalarConverter::convert(std::string &literal){

	bool is_okey = is_valid(literal);

	std::cout << "is_valid : " << is_okey << std::endl;
	if (is_okey)
	{
		print_data(literal);
	}
	else
	{
		std::cout << "Error : invalid literal" << std::endl;
	}


}
