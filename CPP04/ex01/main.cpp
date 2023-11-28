#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(){

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    const Animal* animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};

    for (int i = 0; i < 4; i++){
        delete animals[i];
    }











}