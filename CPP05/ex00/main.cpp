#include <iostream>
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){





    const WrongAnimal* meta = new WrongAnimal();

    const WrongAnimal* i = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();




    // {

    // Animal *animal = new Animal("Hayvan");
    // Animal *dog = new Dog();
    // Animal *cat = new Cat();

    // std::cout << "animal type:" << animal->getType() << std::endl;
    // std::cout << "dog type:" << dog->getType() << std::endl;
    // std::cout << "cat type:" << cat->getType() << std::endl;
    
    // cat->makeSound();
    // dog->makeSound();

    // delete animal;
    // delete dog;
    // }
    


    // Animal animal("Hayvan");
    // Dog dog;
    
    // Animal& animalRef = animal;
    // Animal& dogRef = dog;


    // std::cout << "animal type:" << animalRef.getType() << std::endl;
    // std::cout << "dog type:" << dogRef.getType() << std::endl;

    // animalRef.makeSound();
    // dogRef.makeSound();



}