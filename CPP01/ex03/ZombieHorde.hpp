#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP


#include "Zombie.hpp"

class ZombieHorde;

class ZombieHorde
{
    public:
        ZombieHorde();
        ZombieHorde(int n);
        ZombieHorde(const ZombieHorde&);
        virtual ~ZombieHorde();
        ZombieHorde &operator=(const ZombieHorde& op);

        void announce();

    private:
        Zombie  *_zombies;
        int     n_zombies;
};

#endif