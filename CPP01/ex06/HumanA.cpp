#include "HumanA.hpp"

//Recibimos una referencia por lo tanto no se usa el new como en el ex05
HumanA::HumanA(std::string name, Weapon& weapon)
:
    _name(name),
    _weapon(weapon)
{}

HumanA::HumanA(const HumanA& copy)
:
    _name(copy._name),
    _weapon(copy._weapon)
{}

// no hacemos delete como en el anterior por que es una refencia y no se puede borrar de memoria desde ella
HumanA::~HumanA() {}

HumanA &HumanA::operator=(const HumanA& op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    this->_weapon = op._weapon;
    return (*this);
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}