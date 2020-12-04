# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"


int main()
{
    Intern becado;
    Bureaucrat ricardo = Bureaucrat("ricardo", 1);
    //Bureaucrat ricardo = Bureaucrat("ricardo", 1);

    //Form que no exista
    std::cout << "[-][-][-]FORM _EXCEPTION[-][-][-]" << std::endl;
	try
	{
		Form *ran = becado.makeForm("Random Form", "ricardo");
        std::cout << ran << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
    //Form existente robot
    std::cout << "[-][-][-]ROBOT_FORM[-][-][-]" << std::endl;
    try
	{
		Form *ran = becado.makeForm("robotomy request", "ricardo");
        ricardo.signForm(*ran);
		ricardo.executeForm(*ran);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    //Form existente Arboles
    std::cout << "[-][-][-]TREES_FORM[-][-][-]" << std::endl;
    try
	{
		Form *ran = becado.makeForm("shrubbery creation", "ricardo");
        ricardo.signForm(*ran);
		ricardo.executeForm(*ran);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    //Form existente Presidential
    std::cout << "[-][-][-]PRESIDENTIAL_FORM[-][-][-]" << std::endl;
    try
	{
		Form *ran = becado.makeForm("presidential pardon", "ricardo");
        ricardo.signForm(*ran);
		ricardo.executeForm(*ran);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}