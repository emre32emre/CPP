#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>



int main()
{


    try {
        Bureaucrat br("musa", 12);
        std::cout << br.getName() << " notu: " << br.getGrade() << std::endl;
        br.incrementGrade(10);
        std::cout << br.getName() << " notu: " << br.getGrade() << std::endl;
        br.decrementGrade();
        std::cout << br.getName() << " notu: " << br.getGrade() << std::endl;
        br.decrementGrade(50);
        std::cout << "hi" << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }


}