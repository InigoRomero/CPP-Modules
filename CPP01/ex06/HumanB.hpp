#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB;

class HumanB
{
    public:
        HumanB();
        HumanB(std::string name);
        HumanB(const HumanB&);
        virtual ~HumanB();
        HumanB &operator=(const HumanB& op);

        void        attack();
        void        setWeapon(Weapon& weapon);
    private:
        std::string _name;
		Weapon *_weapon;
        // Lo hacemos puntero para poder asignarle un nuevo valor como hace en el main ya que en referencia no se puede
};

#endif