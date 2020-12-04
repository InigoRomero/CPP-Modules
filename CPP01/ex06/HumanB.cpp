#include "HumanB.hpp"

//Recibimos una referencia por lo tanto no se usa el new como en el ex05
HumanB::HumanB(std::string name)
:
    _name(name),
    _weapon(new Weapon())
{}

HumanB::HumanB(const HumanB& copy)
:
    _name(copy._name),
    _weapon(copy._weapon)
{}

// no hacemos delete como en el anterior por que es una refencia y no se puede borrar de memoria desde ella
HumanB::~HumanB() {}

HumanB &HumanB::operator=(const HumanB& op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    this->_weapon = op._weapon;
    return (*this);
}

void HumanB::attack()
{
    // cambiamos . por -> para poder acceder
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){ this->_weapon = &weapon; }