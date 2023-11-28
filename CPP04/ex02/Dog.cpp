#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const {
    std::cout << "Dog sound: Hav hav" << std::endl;
}