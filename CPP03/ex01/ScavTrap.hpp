#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{  
private:

public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};
