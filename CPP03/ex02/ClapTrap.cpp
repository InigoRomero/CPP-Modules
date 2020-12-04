#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:
	_hit_points(0),
    _max_hit_points(0),
    _energy_points(0),
    _max_energy_points(0),
    _level(0),
    _name(""),
    _melee_attack_damage(0),
    _ranged_attack_damage(0),
    _armor_damage_reduction(0)
{
    std::cout << "YO SOY TU PADRE" << std::endl;
}

ClapTrap::ClapTrap(
        unsigned int	hit_points,
        unsigned int	max_hit_points,
        unsigned int	energy_points,
        unsigned int	max_energy_points,
        unsigned int	level,
        std::string		name,
        unsigned int	melee_attack_damage,
        unsigned int	ranged_attack_damage,
        unsigned int	armor_damage_reduction
    ) :
        _hit_points(hit_points),
        _max_hit_points(max_hit_points),
        _energy_points(energy_points),
        _max_energy_points(max_energy_points),
        _level(level),
        _name(name),
        _melee_attack_damage(melee_attack_damage),
        _ranged_attack_damage(ranged_attack_damage),
        _armor_damage_reduction(armor_damage_reduction)
{
        std::cout << "YO SOY TU PADRE" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Voy a por tabaco" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& op)
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

void			ClapTrap::rangedAttack(std::string const & target)
{
    std::string typeClap = "FR4G-TP ";
    if (this->_max_energy_points == 50)
        typeClap = "miniFR4G-TP ";
    std::cout << typeClap << this->_name << " ataca a "<< target << " de lejos, ¡causándole "<< this->_ranged_attack_damage << " puntos de daño!" <<std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target)
{
    std::string typeClap = "FR4G-TP ";
    if (this->_max_energy_points == 50)
        typeClap = "miniFR4G-TP ";
    std::cout << typeClap << this->_name << " ataca a "<< target << "de cerca, ¡causándole "<< this->_melee_attack_damage << " puntos de daño!" <<std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
    std::string typeClap = "FR4G-TP ";
    if (this->_max_energy_points == 50)
        typeClap = "miniFR4G-TP ";
    std::cout << typeClap << this->_name << " Reducira el daño: " << this->_armor_damage_reduction << " puntos gracias a su armadura" << std::endl;
    amount -= this->_armor_damage_reduction;
    if (amount < 0)
        amount = 0;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
    std::cout << typeClap << this->_name << " Recibe "<< amount << " puntos de daño! Puntos de daño restantes:" << this->_hit_points << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
    std::string typeClap = "FR4G-TP ";
    if (this->_max_energy_points == 50)
        typeClap = "miniFR4G-TP ";
    if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
    this->_hit_points += amount;
    std::cout << typeClap << this->_name << " recupera "<< amount << " puntos de daño! Puntos de daño:" << this->_hit_points << std::endl;
}
