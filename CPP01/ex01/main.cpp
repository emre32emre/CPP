#include "Zombie.hpp"
int main()
{
	{
		Zombie *z = zombieHorde(3,"Heap -> Zombies");
		for(int i = 0;i < 3; i++) {
			z[i].announce();
		}
		delete[] z;
	}
	std::cout << "**********************" << std::endl;
	{
		Zombie stackZombies[3];
		for(int i = 0; i < 3; i++){
			stackZombies[i].setName("Stack -> Zombies");
			stackZombies[i].announce();
		}

	}
}