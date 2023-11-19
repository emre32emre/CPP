#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap clap("Ben Claptrap");
    clap.attack("PKK");
    clap.takeDamage(2);
    clap.beRepaired(4);

    std::cout << "****************" << std::endl;

    ScavTrap scav("Ben Scavtrap");
    scav.attack("Amerika");
    scav.takeDamage(2);
    scav.beRepaired(4);
    scav.guardGate();

    std::cout << "****************" << std::endl;

    FragTrap frag("Ben Fragtrap");
    frag.attack("Isviçre");
    frag.takeDamage(5);
    frag.beRepaired(10);
    frag.highFivesGuys();

}