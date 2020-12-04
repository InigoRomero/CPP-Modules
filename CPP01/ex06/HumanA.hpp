#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA;

class HumanA
{
    public:
        HumanA();
        HumanA(std::string name, Weapon& weapon);
        HumanA(const HumanA&);
        virtual ~HumanA();
        HumanA &operator=(const HumanA& op);

        void        attack();
    private:
        std::string _name;
		Weapon& _weapon;
        // Lo hacemos referencia ya que nos pasan ya el objeto asignado y no vamos a asignarle nada nuevo
};

#endif