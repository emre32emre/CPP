
#include "Ice.hpp"
#include "debug.hpp"

Ice::Ice() : AMateria("ice")
{
    if (DEBUG)
        std::cout << "[Ice]: materyal oluşturuldu." << std::endl;
}

Ice::Ice( Ice const & src ) : AMateria("ice")
{
    *this = src;
    if (DEBUG)
        std::cout << "[Ice]: material kopyalandı." << std::endl;
}

Ice&   Ice::operator=( const Ice& rhs ) {
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Ice::~Ice()
{
    if (DEBUG)
        std::cout << "[Ice]: silindi." << std::endl;
}

AMateria* Ice::clone() const
{
    if (DEBUG)
        std::cout << "[Ice]: clone işlemi başlatıldı." << std::endl;
    return (new Ice(*this));
}

void    Ice::use( ICharacter& target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}