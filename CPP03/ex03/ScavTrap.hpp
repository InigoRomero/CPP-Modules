#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		virtual ~ScavTrap();
		ScavTrap &operator=(const ScavTrap& op);
		void			challengeNewcomer(std::string const & target);

};

#endif