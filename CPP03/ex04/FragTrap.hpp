#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap;

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap& op);
		void			vaulthunter_dot_exe(std::string const & target);

    private:
		void			ataqueVasco(std::string const & target);
		void			ataqueFilosofo(std::string const & target);
		void			ataquePolitico(std::string const & target);
		void			ataqueLoco(std::string const & target);
		void			ataqueCani(std::string const & target);

};

#endif