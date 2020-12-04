#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap;

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap();
        SuperTrap(std::string name);            
        SuperTrap(const SuperTrap&);             
        virtual ~SuperTrap();                         
        SuperTrap &operator=(const SuperTrap& op);
};


#endif