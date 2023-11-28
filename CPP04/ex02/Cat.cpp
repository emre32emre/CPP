#include  "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const {
    std::cout << "Cat sound: Miyav miyav" << std::endl;
}