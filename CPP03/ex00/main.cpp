#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));
    FragTrap clap("PerroLoco");
    FragTrap trap("CaraLoca");
    
	std::cout << std::endl;
    clap.rangedAttack("CaraLoca");
    trap.takeDamage(20);
    clap.meleeAttack("CaraLoca");
    trap.takeDamage(30);
    trap.beRepaired(39);
    trap.beRepaired(80);
    trap.takeDamage(120);
    trap.beRepaired(66);
    
    clap.vaulthunter_dot_exe("CaraLoca");
    clap.vaulthunter_dot_exe("CaraLoca");
    clap.vaulthunter_dot_exe("CaraLoca");
    clap.vaulthunter_dot_exe("CaraLoca");
    clap.vaulthunter_dot_exe("CaraLoca");
    
	std::cout << std::endl;
    return (0);
}
