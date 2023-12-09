#pragma once
#include <iostream>


class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &copy);
    std::string getType() const;
    virtual ~Animal();
    virtual void makeSound() const;
};