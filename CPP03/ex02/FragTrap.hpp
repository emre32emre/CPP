#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
private:

public:
    FragTrap(std::string name);
    ~FragTrap();

    void highFivesGuys(void);
};