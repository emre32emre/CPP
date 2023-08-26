#include "Zombie.hpp"

int main()
{

	{
		Zombie *heapZombie = newZombie("Heap -> Zombie");
		heapZombie->announce();
		delete(heapZombie);
	}
	
	
	{
		Zombie stackZombie("Stack -> Zombie");
		stackZombie.announce();

	}
}