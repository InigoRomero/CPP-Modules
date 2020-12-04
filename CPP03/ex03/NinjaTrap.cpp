#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
:
    ClapTrap(100, 100, 50, 50, 1, "loco", 20, 15, 3)
{
    std::cout << "ninjaFR4G-TP Nacio de chill" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
:
     ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
    std::cout <<"ninjaFR4G-TP Nacio de chill" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

NinjaTrap::~NinjaTrap() 
{
    std::cout << "ninjaFR4G-TP murio de chill" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap& op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &op)
        return (*this);
    this->_hit_points = op._hit_points;
	this->_max_hit_points = op._max_hit_points;
	this->_energy_points = op._energy_points;
	this->_max_energy_points = op._max_energy_points;
	this->_level = op._level;
	this->_name = op._name;
	this->_melee_attack_damage = op._melee_attack_damage;
	this->_ranged_attack_damage = op._ranged_attack_damage;
	this->_armor_damage_reduction = op._armor_damage_reduction;
    return (*this);
}

void		NinjaTrap::ninjaShoebox(ClapTrap & claptrap)
{
	std::cout << "" << claptrap.getName() << ": CHIDORI" << std::endl;
}


void		NinjaTrap::ninjaShoebox(NinjaTrap & ninjatrap)
{
	std::cout << "" << ninjatrap.getName() << ": RASENGAN" << std::endl;
}


void		NinjaTrap::ninjaShoebox(FragTrap & fragtrap)
{
	std::cout << "" << fragtrap.getName() << ": Kage bunsin no jutsu " << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap & scavtrap)
{
	std::cout << "" << scavtrap.getName() << " Ametaratsu" << std::endl;
}
