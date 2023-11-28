#include <iostream>

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(){

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();


    j->makeSound();
    i->makeSound();



    delete j;
    delete i;

    // const AAnimal* animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};

    // for (int i = 0; i < 4; i++){
    //     delete animals[i];
    // }











}