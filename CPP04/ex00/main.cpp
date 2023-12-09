#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(){

    const Animal *meta = new Animal();

    const Animal *i = new Dog();
    const Animal *j = new Cat();

    std::cout << "i type:" << i->getType() << std::endl;
    std::cout << "j type:" << j->getType() << " " << std::endl;

    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
    

    // Animal animal;
    // Dog dog;
    // Cat cat;

    // Animal &ref = animal;
    // Animal &dogRef = dog;
    // Animal &catRef = cat;


    // std::cout << "ref type :" <<ref.getType() << std::endl; 
    // std::cout << "dog type:" << dogRef.getType() << std::endl;
    // std::cout << "cat type:" << catRef.getType() << std::endl;

    // ref.makeSound();
    // dogRef.makeSound();
    // catRef.makeSound();









}