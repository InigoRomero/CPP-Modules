#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
:
	_hit_points(100),
    _max_hit_points(100),
    _energy_points(50),
    _max_energy_points(50),
    _level(1),
    _name("LocoMundo"),
    _melee_attack_damage(20),
    _ranged_attack_damage(15),
    _armor_damage_reduction(3)
{
    std::cout << "miniFR4G-TP Nacio de chill" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
:
	_hit_points(100),
    _max_hit_points(100),
    _energy_points(50),
    _max_energy_points(50),
    _level(1),
    _name(name),
    _melee_attack_damage(20),
    _ranged_attack_damage(15),
    _armor_damage_reduction(3)
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

void			ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "miniFR4G-TP " << this->_name << " ataca a "<< target << " de lejos, ¡causándole "<< this->_ranged_attack_damage << " puntos de daño!" <<std::endl;
}

void			ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "miniFR4G-TP " << this->_name << " ataca a "<< target << "de cerca, ¡causándole "<< this->_melee_attack_damage << " puntos de daño!" <<std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "miniFR4G-TP " << this->_name << " Reducira el daño: " << this->_armor_damage_reduction << " puntos gracias a su armadura" << std::endl;
    amount -= this->_armor_damage_reduction;
    if (amount < 0)
        amount = 0;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
    std::cout << "miniFR4G-TP " << this->_name << " Recibe "<< amount << " puntos de daño! Puntos de daño restantes:" << this->_hit_points << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
    if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
    this->_hit_points += amount;
    std::cout << "miniFR4G-TP " << this->_name << " recupera "<< amount << " puntos de daño! Puntos de daño:" << this->_hit_points << std::endl;
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
