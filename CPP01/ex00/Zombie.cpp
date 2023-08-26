#include "Zombie.hpp"

Zombie::Zombie(){
	this->Name = "undefined name";
}

Zombie::Zombie(std::string name){
	this->Name = name;
}

Zombie::~Zombie(){
	std::cout << this->Name << ": Zombie die." << std::endl;
}

void Zombie::announce(){
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}