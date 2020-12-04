#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

class FragTrap;

class FragTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);

    private:
		unsigned int	_hit_points;
		unsigned int	_max_hit_points;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_damage_reduction;
		void			ataqueVasco(std::string const & target);
		void			ataqueFilosofo(std::string const & target);
		void			ataquePolitico(std::string const & target);
		void			ataqueLoco(std::string const & target);
		void			ataqueCani(std::string const & target);

};

#endif