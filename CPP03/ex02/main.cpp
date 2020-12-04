#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL));
    FragTrap clap("PerroLoco");
    FragTrap trap("CaraLoca");
    ScavTrap miniClap("miniPerroLoco");
    ScavTrap miniTrap("miniCaraLoca");

	std::cout << std::endl;
    clap.rangedAttack("CaraLoca");
    trap.takeDamage(20);
    clap.meleeAttack("CaraLoca");
    trap.takeDamage(30);
    trap.beRepaired(39);
    
    clap.vaulthunter_dot_exe("CaraLoca");
    std::cout << std::endl;
	std::cout << "------------------SCAVTRAP--------------------------" << std::endl;
    
	std::cout << std::endl;
    miniClap.rangedAttack("miniCaraLoca");
    miniTrap.takeDamage(20);
    miniClap.meleeAttack("miniCaraLoca");
    miniTrap.takeDamage(30);
    miniTrap.beRepaired(39);
    miniTrap.beRepaired(80);
    miniTrap.takeDamage(120);
    miniTrap.beRepaired(66);
    
    miniClap.challengeNewcomer("miniCaraLoca");
    miniClap.challengeNewcomer("miniCaraLoca");
    miniClap.challengeNewcomer("miniCaraLoca");
    
	std::cout << std::endl;
    return (0);
}
