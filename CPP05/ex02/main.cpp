#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));
	Bureaucrat ricardo = Bureaucrat("ricardo", 42);
	Bureaucrat noEjecutador = Bureaucrat("DonNadie", 150);
	ShrubberyCreationForm tree = ShrubberyCreationForm("loco");
	ShrubberyCreationForm dos = ShrubberyCreationForm("dos");
	RobotomyRequestForm robot = RobotomyRequestForm("loco");
	PresidentialPardonForm presidential = PresidentialPardonForm("loco");
	ricardo.signForm(tree);
	ricardo.signForm(robot);
	ricardo.signForm(dos);
	
	//creamos archivo de arboles desde el objeto form
	try
	{
		dos.execute(ricardo);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	//creamos archivo de arboles
	try
	{
		ricardo.executeForm(tree);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	//ejecutamos el robot
	try
	{
		ricardo.executeForm(robot);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}

	//ejecutamos el robot
	try
	{
		ricardo.executeForm(robot);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	//ejecutamos presidential FALLO to low
	try
	{
		ricardo.executeForm(presidential);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}

	//ejecutar presidente sin firmar
	Bureaucrat president = Bureaucrat("ErPresi", 1);
	try
	{
		president.executeForm(presidential);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	president.signForm(presidential);
	//ejecutar presidente Bien
	try
	{
		president.executeForm(presidential);
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	return (0);
}