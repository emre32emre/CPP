#pragma once

#include <iostream>
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal{
    private:
        Brain* brain;
    public:
        WrongCat();
        ~WrongCat();
        void makeSound() const;
};