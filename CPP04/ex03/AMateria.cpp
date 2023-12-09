#include "AMateria.hpp"
#include "debug.hpp"


AMateria::AMateria( void ) : _type("")
{
    if (DEBUG)
        std::cout << "Material kaynağı oluşturuldu." << std::endl;
}

AMateria::AMateria( std::string const & type )  : _type(type)
{
    if (DEBUG)
        std::cout << "[AMateria]: " << this->_type << " oluşturldu." << std::endl;
}

AMateria::AMateria( AMateria const & src )
{
    *this = src;
}

AMateria::~AMateria( void )
{
    if (DEBUG)
        std::cout << "[AMateria]: " << this->_type << " silindi." << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "[AMateria]: " << this->_type << " default use kullanıldı " << target.getName() << std::endl;
}