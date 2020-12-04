#include "SuperTrap.hpp"

/*
** @brief Default contructor:
** The "SuperTrap".
*/
SuperTrap::SuperTrap() 
:
    ClapTrap(),
    FragTrap(),
    NinjaTrap()
{}

/*
** @brief Init contrcutor:
** The "SuperTrap".
*/
SuperTrap::SuperTrap(std::string name)
:
    ClapTrap(
        100,
        10,
        120,
        120,
        1,
        name,
        60,
        30,
        5
    ),
    FragTrap(name),
    NinjaTrap(name)
{
    std::cout << "Soy el Nieto chetado" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& op)
:
    ClapTrap(op)
{
    std::cout << "Super Trap Copied !" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "EL nieto se va!" << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap& op)
{
    if (this == &op)
        return (*this);
    ClapTrap::operator=(op);
    return (*this);
}