#pragma once 
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
    Brain* brain;
public:
    Cat();
    ~Cat();

    void makeSound() const;

};
