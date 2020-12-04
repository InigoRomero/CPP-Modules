#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde horde(5);
    horde.announce();

    ZombieHorde horde_invalid(5);
    horde_invalid.announce();
}