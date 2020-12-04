#include "ZombieHorde.hpp"
#include <time.h>

ZombieHorde::ZombieHorde() {}

ZombieHorde::ZombieHorde(int n)
{
    if (n <= 0 || n >= 2147483647)
    {
        std::cout << "Numero Invalido de Zombies" << std::endl;
        std::cout << "Numero de zombies a Default : 1" << std::endl;
        n = 1;
    }

    this->_zombies = new Zombie[n];
    this->n_zombies = n;
    std::string name_list[10] = {"Jonathan Joestar", "Joseph Joestar", "Jotaro Kujo", "Josuke Higashikata",
                                "speedwagon", "Dio Brando", "Polnareff", "Okuyasu Nijimura", "ora ora ora", "muda muda muda"};
    for (int i = 0; i < n; i++)
    {
        this->_zombies[i].set_Name(name_list[rand() % 9 + 1]);
		this->_zombies[i].set_Type("Jojos");
    }
}

ZombieHorde::ZombieHorde(const ZombieHorde& copy)
:
    _zombies(copy._zombies),
    n_zombies(copy.n_zombies)
{}

ZombieHorde::~ZombieHorde() { delete [] _zombies; }

ZombieHorde & ZombieHorde::operator=(const ZombieHorde& op)
{
    if (this == &op)
        return (*this);
    this->n_zombies = op.n_zombies;
    this->_zombies = op._zombies;
    return (*this);
}

void    ZombieHorde::announce()
{
    int i = 0;
    while(i < this->n_zombies)
    {
        _zombies[i].announce();
        i++;
    }
}