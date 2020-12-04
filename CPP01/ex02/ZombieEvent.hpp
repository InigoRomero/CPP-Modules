#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent;

class ZombieEvent
{
    public:
        ZombieEvent();
        ZombieEvent(const ZombieEvent&);
        virtual ~ZombieEvent();
        ZombieEvent &operator=(const ZombieEvent &op);

		// Getter - Setter
        void setZombieType(std::string type);
        std::string getZombieType();
        
        Zombie *newZombie(std::string name);
        Zombie *randomChump();
    
    private:
        std::string _type;
};

#endif