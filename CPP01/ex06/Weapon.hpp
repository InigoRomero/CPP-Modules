#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon;

class Weapon
{
    public:
        Weapon();
        Weapon(std::string type);
        Weapon(const Weapon&);
        virtual ~Weapon();
        Weapon &operator=(const Weapon& op);

		// Getter - Setter
        const std::string&  getType();
        void                setType(const std::string& type);

    private:
        std::string _type;
};

#endif