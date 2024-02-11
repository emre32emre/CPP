#pragma once

#include "iostream"
#include <string>
#include <iomanip>
#include <cstdlib>

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define NORM "\x1B[0m"

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
