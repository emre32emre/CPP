#pragma once
#include <iostream>
#include "Brain.hpp"



class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(std::string type);
    virtual ~AAnimal();
    AAnimal(const AAnimal &copy);
    AAnimal &operator=(const AAnimal &copy);
    std::string getType() const;
    virtual void makeSound() const = 0;

};