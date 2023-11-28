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


    const WrongAnimal* animals[4] = {new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat()};

    for (int i = 0; i < 4; i++){
        delete animals[i];
    }
}