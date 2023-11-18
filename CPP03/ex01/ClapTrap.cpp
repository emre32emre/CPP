#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string name) : name(name),hitPoints(10), energyPoints(10) , attackDamage(0){
   //std::cout << "ClapTrap " << name << " is born!" << std::endl;
}



ClapTrap::ClapTrap(const ClapTrap &original){
    this->attackDamage = original.attackDamage;
    this->energyPoints = original.energyPoints;
    this->hitPoints = original.hitPoints;
    this->name = original.name;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->attackDamage = other.attackDamage;
        this->energyPoints = other.energyPoints;
        this->hitPoints = other.hitPoints;
        this->name = other.name;
    }
    return (*this);
}

ClapTrap::~ClapTrap(){
    //std::cout << name << " ->Destructor called." << std::endl;
}

/*******************   MEMBER FUNCTİON   ******************/
void ClapTrap::attack(const std::string& target) {
    if(energyPoints <= 0)
        std::cout << "ClapTrap(" << name << ") is out of energy" << std::endl;
    else{
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
    hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints <= amount)
    {
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
    energyPoints -= 1;
    hitPoints += amount;
}


