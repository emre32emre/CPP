#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	std::cout << "**********" << std::endl;
	{

		Weapon ak47("kalaşnikof");
		HumanA a("musa",ak47);
		a.attack();
		ak47.setType("m4a1");
		a.attack();
	}
	std::cout << "**********" << std::endl;
	{
		Weapon myW("Balta");
		HumanB b("mutlu");
		b.setWeapon(myW);
		b.attack();
	}

}
