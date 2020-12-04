#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent zombie_event;
    Zombie      *zombie;

    srand ( time(NULL) );
    zombie = new Zombie("Rosalia", "Cantante");
    zombie->announce();
    delete zombie;

    zombie = zombie_event.newZombie("SinTipo");
    zombie->announce();
    delete zombie;

    zombie_event.setZombieType("Artista");

    zombie = zombie_event.newZombie("Pablo Picasso");
    zombie->announce();
    delete zombie;

    zombie_event.setZombieType("JoJos");
    zombie = zombie_event.randomChump();
    delete zombie;
    
    zombie_event.setZombieType("JoJos");
    zombie = zombie_event.randomChump();
    delete zombie;
}