#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap;

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap&);
		virtual ~NinjaTrap();
		NinjaTrap &operator=(const NinjaTrap& op);
		void			ninjaShoebox(ClapTrap & claptrap);
		void			ninjaShoebox(NinjaTrap & claptrap);
		void			ninjaShoebox(ScavTrap & claptrap);
		void			ninjaShoebox(FragTrap & claptrap);

};

#endif