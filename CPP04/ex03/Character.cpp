
#include "Character.hpp"
#include "debug.hpp"

Character::Character( std::string const & name ) : _name(name)
{
    for (int i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
    }
    if  (DEBUG)
        std::cout << "[Character]: \"" << this->_name << "\" oluşturuldu." << std::endl;
}

Character::Character( Character const & src ) : _name(src._name)
{
    *this = src;
    if  (DEBUG)
        std::cout << "[Character]: \"" << this->_name << "\" oluşturuldu." << std::endl;
}

Character& Character::operator=( Character const & rhs )
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = rhs._inventory[i];
    }
    return *this;
}

Character::~Character()
{
    if (DEBUG)
        std::cout << "[Character]: " << this->_name << " silindi." << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
}

void    Character::equip( AMateria* m ) {
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            if (DEBUG)
                std::cout << "[Character]: \"" << this->_name << "\" envanterine \'" << m->getType()  <<  "\' ekledi."<< std::endl;
            return;
        }
    if (DEBUG)
        std::cout << "[Character]: \"" << this->_name << "\" envanterine \'" << m->getType()  <<  "\' ekleyemedi."<< std::endl;
}

void    Character::unequip( int idx ) {
    if(idx < 0 || idx > 3)
        return;
    if (this->_inventory[idx])
    {
        if (DEBUG)
            std::cout << "[Character]: \"" << this->_name << "\" envanterinden " << this->_inventory[idx]->getType() << " malzemesi silindi." << std::endl;
        delete this->_inventory[idx];
        this->_inventory[idx] = NULL;
    }
    else
    {
        if (DEBUG)
            std::cout << "[Character]: \"" << this->_name << "\" envanterinden " << idx << " nolu malzemesi yok." << std::endl;
    }

}

void    Character::use( int idx, ICharacter& target ) {
    if(idx < 0 || idx > 3)
        return;
    if (this->_inventory[idx])
    {
        this->_inventory[idx]->use(target);
        if (DEBUG)
            std::cout << "[Character]: \"" << this->_name << "\" karakteri \'" << this->_inventory[idx]->getType() << "\' malzemesini kullandı." << std::endl;
    }
    else {
        if (DEBUG)    
            std::cout << "[Character]: \"" << this->_name << "\" karakteri böyle bir malzemesi yok." << std::endl;
    }
}

std::string const& Character::getName() const {
    return this->_name;
}