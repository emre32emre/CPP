#include <iostream>



#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(){


    const WrongAnimal* meta = new WrongAnimal();

    const WrongAnimal* i = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete i;

    // WrongAnimal animal;
    // WrongCat cat;

    // WrongAnimal &ref = animal;
    // WrongAnimal &catRef = cat;

    // std::cout << ref.getType() << std::endl;
    // std::cout << catRef.getType() << std::endl;

    // ref.makeSound();
    // catRef.makeSound();








}