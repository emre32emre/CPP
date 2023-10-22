#pragma once
#include <iostream>

class Fixed
{
private:
    int number;
    static const int fractionalBits = 8;
public:
        // Constructors
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        // Copy Const.
        Fixed(const Fixed &original);
        // Destructor
        ~Fixed();
        //Operator Overloads
        Fixed &operator=(const Fixed &other);
        bool operator>(const Fixed &left);
        bool operator<(const Fixed &left);
        bool operator<=(const Fixed &left);
        bool operator>=(const Fixed &left);
        bool operator==(const Fixed &left);
        bool operator!=(const Fixed &left);
        Fixed operator+(const Fixed &left);
        Fixed operator-(const Fixed &left);
        Fixed operator*(const Fixed &left);
        Fixed operator/(const Fixed &left);
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        // Member functions
        float toFloat(void)const;
        int toInt(void)const;
        int	getRawBits(void) const;
		void setRawBits(int const raw);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);

};
std::ostream &operator<<(std::ostream &output, const Fixed &obj);
