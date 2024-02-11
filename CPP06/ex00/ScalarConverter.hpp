#pragma once

#include "iostream"
#include <string>
#include <iomanip>
#include <cstdlib>

class ScalarConverter
{
    private:
        ScalarConverter(void);
        ~ScalarConverter(void);
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter &operator=(const ScalarConverter& copy);
    public:
        static void	convert(std::string &literal);
};
