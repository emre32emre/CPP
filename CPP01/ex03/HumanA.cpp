#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : name(name), weapon(w) {

}
HumanA::~HumanA(){
	std::cout << this->name << "die." << std::endl;
}
void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}