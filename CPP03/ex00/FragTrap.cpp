#include "FragTrap.hpp"

FragTrap::FragTrap()
:
	_hit_points(100),
    _max_hit_points(100),
    _energy_points(100),
    _max_energy_points(100),
    _level(1),
    _name("LocoMundo"),
    _melee_attack_damage(30),
    _ranged_attack_damage(20),
    _armor_damage_reduction(5)
{
    std::cout << "FR4G-TP Ha nacido para quedarse" << std::endl;
}

FragTrap::FragTrap(std::string name)
:
	_hit_points(100),
    _max_hit_points(100),
    _energy_points(100),
    _max_energy_points(100),
    _level(1),
    _name(name),
    _melee_attack_damage(30),
    _ranged_attack_damage(20),
    _armor_damage_reduction(5)
{
    std::cout <<"FR4G-TP Ha nacido para quedarse" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap() 
{
    std::cout << "FR4G-TP se va por que quiere" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& op)
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

void			FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " ataca a "<< target << " de lejos, ¡causándole "<< this->_ranged_attack_damage << " puntos de daño!" <<std::endl;
}

void			FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " ataca a "<< target << "de cerca, ¡causándole "<< this->_melee_attack_damage << " puntos de daño!" <<std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G-TP " << this->_name << " Reducira el daño: " << this->_armor_damage_reduction << " puntos gracias a su armadura" << std::endl;
    amount -= this->_armor_damage_reduction;
    if (amount < 0)
        amount = 0;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
    std::cout << "FR4G-TP " << this->_name << " Recibe "<< amount << " puntos de daño! Puntos de daño restantes:" << this->_hit_points << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
    if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
    this->_hit_points += amount;
    std::cout << "FR4G-TP " << this->_name << " recupera "<< amount << " puntos de daño! Puntos de daño:" << this->_hit_points << std::endl;
}

typedef void (FragTrap::* attacks) (std::string const & target);

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
        attacks cmd[] = {
            &FragTrap::ataqueVasco,
            &FragTrap::ataqueFilosofo,
            &FragTrap::ataquePolitico,
            &FragTrap::ataqueLoco,
            &FragTrap::ataqueCani
        };
        
        if (this->_energy_points < 25)
        {
            std::cout << "FR4G-TP " << this->_name << "Se quedo sin energia el ranzio"<<std::endl;      
            return;
        }
        (this->*cmd[rand() % 5])(target);
        this->_energy_points -= 25;
}

void		FragTrap::ataqueVasco(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " Realiza ataque vasco a "<< target << "AUPA JIPOITUKO ZAITUT "<< this->_melee_attack_damage << " puntos de daño!" <<std::endl;
}

void		FragTrap::ataqueFilosofo(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " Realiza ataque filosofico a "<< target << "Cada cosa que existe nace sin razón, se prolonga por debilidad y muere por casualidad "<< this->_melee_attack_damage << " puntos de daño!" <<std::endl;
}

void		FragTrap::ataquePolitico(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " Realiza ataque politico a "<< target << "ES EL ALCALDE QUIEN NOS ESCOGE "<< this->_melee_attack_damage << " puntos de daño!" <<std::endl;
}

void		FragTrap::ataqueLoco(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " Realiza ataque loco a "<< target << "SOY TIERRAPLANISTA "<< this->_melee_attack_damage << " puntos de daño!" <<std::endl;
}

void		FragTrap::ataqueCani(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " Realiza ataque cani a "<< target << "QUE DICE ER TONTOS ESTE "<< this->_melee_attack_damage << " puntos de daño!" <<std::endl;
}