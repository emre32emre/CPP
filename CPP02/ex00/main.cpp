#include "Fixed.hpp"
int main()
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;


    // float sayi = 0.0;
    // for (int i = 0; i < 10; i++) {
    //     sayi += 0.1;
    // }

    // if (sayi == 1.0) 
    //     std::cout << "sayı 1 e eşit" << std::endl;
    // else 
    //     std::cout << "sayi 1e eşit değil:" <<  std::endl;
    

}

