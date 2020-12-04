#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
int main()
{
    //Solucion https://stackoverflow.com/questions/137282/how-can-i-avoid-the-diamond-of-death-when-using-multiple-inheritance
    srand(time(NULL));
   // FragTrap clap("PerroLoco");
   // FragTrap trap("CaraLoca");
  //  ScavTrap miniClap("miniPerroLoco");
    ScavTrap miniTrap("miniCaraLoca");
    NinjaTrap ninja("Naruto");
    SuperTrap super("Super");
 /*   ClapTrap clap2;
    

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
    std::cout << "------------------NINJA--------------------------" << std::endl;
    ninja.ninjaShoebox(clap);
    ninja.ninjaShoebox(trap);
    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(clap2);*/
    std::cout << "------------------SUPERSTRAP--------------------------" << std::endl;
    super.ninjaShoebox(miniTrap);
    super.ninjaShoebox(ninja);
    super.vaulthunter_dot_exe(ninja.getName());
	std::cout << std::endl;
    return (0);
}
