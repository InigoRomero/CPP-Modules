#include "Weapon.hpp"

Weapon::Weapon()
:
    _type()
{}

Weapon::Weapon(std::string type)
:
    _type(type)
{}

Weapon::Weapon(const Weapon& copy)
:
    _type(copy._type)
{}

Weapon::~Weapon() {}

Weapon &Weapon::operator=(const Weapon& op)
{
    if (this == &op)
        return (*this);
    this->_type = op._type;
    return (*this);
}

const std::string&      Weapon::getType() { return (this->_type); }

void                    Weapon::setType(const std::string& type) { this->_type = type; }