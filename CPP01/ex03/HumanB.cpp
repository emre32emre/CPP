#include "HumanB.hpp"
HumanB::HumanB(std::string name) : name(name){
	this->weapon = NULL;
}

HumanB::~HumanB(){
	std::cout << this->name << "die." << std::endl;
}
void HumanB::setWeapon(Weapon w){
	this->weapon = &w;
}

void HumanB::attack(){
	if(this->weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a weapon to attack." << std::endl;
}
