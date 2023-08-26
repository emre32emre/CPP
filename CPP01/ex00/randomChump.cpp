#include "Zombie.hpp"
void randomChump(std::string name){
	Zombie *sample_zombie = new Zombie(name);
	sample_zombie->announce();
	delete(sample_zombie);
}