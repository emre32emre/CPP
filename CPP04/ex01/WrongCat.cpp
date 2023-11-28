#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
    this->brain = new Brain();
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
    delete this->brain;
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat sound" << std::endl;
}