#pragma once
#include "iostream"

class ClapTrap{
z:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
public:
    ClapTrap(std::string name);
    ClapTrap &operator=(ClapTrap &other);
    ~ClapTrap();
    ClapTrap(const ClapTrap &original);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};