#include "Cure.hpp"
#include "debug.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    if (DEBUG)
        std::cout << "[Cure]: materyal oluşturuldu." << std::endl;
}

Cure::Cure( Cure const & src ) : AMateria("cure")
{
    *this = src;
    if (DEBUG)
        std::cout << "[Cure]: material kopyalandı." << std::endl;
}

Cure&   Cure::operator=( const Cure& rhs ) {
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Cure::~Cure()
{
    if (DEBUG)
    std::cout << "[Cure]: silindi " << std::endl;
}

AMateria* Cure::clone() const
{
    if (DEBUG)
        std::cout << "[Cure]: clone işlemi başlatıldı." << std::endl;
    return (new Cure(*this));
}

void    Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}