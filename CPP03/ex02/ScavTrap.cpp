#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
:
    ClapTrap(100, 100, 50, 50, 1, "loco", 20, 15, 3)
{
    std::cout << "miniFR4G-TP Nacio de chill" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
:
     ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
    std::cout <<"miniFR4G-TP Nacio de chill" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "miniFR4G-TP murio de chill" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& op)
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

void		ScavTrap::challengeNewcomer(std::string const & target)
{
        std::string attacks[5] = { 
        "A hacer el CUB3D sin hacer nunca ningun leak", 
        "A poner la botella encima de la mesa",
        "A cagar encima de la mesa", 
        "A bailar la zarandonga",
        "A cantar la Rosalia"
        };
        
        if (this->_energy_points < 25)
        {
            std::cout << "miniFR4G-TP " << this->_name << "Se quedo sin energia el ranzio"<<std::endl;      
            return;
        }
        std::cout << "miniFR4G-TP " << this->_name << "Reta a " << target; 
        std::cout << attacks[rand() % 5] << std::endl;
        this->_energy_points -= 25;
}
