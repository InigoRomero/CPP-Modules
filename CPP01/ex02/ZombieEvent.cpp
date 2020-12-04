#include "ZombieEvent.hpp"
 #include <time.h>

ZombieEvent::ZombieEvent()
:
    _type()
{}

ZombieEvent::ZombieEvent(const ZombieEvent& copy)
:
    _type(copy._type)
{}

ZombieEvent::~ZombieEvent() {}

ZombieEvent & ZombieEvent::operator=(const ZombieEvent& op)
{
    if (this == &op)
        return (*this);
    this->_type = op._type;
    return (*this);
}

// GETTER - SETTER
void ZombieEvent::setZombieType(std::string type) { this->_type = type;}

Zombie *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name , this->_type));
}

Zombie *ZombieEvent::randomChump()
{
    Zombie *rtn;

    std::string name_list[10] = {"Jonathan Joestar", "Joseph Joestar", "Jotaro Kujo", "Josuke Higashikata",
                                "speedwagon", "Dio Brando", "Polnareff", "Okuyasu Nijimura", "ora ora ora", "muda muda muda"};
    if (this->_type == "")
        this->_type = "JoJos";
    rtn = newZombie(name_list[rand() % 9 + 1]);
    rtn->announce();
    return (rtn);
}